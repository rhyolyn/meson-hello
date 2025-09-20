os_utils_inc = include_directories('include')

os_utils_lib = library('os_utils',
    sources: [
        'src/hello.cpp',
        'include/hello.h'
    ],
    include_directories: os_utils_inc,
    cpp_args: '-DOS_UTILS_DLL_EXPORTS',
    install: true,
    install_dir: join_paths(get_option('prefix'))
)

os_utils_dep = declare_dependency(
    link_with: os_utils_lib,
    include_directories: os_utils_inc
)