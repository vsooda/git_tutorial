#include <iostream>
#include "util.h"
using namespace std;

int main() {
    int a = 3, b = 5;
    std::cout << a << " + " << b << " = " << addFunc(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << minusFunc(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiFunc(a, b) << std::endl;
    std::cout << "hello git " << std::endl;
    return 0;
}
