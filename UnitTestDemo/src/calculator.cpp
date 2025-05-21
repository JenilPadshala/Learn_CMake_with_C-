#include "calculator.h"
#include <iostream>

Calculator::Calculator() {
    // std::cout << "Calculator created." << std::endl;
}

Calculator::~Calculator() {
    // std::cout << "Calculator destroyed." << std::endl;
}

int Calculator::add(int a, int b) {
    return a + b;
}

