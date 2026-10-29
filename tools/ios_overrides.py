#!/usr/bin/env python3
"""Matériaux corrigés pour iOS, tirés des VPK du jeu installé (rien de Valve
n'est versionné ici) et écrits dans un dossier custom/ que le jeu monte avant
ses VPK (gameinfo.txt : game+mod hl2/custom/*).

Half-Life 2 : l'écran de Breen (dev/dev_combinemonitor_3) est éclairci de
2,5 fois par « srgb?$color2 », compensation d'un mélange additif en espace
linéaire ; sur iOS, l'émulation sRGB (runtime/ios/srgb.c) mélange en espace
gamma, comme Direct3D 9 : l'image ressortait trop claire.

  python3 tools/ios_overrides.py <dossier de sortie>
"""
import json
import os
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# jeu -> (VPK, [(fichier, lignes retirées si elles contiennent ce texte)])
OVERRIDES = {
    'hl2': ('hl2/hl2_misc', [('materials/dev/dev_combinemonitor_3.vmt', 'srgb?$color2')]),
}


def vpk_read(prefix, wanted):
    """Contenu des fichiers `wanted` (chemins complets) d'un VPK v1/v2."""
    d = Path(prefix + '_dir.vpk').read_bytes()
    _, version, tree = struct.unpack_from('<III', d, 0)
    pos = 28 if version == 2 else 12
    end = pos + tree
    found = {}

    def string():
        nonlocal pos
        e = d.index(b'\0', pos)
        s = d[pos:e].decode('latin-1')
        pos = e + 1
        return s

    while (ext := string()):
        while (path := string()):
            while (name := string()):
                _, preload, archive, offset, length, _ = struct.unpack_from('<IHHIIH', d, pos)
                pos += 18
                data = d[pos:pos + preload]
                pos += preload
                full = f'{path}/{name}.{ext}' if path.strip() else f'{name}.{ext}'
                if full not in wanted:
                    continue
                if length:
                    if archive == 0x7FFF:
                        data += d[end + offset:end + offset + length]
                    else:
                        with open(f'{prefix}_{archive:03d}.vpk', 'rb') as f:
                            f.seek(offset)
                            data += f.read(length)
                found[full] = data
    return found


def main():
    out = Path(sys.argv[1])
    config = json.loads((ROOT / 'config/local.json').read_text())
    game = config.get('game', 'portal2')
    if game not in OVERRIDES:
        return
    vpk, files = OVERRIDES[game]
    contents = vpk_read(os.path.join(config['game_root'], vpk), {f for f, _ in files})
    for name, drop in files:
        if name not in contents:
            sys.exit(f'{name} absent de {vpk}_dir.vpk')
        lines = contents[name].decode('latin-1').splitlines(keepends=True)
        target = out / name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(''.join(l for l in lines if drop not in l), encoding='latin-1')
        print(f'{target} ({len(lines)} lignes, « {drop} » retiré)')


if __name__ == '__main__':
    main()
