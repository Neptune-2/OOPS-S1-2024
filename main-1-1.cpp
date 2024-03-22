#include <stdio.h>
#include "Person.h"
#include <iostream>

int main(void){
    Person* array = createPersonArray(2);
    std::cout << array;
}