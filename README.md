# Summer Carnival '92: Recca Recomp

A work-in-progress recompilation of **Summer Carnival '92: Recca** for the Nintendo Entertainment System (NES).

> **⚠️ WORK IN PROGRESS — NOT A RELEASE**
>
> This project is currently under development. It is being published primarily so developers can inspect the source code, fork the repository, experiment with the recompilation, and contribute improvements. There is currently no official release.

## About

This project aims to create a native recompilation of *Summer Carnival '92: Recca* using the NES recompilation technology developed by **mstan**.

The project is still being actively worked on, and various parts of the recompilation may not yet function correctly.

## NESRecomp

This project was made possible through the work on **NESRecomp** by **mstan**.

Special thanks to mstan for developing the recompilation tool and framework that made it possible to begin working on this project.

NESRecomp:
https://github.com/mstan/nesrecomp

The goal of this repository is also to provide a practical work-in-progress project that developers can use when experimenting with and improving NESRecomp.

## Current Status

**Development status: Work in Progress**

The project should currently be considered a development repository rather than a finished game.

Things may include:

* Incomplete recompilation
* Incorrect graphics
* Missing or incomplete functionality
* Runtime crashes
* Input issues
* Performance problems
* Other NES emulation/recompilation compatibility issues

These issues are expected while development continues.

## Contributing

Contributions and experimentation are welcome.

If you are interested in helping improve the project:

1. Fork the repository.
2. Clone your fork.
3. Make your changes.
4. Build and test your changes.
5. Commit your improvements.
6. Push your changes to your fork.
7. Open a pull request with a description of what you changed.

Developers are encouraged to investigate bugs, improve compatibility, improve the recompilation process, and contribute fixes that may also help improve NESRecomp.

## Building From Source

Clone the repository:

```bash
git clone https://github.com/omegakatana92/Summer-Carnival-Recca-Recomp.git
cd Summer-Carnival-Recca-Recomp
```

The project uses CMake and the NESRecomp-generated source/framework.

### Windows

A Windows build script is included:

```bat
build_windows.bat
```

You can also configure and build with CMake:

```bash
cmake -S . -B build
cmake --build build --config Release
```

### Linux / macOS

```bash
cmake -S . -B build
cmake --build build --config Release
```

Build requirements may vary depending on the development environment and NESRecomp framework version being used.

## ROM Requirement

The original game ROM is **not included** in this repository.

You must provide your own legally obtained copy of the game ROM for development and testing.

ROM files are intentionally excluded from version control.

## Repository Structure

```text
.
├── framework/       # NES recompilation runtime/framework components
├── generated/       # Generated files used during local development
├── CMakeLists.txt   # CMake build configuration
├── build_windows.bat
├── build.ps1
├── build.sh
├── extras.c
├── extras.h
├── game.toml
└── nesrecomp-project.json
```

Some generated and build files may be produced locally during the recompilation process and are intentionally excluded from Git.

## Development Goals

The primary goal is to improve the Recca recompilation and identify issues that can help advance NESRecomp development.

Areas of interest include:

* CPU/game code compatibility
* Graphics rendering
* Input handling
* Memory behavior
* Mapper compatibility
* Runtime stability
* Performance
* General NESRecomp compatibility

## Disclaimer

*Summer Carnival '92: Recca* is a game originally developed and published by its respective copyright holders.

This repository does not contain the original ROM.

This is an independent development/recompilation project and is not affiliated with or endorsed by the original copyright holders.

## License

This repository contains project source code and recompilation-related work. Refer to the individual source files and the upstream NESRecomp project for applicable licensing information.

---

**Status: Work in Progress — Development/Forking Only**

