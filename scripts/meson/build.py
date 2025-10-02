import os
import sys
from pathlib import Path

project_root = str(Path(__file__).resolve().parents[2])
sys.path.insert(0, project_root)

from windows.path_finder import PathFinder
from builder import MesonBuilder

class ArgParser:
    def __init__(self):
        import argparse
        self.parser = argparse.ArgumentParser(description="Meson build script with Visual Studio environment.")
        self.parser.add_argument('--clean', action='store_true', help='Remove build and install directories before building (clean build)')

    def parse(self):
        return self.parser.parse_args()

def main():
    args = ArgParser().parse()
    builder = MesonBuilder(project_root, path_finder=PathFinder())
    builder.run(clean=args.clean)

if __name__ == "__main__":
    try:
        main()
    except Exception as ex:
        print(f"Fatal error: {ex}")
        sys.exit(1)