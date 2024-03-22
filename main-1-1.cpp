#include "Person.h"
#include <stdio.h>
#include <iostream>

int main(){
    Person* array = createPersonArray(2);
    std::cout << array;
}