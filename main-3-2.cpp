#include <iostream>
#include "function-3-2.h"


int main() {
    int myArray[] = {3, 5, 2, 8, 4, 6, 7};
    int median = median_array(myArray, 7);

    std::cout << median;

    return 0;
}
