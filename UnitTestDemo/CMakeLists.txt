cmake_minimum_required(VERSION 4.0.1)

project(UnitTestDemo VERSION 0.0.1 LANGUAGES CXX)

# Fetch Google Test
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.17.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

message(STATUS "Top-level CMakeLists.txt for UnitTestDemoProject processed.")
message(STATUS "GoogleTest should be fetched and testing is enabled.")