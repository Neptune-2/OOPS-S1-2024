#include <iostream>
#include "function-3-1.h"

int main(){
    int array[] = {1,2,2,1};
    bool truth = is_fanarray(array, 4);
    std::cout << truth;
}