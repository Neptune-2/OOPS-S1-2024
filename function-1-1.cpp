#include "Person.h"
#include <stdio.h>
#include <iostream>

Person* createPersonArray(int n) {
    Person* array = new Person[n];
    for(int i=0; i<n; i++){
        array[i] = {"John Doe", 0};
    }
    return array;
}
