hello_adapter_sources = [
  'src/mock_hello.cpp',
  'src/real_hello_wrapper.cpp',
  'src/hello_adapter_factory.cpp'
]

hello_adapter_lib = library(
  'hello_adapter',
  hello_adapter_sources,
  include_directories: include_directories('include'),
  dependencies: [common_dep],
  cpp_args: [
	  '-DMESON_HELLO_DLL_EXPORTS',
	  '-DMOCK_HELLO'
  ],
  install: true,
  install_dir: join_paths(get_option('prefix'))
)

hello_adapter_dep = declare_dependency(
  include_directories: include_directories('include'),
  link_with: hello_adapter_lib,
  dependencies: [common_dep]
)

subdir('tests')