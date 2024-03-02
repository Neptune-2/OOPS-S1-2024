#include <iostream>
#include "function-2-2.h"

int main(){
    int array[] = {3,4,5,2};
    int smallest = max_element(array, 4);
    std::cout << smallest;
}