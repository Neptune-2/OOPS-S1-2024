#include <iostream>
#include "function-3-3.h"


int main() {
    int myArray[] = {3, 5, 2, 8, 4, 6, 7};
    double sum = weighted_average(myArray, 7);

    std::cout << sum;

    return 0;
}
