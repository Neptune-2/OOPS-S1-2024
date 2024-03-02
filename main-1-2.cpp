#include <iostream>
#include <iomanip>
#include "function-1-2.h"

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    double mean = array_mean(myArray, 5);
    std::cout << std::fixed << std::setprecision(1) << mean << std::endl;
    return 0;
}