#include <iostream>
#include "util.h"
using namespace std;

int main() {
    int a = 3, b = 5;
    int c = add(a, b);
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << minusFunc(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << divFunc(a, b) << std::endl;
    std::cout << "hello git " << std::endl;
    return 0;
}
