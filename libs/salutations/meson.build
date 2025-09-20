salutations_inc = include_directories('include')

salutations_lib = library('salutations',
    sources: [
        'src/salutations.cpp',
        'include/salutations.h'
    ],
    include_directories: [salutations_inc],
    cpp_args: '-Dsalutations_DLL_EXPORTS',
    install: true,
    install_dir: join_paths(get_option('prefix'))
)

salutations_dep = declare_dependency(
    link_with: salutations_lib,
    include_directories: salutations_inc
)