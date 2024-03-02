#include <iostream>
#include "function-1-5.h"

int main() {
    int myArray = 7;
    int evens = count_evens(myArray);
    std::cout << "Even: " << evens << std::endl;
    return 0;
}