import os
import sys
import subprocess

install_dir = sys.argv[1] if len(sys.argv) > 1 else os.path.abspath("install")
build_dir = os.path.abspath("build/rez")

os.makedirs(build_dir, exist_ok=True)

# Configure
subprocess.check_call([
    "meson", "setup", build_dir, "--prefix", install_dir
])

# Build
subprocess.check_call([
    "meson", "compile", "-C", build_dir
])

# Test
subprocess.check_call([
    "meson", "test", "-C", build_dir
])

# Install
subprocess.check_call([
    "meson", "install", "-C", build_dir
])