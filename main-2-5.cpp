#include <iostream>
#include "function-2-5.h"

int main(){
    int array[] = {8,7,6,5,4,3,2,1};
    bool truth = is_descending(array, 8);
    std::cout << truth;
}