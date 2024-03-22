#include "Person.h"
#include "function-1-1.cpp"
#include <stdio.h>
#include <iostream>

PersonList createPersonList(int n){
    Person* array = createPersonArray(n);
    PersonList finalArray;
    for(int i=0;i<n;i++){
        finalArray.numPeople= n;
        finalArray.people = (array);
    }
    return finalArray;
}