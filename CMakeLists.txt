cmake_minimum_required(VERSION 3.15)
project(hw-3 CXX)


# Global settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(INC_DIR "${PROJECT_SOURCE_DIR}/include")
set(TEST_DIR "${PROJECT_SOURCE_DIR}/tests")

include_directories("${INC_DIR}")
add_compile_options(-Wall)

add_executable(main "${SRC_DIR}/main.cpp" "${SRC_DIR}/two-sum.cpp")


