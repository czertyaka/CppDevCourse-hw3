add_test([=[TwoSumsTest.AllPositive]=]  /home/user/CppDevCourse-hw3/build/two-sum-test [==[--gtest_filter=TwoSumsTest.AllPositive]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoSumsTest.AllPositive]=]  PROPERTIES WORKING_DIRECTORY /home/user/CppDevCourse-hw3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TwoSumsTest.NoSum]=]  /home/user/CppDevCourse-hw3/build/two-sum-test [==[--gtest_filter=TwoSumsTest.NoSum]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoSumsTest.NoSum]=]  PROPERTIES WORKING_DIRECTORY /home/user/CppDevCourse-hw3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TwoSumsTest.WithZero]=]  /home/user/CppDevCourse-hw3/build/two-sum-test [==[--gtest_filter=TwoSumsTest.WithZero]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoSumsTest.WithZero]=]  PROPERTIES WORKING_DIRECTORY /home/user/CppDevCourse-hw3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TwoSumsTest.MultiplePairs]=]  /home/user/CppDevCourse-hw3/build/two-sum-test [==[--gtest_filter=TwoSumsTest.MultiplePairs]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoSumsTest.MultiplePairs]=]  PROPERTIES WORKING_DIRECTORY /home/user/CppDevCourse-hw3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TwoSumsTest.MultiplePairsSameElement]=]  /home/user/CppDevCourse-hw3/build/two-sum-test [==[--gtest_filter=TwoSumsTest.MultiplePairsSameElement]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoSumsTest.MultiplePairsSameElement]=]  PROPERTIES WORKING_DIRECTORY /home/user/CppDevCourse-hw3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TwoSumsTest.LastElement]=]  /home/user/CppDevCourse-hw3/build/two-sum-test [==[--gtest_filter=TwoSumsTest.LastElement]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoSumsTest.LastElement]=]  PROPERTIES WORKING_DIRECTORY /home/user/CppDevCourse-hw3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  two-sum-test_TESTS TwoSumsTest.AllPositive TwoSumsTest.NoSum TwoSumsTest.WithZero TwoSumsTest.MultiplePairs TwoSumsTest.MultiplePairsSameElement TwoSumsTest.LastElement)
