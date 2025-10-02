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

def build_command():
    import os
    import sys
    sys.path.insert(0, os.path.join(os.path.dirname(__file__), "scripts", "meson"))
    from meson_builder import MesonBuilder
    # Optionally import PathFinder if you want to use it
    try:
        from scripts.meson.path_finder import PathFinder
        path_finder = PathFinder()
    except ImportError:
        path_finder = None

    project_root = os.path.dirname(os.path.abspath(__file__))
    builder = MesonBuilder(project_root, path_finder=path_finder)
    builder.run()
    sys.path.pop(0)

def commands():
    import os

    env.PATH.append(os.path.join("{root}", "install", "bin"))
    # Add any additional environment setup here if needed