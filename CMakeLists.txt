cmake_minimum_required(VERSION 3.14)
project(demo)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/lib.h" ${CMAKE_CURRENT_SOURCE_DIR}/OtherHeader.h")
set(SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/lib.cpp" ${CMAKE_CURRENT_SOURCE_DIR}/OtherSource.cpp")

add_executable(
  tests
  my_first_test.cpp
)
target_link_libraries(
  tests
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)
