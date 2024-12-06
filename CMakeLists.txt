cmake_minimum_required(VERSION 3.15)
project(hw-3 CXX)
enable_testing()

# Global settings
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(INC_DIR "${PROJECT_SOURCE_DIR}/include")
set(TEST_DIR "${PROJECT_SOURCE_DIR}/tests")

include_directories("${INC_DIR}")
add_compile_options(-Wall -Wextra -Werror)

add_executable(main "${SRC_DIR}/main.cpp" "${SRC_DIR}/two-sum.cpp")

find_package(GTest REQUIRED)
add_executable(two-sum-test "${TEST_DIR}/test.cpp" "${SRC_DIR}/two-sum.cpp")
target_link_libraries(two-sum-test PRIVATE GTest::GTest GTest::Main)
target_compile_options(two-sum-test PRIVATE "-fsanitize=address,undefined")
target_link_options(two-sum-test PRIVATE "-fsanitize=address,undefined")
add_test(NAME two-sum-test COMMAND two-sum-test)
include(GoogleTest)
gtest_discover_tests(two-sum-test)
