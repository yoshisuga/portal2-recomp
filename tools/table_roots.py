"""Find adjacent code pointers in prepared ELF data tables.

Only symbol entries or relocated code pointers in executable ELF segments qualify.
The lifter subsequently verifies that each root is an instruction boundary.
These are compilation roots, not evidence that the functions were executed.
"""
from pathlib import Path
import struct


def adjacent_roots(layout, address):
    owners = {}
    for module in layout['modules']:
        for entry in set(module['entries']) | set(module.get('data_ptrs', [])):
            if any(s['flags'] & 1 and s['vaddr'] <= entry < s['vaddr'] + s['filesz'] for s in module['loads']):
                owners[entry] = module
    if address not in owners:
        return got_relative_roots(layout, address)
    found = {address}
    for module in layout['modules']:
        data = Path(module['image']).read_bytes()
        for segment in module['loads']:
            if segment['flags'] & 1:
                continue
            start, end = segment['off'], segment['off'] + segment['filesz']
            words = {offset: struct.unpack_from('<I', data, offset)[0]
                     for offset in range(start, end - 3, 4)}
            for offset, value in words.items():
                if value != address:
                    continue
                for direction in (-4, 4):
                    cursor = offset + direction
                    for _ in range(256):
                        entry = words.get(cursor)
                        if entry not in owners:
                            break
                        found.add(entry)
                        cursor += direction
    return [f'{owners[entry]["name"]}:code:{entry - owners[entry]["base"]:#x}'
            for entry in sorted(found)]


def got_relative_roots(layout, address):
    """Table de saut relative au GOT (GCC PIC : entrée = cible - GOT) contenant
    `address` : toutes les entrées contiguës qui tombent dans le code du même
    module. Ce ne sont que des racines ; le lifter vérifie chaque frontière."""
    module = next((m for m in layout['modules']
                   if any(s['flags'] & 1 and s['vaddr'] <= address < s['vaddr'] + s['filesz'] for s in m['loads'])), None)
    if module is None:
        return []
    got, (lo, hi) = module['gotplt'], module['text']
    data = Path(module['image']).read_bytes()
    wanted = (address - got) & 0xffffffff
    found = set()
    for segment in module['loads']:
        start, end = segment['off'], segment['off'] + segment['filesz']
        words = {offset: struct.unpack_from('<I', data, offset)[0] for offset in range(start, end - 3, 4)}
        code = lambda value: lo <= (value + got) & 0xffffffff < hi
        for offset, value in words.items():
            if value != wanted or lo <= segment['vaddr'] + offset - start < hi:
                continue
            for direction in (-4, 4):
                cursor = offset
                for _ in range(1024):
                    entry = words.get(cursor)
                    if entry is None or not code(entry):
                        break
                    found.add((entry + got) & 0xffffffff)
                    cursor += direction
    return [f'{module["name"]}:code:{entry - module["base"]:#x}' for entry in sorted(found)]
