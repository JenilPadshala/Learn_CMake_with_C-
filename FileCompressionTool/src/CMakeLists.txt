add_executable(CompressTool main.cpp)

target_link_libraries(CompressTool PRIVATE RLE_Lib)

message(STATUS "CMakeLists.txt in 'src' directory processed, defined CompressTool.")
