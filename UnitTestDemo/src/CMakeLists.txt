add_library(CalculatorLib calculator.cpp calculator.h)

target_include_directories(CalculatorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "CMakeLists.txt in 'src' directory processed, defined CalculatorLib.")
