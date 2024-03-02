#include <iostream>
#include "function-1-2.h"

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int mean = array_mean(myArray, 5);
    std::cout << "Mean: " << mean << std::endl;
    return 0;
}