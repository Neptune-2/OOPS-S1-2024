#include <iostream>
#include "function-1-1.h"

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int sum = array_sum(myArray, 5);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}