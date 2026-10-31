# Half-Life 2 on iPhone

The app is built on your Mac from your own copy of Half-Life 2. It can't be
downloaded prebuilt because it contains Valve's code.

## You need

- An Apple silicon Mac with Xcode, an Apple ID added in Xcode > Settings > Accounts,
  and `brew install sdl2 freetype fontconfig xcodegen cmake ninja`
- Half-Life 2 on Steam:
  - the **game data**: the Mac install, `steamapps/common/Half-Life 2`
  - the **Linux build** (`hl2_linux`, `bin/`, `hl2/bin/`), for example with SteamCMD:
    `steamcmd +@sSteamCmdForcePlatformType linux +force_install_dir ~/hl2-linux +login <user> +app_update 220 +quit`
- An iPhone connected by cable, with Developer Mode on and ~5 GB free

## Configure

`config/local.json`:

```json
{
  "game": "hl2",
  "game_root": "/path/to/Half-Life 2",
  "linux_root": "/path/to/hl2-linux",
  "steam_appid": 220,
  "steam_api_dylib": "/path/to/Half-Life 2/bin/libsteam_api.dylib",
  "ios_bundle_id": "com.yourname.hl2"
}
```

Create the provisioning profile once (and again every 7 days with a free account),
replacing `YOURTEAMID` with your team ID:

```sh
cd ios/signing
export P2_BUNDLE_ID=$(python3 ../../tools/ios_bundle_id.py)
xcodegen
xcodebuild -project P2Signing.xcodeproj -scheme Portal2 -destination generic/platform=iOS \
  -allowProvisioningUpdates DEVELOPMENT_TEAM=YOURTEAMID build
cd ../..
```

## Build and install

```sh
python3 tools/gameprep.py
ios/deps/build.sh device
python3 tools/build_ios.py --target device --release
tools/ios_device.sh install
tools/ios_device.sh data
```

On the iPhone, trust your developer account in Settings > General > VPN & Device
Management, then open Half-Life 2.

## Controls

- Left stick: move
- Right side: look
- Bottom right: fire, with use, jump, crouch, alt-fire, reload, next weapon and
  last weapon around it

Options are in the iOS Settings app under Half-Life 2.
