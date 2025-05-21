add_executable(runCalculatorTests test_calculator.cpp)

target_link_libraries(runCalculatorTests PRIVATE 
    CalculatorLib
    GTest::gtest
    GTest::gtest_main
)

add_test(
    NAME CalculatorFunctionalityTest
    COMMAND runCalculatorTests
)

message(STATUS "CMakeLists.txt in 'tests' directory processed, defined runCalculatorTests executable and CTest entry.")