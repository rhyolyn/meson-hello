gtest_dep = dependency('gtest', fallback : ['gtest', 'gtest_dep'])
test_sources = files('test_greetings.cpp')
test_greetings_exe = executable(
    'test_greetings',
    test_sources,
    link_with : greetings_lib,
    dependencies : gtest_dep
)
test('greetings_tests', test_greetings_exe)