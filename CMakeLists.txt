cmake_minimum_required(VERSION 3.14)
project(PR12_1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR12_1
        src/main.cpp
        src/functions.cpp
)

target_link_libraries(PR12_1)

add_executable(PR12_1_tests
        tests/test_h.cpp
        src/functions.cpp
)

target_link_libraries(PR12_1_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR12_1_tests)
