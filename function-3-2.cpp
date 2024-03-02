#include <iostream>
#include <algorithm>

int median_array(int array[], int n){
    const int size = n;
    std::sort(array, array + size);

    return array[n/2];
}