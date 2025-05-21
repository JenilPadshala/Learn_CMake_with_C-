cmake_minimum_required(VERSION 4.0.1)

project(FileCompressionToolProject VERSION 0.0.1 LANGUAGES CXX)

add_subdirectory(lib)
add_subdirectory(src)

message(STATUS "Top-level CMakeLists.txt for FileCompressionToolProject processed.")
