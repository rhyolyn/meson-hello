name = "meson_hello"
version = "0.1.0"
authors = ["Marie McCusker"]
description = "A modular C++ project using Meson build system, demonstrating cross-platform dynamic libraries and shared headers."
requires = [
    "meson",
    "ninja",
    "python-3.6+"
]
tools = []
build_command = "python {root}/scripts/rez/build.py {install}"

def commands():
    import os

    env.PATH.append(os.path.join("{root}", "install", "bin"))
    # Add any additional environment setup here if needed