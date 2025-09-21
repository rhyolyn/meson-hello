project('meson-hello', 'cpp',
    version : '0.1',
    default_options : [
        'cpp_std=c++17',
        'buildtype=debug',
        'default_library=shared',
        'b_vscrt=md'
    ]
)

# subdir order matters
# make sure dependecies come before dependents
subdir('libs/common')
subdir('libs/salutations')
subdir('libs/greetings')
subdir('apps/hello')

