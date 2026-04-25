cmake_minimum_required(VERSION 3.14)
project(MyCalculator)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

add_library(calculator calculator.cpp)

add_executable(run_tests test_calculator.cpp)
target_link_libraries(run_tests calculator GTest::gtest_main)