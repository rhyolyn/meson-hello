# meson-hello

A modular C++ project using Meson build system, demonstrating cross-platform dynamic libraries and shared headers.

## Table of Contents

- [Overview](#overview)
- [Directory Structure](#directory-structure)
- [Windows](#windows)
  - [Prerequisites](#windows-prerequisites)
  - [Build Instructions](#windows-build-instructions)
  - [Run Instructions](#windows-run-instructions)
- [Linux](#linux)
  - [Prerequisites](#linux-prerequisites)
  - [Build Instructions](#linux-build-instructions)
  - [Run Instructions](#linux-run-instructions)
- [Project Layout](#project-layout)
- [License](#license)

---

## Overview

This project demonstrates how to organize and build modular C++ libraries and applications using the Meson build system. It supports both Windows and Linux, with shared headers and cross-platform symbol export macros.

## Directory Structure

```sh
apps/ 
	├──hello/ 
	│     └── hello.cpp 
	│     └── meson.build
libs/ 
	├── common/ 
	│     └── include/common/meson_hello_api.h
	│     └── meson.build
	├── greetings/ 
	│     └── include/greetings/greetings.h 
	│     └── src/greetings.cpp
	│     └── meson.build
	├── salutations/ │     
	│     └── include/salutations/salutations.h 
	│     └── src/salutations.cpp 
	│     └── meson.build

meson.build
.gitignore
```

---

## Windows

### Windows Prerequisites

- [Visual Studio 2022](https://visualstudio.microsoft.com/)
- [Meson](https://mesonbuild.com/) and [Ninja](https://ninja-build.org/)
- Git (optional, for cloning)

### Windows Build Instructions

1. Open a Developer Command Prompt for VS.
2. Install Meson and Ninja if not already installed:

```sh
pip install meson ninja
```

3. Configure the build directory:<br>
	Notes:
	- `--prefix` sets the `install` directory. \<install directory\> must be an absolute path
	- Run `meson --help setup` for additional options <br>

```sh
meson setup <build directory> --backend=vs --prefix <install directory>
example: meson setup build/build-win --prefix c:/git/meson-test/install/bin
```

4. Build the project:

```sh
meson compile -C <build directory>
example: meson compile -C build/build-win
```

5. Optionally, run all tests to verify the build:

```sh
meson test -C <build directory>
example: meson test -C build/build-win
```

6. Install the project:

```sh
meson install -C <build directory>
example: meson install -C build/build-win
```

### Windows Run Instructions

To run the built applications, ensure the `install` directory is in your PATH, or use the full path to the executables. For example:

```sh
<install directory>\hello.exe
example: install\bin\hello.exe
```

---

## Linux (Not yet validated)

### Linux Prerequisites

- [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/)
- [Meson](https://mesonbuild.com/) and [Ninja](https://ninja-build.org/)
- Git (optional, for cloning)

### Linux Build Instructions

1. Install the required tools and libraries. For example, on Ubuntu:

```sh
sudo apt install build-essential git
```

2. Clone the repository (if you haven't already):

```sh
git clone https://github.com/username/meson-test.git
```

3. Navigate to the project directory:

```sh
cd meson-test
```

4. Configure the build directory:

```sh
meson setup builddir --prefix=/usr/local
```

5. Build the project:

```sh
meson compile -C builddir
```

6. Optionally, run all tests to verify the build:

