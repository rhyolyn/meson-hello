gtest_dep = dependency('gtest', fallback : ['gtest', 'gtest_dep'])

test_sources = files('test_hello.cpp')

test_hello_exe = executable(
    'test_hello',
    test_sources,
    dependencies : gtest_dep
)

test('hello_tests', test_hello_exe)