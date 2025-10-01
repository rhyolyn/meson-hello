import os
import subprocess

class MesonBuilder:
    def __init__(self, project_root, build_dir=None, install_dir=None, path_finder=None):
        self.project_root = os.path.abspath(project_root)
        self.build_dir = build_dir or os.path.join(self.project_root, "build", "standalone")
        self.install_dir = install_dir or os.path.join(self.project_root, "install")
        self.path_finder = path_finder
        os.makedirs(self.build_dir, exist_ok=True)

    def run(self, clean=False):
        if clean:
            self.clean()
        if self.path_finder is not None:
            commands = [
                f'meson setup "{self.build_dir}" --prefix "{self.install_dir}"',
                f'meson compile -C "{self.build_dir}"',
                f'meson test -C "{self.build_dir}"',
                f'meson install -C "{self.build_dir}"'
            ]
            self.path_finder.run_in_vs_env(commands)
        else:
            self.setup()
            self.compile()
            self.test()
            self.install()

    def setup(self):
        self._run([
            "meson", "setup", self.build_dir, "--prefix", self.install_dir
        ])

    def compile(self):
        self._run([
            "meson", "compile", "-C", self.build_dir
        ])

    def test(self):
        self._run([
            "meson", "test", "-C", self.build_dir
        ])

    def install(self):
        self._run([
            "meson", "install", "-C", self.build_dir
        ])

    def clean(self):
        import shutil
        print(f"Cleaning build directory: {self.build_dir}")
        shutil.rmtree(self.build_dir, ignore_errors=True)
        print(f"Cleaning install directory: {self.install_dir}")
        shutil.rmtree(self.install_dir, ignore_errors=True)

    def _run(self, cmd):
        print(f"Running: {' '.join(cmd)}")
        subprocess.check_call(cmd)