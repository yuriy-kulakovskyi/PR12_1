if(EXISTS "/Users/yura_kulakovskyi/Documents/C++/AP/PR12/PR12_1_CPP/cmake-build-debug/PR12_1_tests[1]_tests.cmake")
  include("/Users/yura_kulakovskyi/Documents/C++/AP/PR12/PR12_1_CPP/cmake-build-debug/PR12_1_tests[1]_tests.cmake")
else()
  add_test(PR12_1_tests_NOT_BUILT PR12_1_tests_NOT_BUILT)
endif()
