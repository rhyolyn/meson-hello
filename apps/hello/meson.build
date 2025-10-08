hello_exe = executable('hello',
    sources: ['hello.cpp'],
    dependencies: [greetings_dep, salutations_dep, hello_adapter_dep],
    cpp_args: ['-DMOCK_HELLO=1'],
    install: true,
    install_dir: join_paths(get_option('prefix'))
)

subdir('tests')