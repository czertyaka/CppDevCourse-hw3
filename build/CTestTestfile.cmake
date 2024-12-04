# CMake generated Testfile for 
# Source directory: C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3
# Build directory: C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/build/two-sum-test[1]_include.cmake")
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(two-sum-test "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/build/Debug/two-sum-test.exe")
  set_tests_properties(two-sum-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;22;add_test;C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(two-sum-test "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/build/Release/two-sum-test.exe")
  set_tests_properties(two-sum-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;22;add_test;C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(two-sum-test "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/build/MinSizeRel/two-sum-test.exe")
  set_tests_properties(two-sum-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;22;add_test;C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(two-sum-test "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/build/RelWithDebInfo/two-sum-test.exe")
  set_tests_properties(two-sum-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;22;add_test;C:/Users/Dell G3/Desktop/dz_dpo/CppDevCourse-hw3/CMakeLists.txt;0;")
else()
  add_test(two-sum-test NOT_AVAILABLE)
endif()
