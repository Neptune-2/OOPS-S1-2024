#include "Person.h"
#include "function-1-1.cpp"
#include <stdio.h>
#include <iostream>

int main(void){
    Person* array = createPersonArray(2);
    std::cout << array;
}