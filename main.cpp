#include <iostream>
#include "count.cpp"
extern int count(int[], int);

int main() {
    int array[] = {1,2,3,4,5,5};
    std::cout << "The number is: " << count(array, sizeof(array)/sizeof(array[0])) << std::endl;
    return 0;
}