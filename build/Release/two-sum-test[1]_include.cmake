if(EXISTS "/mnt/c/Users/Мотя/CPP DPO/CppDevCourse-hw3/build/Release/two-sum-test[1]_tests.cmake")
  include("/mnt/c/Users/Мотя/CPP DPO/CppDevCourse-hw3/build/Release/two-sum-test[1]_tests.cmake")
else()
  add_test(two-sum-test_NOT_BUILT two-sum-test_NOT_BUILT)
endif()