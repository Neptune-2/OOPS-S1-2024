#include <iostream>
#include <algorithm>

int median_array(int array[], int n) {
    if (n % 2 == 0 || n < 1) {
        return 0; 
    } else {
        const int size = n;
        std::sort(array, array + size);
        return array[n / 2];
    }
}
