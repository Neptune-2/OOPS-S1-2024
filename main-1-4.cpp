#include <iostream>
#include "function-1-4.h"

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int myArray2 [] = {1,2,3,4,5};
    int sum = sum_two_arrays(myArray, myArray2, 5);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}