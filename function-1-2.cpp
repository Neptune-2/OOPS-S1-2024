#include "Person.h"
#include <stdio.h>
#include <iostream>

PersonList createPersonList(int n){
    Person* array = createPersonArray1(n);
    PersonList finalArray;
    for(int i=0;i<n;i++){
        finalArray.numPeople= n;
        finalArray.people = (array);
    }
    return finalArray;
}