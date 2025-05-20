cmake_minimum_required(VERSION 4.0.1)

project(MathProject VERSION 0.0.1 LANGUAGES CXX)

add_library(MathLib STATIC math_lib/math_lib.cpp)

target_include_directories(MathLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/math_lib)

add_executable(MathApp main.cpp)

target_link_libraries(MathApp PRIVATE MathLib)