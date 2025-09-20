greetings_inc = include_directories('include')

greetings_lib = library('greetings',
    sources: [
        'src/greetings.cpp',
        'include/greetings/greetings.h'
    ],
    include_directories: [greetings_inc, salutations_inc],
    dependencies: [common_dep, salutations_dep],
    cpp_args: '-DMESON_HELLO_DLL_EXPORTS',
    install: true,
    install_dir: join_paths(get_option('prefix'))
)

greetings_dep = declare_dependency(
    link_with: greetings_lib,
    include_directories: greetings_inc,
    dependencies: [common_dep, salutations_dep]
)