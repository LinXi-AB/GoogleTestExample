add_executable(math_test math_test.cpp)
target_link_libraries(math_test gtest_main math)

include(GoogleTest)
gtest_discover_tests(math_test)
