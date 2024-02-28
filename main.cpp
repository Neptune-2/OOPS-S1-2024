#include <iostream>
extern int count(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, sizeof(array)/sizeof(array[0])) << std::endl;
    return 0;
}



