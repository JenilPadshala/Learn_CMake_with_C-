add_library(RLE_Lib rle.cpp)

target_include_directories(RLE_Lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "CMakeLists.txt in 'lib' directory processed, defined RLE_Lib.")

