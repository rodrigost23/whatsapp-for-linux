# whatsapp-for-linux

An unofficial WhatsApp desktop application written in C++.

[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-black.svg)](https://snapcraft.io/whatsapp-for-linux)
[![Get it from AUR](https://upload.wikimedia.org/wikipedia/commons/thumb/7/74/Arch_Linux_logo.svg/200px-Arch_Linux_logo.svg.png)](https://aur.archlinux.org/packages/whatsapp-for-linux)

[![Action Status](https://github.com/eneshecan/whatsapp-for-linux/workflows/Build/badge.svg)](https://github.com/eneshecan/whatsapp-for-linux/actions)
[![Action Status](https://github.com/eneshecan/whatsapp-for-linux/workflows/Install/badge.svg)](https://github.com/eneshecan/whatsapp-for-linux/actions)
[![Action Status](https://github.com/eneshecan/whatsapp-for-linux/workflows/Release/badge.svg)](https://github.com/eneshecan/whatsapp-for-linux/actions)

![App Window](screenshot/app.png)


## Features

* Features come with whatsapp web except audio and image capture
* Zoom in/out
* System tray icon
* Autostart with system
* Fullscreen mode
* Show/Hide headerbar by pressing *Alt+H*
* Spell check in system language. You might need to install the corresponding dictionary to get this working i.e. `aspell-en` package for English


## Using whatsapp-for-linux

Check out [releases](https://github.com/eneshecan/whatsapp-for-linux/releases) for available packages.


## Dependencies

* cmake >= 3.8
* gtkmm-3.0
* webkit2gtk-4.0
* appindicator3-0.1


## Build & Run

### Development

1. Create a debug build directory and go into it. `mkdir -p build/debug && cd build/debug`
2. Build cmake. `cmake -DCMAKE_BUILD_TYPE=Debug ../..`
3. Build makefile. `make`
4. Run. `./whatsapp-for-linux`

### Local installation

If you want to install it locally, use `make install` inside the build directory after
building (You'll probably need administrator privileges for this).


## Packaging

### Debian

Run `dpkg-buildpackage -uc -us -ui`.

### Flatpak

1. Create a build directory and go into it. `mkdir -p build && cd build`
2. Run `flatpak-builder flatpak ../flatpak/com.github.whatsapp-for-linux.yml`.

### Snap

Run `snapcraft`. Pass `--use-lxd` option in a virtual environment.


## Contributing

Please read [contributing](.github/contributing.md).

### Code Contributors

[![Code Contributors](https://opencollective.com/whatsapp-for-linux/contributors.svg?width=880&button=false)](https://github.com/eneshecan/whatsapp-for-linux/graphs/contributors)
