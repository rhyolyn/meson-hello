hello_exe = executable('hello',
    sources: ['hello.cpp'],
    dependencies: [greetings_dep, salutations_dep],
    install: true,
    install_dir: join_paths(get_option('prefix'))
)

subdir('tests')