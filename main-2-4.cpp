#include <iostream>
#include "function-2-4.h"

int main(){
    int array[] = {1,2,3,4,5,6,7,8};
    bool truth = is_ascending(array, 8);
    std::cout << truth;
}