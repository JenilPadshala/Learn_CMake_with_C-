#include <iostream>
#include "math_lib.h"

int main() {
    int a = 10;
    int b = 5;

    std::cout << "Welcome to Math Program!" << std::endl;
    int sum = add(a,b);
    std::cout << a << " + " << b << " = " << sum << std::endl;

    int difference = subtract(a,b);
    std::cout << a << " - " << b << " = " << difference << std::endl;

    return 0;
}