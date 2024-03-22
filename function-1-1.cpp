#include "Person.h"
#include <stdio.h>
#include <iostream>

Person* createPersonArray(int n) {
    Person* array = new Person[n];
    for(int i=0; i<n; i++){
        array[i].name = "John Doe";
        array[i].age = 0;
    }
    return array;
}


Person* createPersonArray1(int n) {
    Person* array = new Person[n];
    for(int i=0; i<n; i++){
        array[i].name = "Jane Doe";
        array[i].age = 1;
    }
    return array;
}