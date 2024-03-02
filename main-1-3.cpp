#include <iostream>
#include "function-1-3.h"

int main() {
    int myArray[] = {2, 3, 4, 5};
    int number = 1;
    int sum = num_count(myArray, 4, 1);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}