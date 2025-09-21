gtest_dep = dependency('gtest', fallback : ['gtest', 'gtest_dep'])
test_sources = files('test_salutations.cpp')
test_salutations_exe = executable(
    'test_salutations',
    test_sources,
    link_with : salutations_lib,
    dependencies : gtest_dep
)
test('salutations_tests', test_salutations_exe)