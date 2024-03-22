#include "Person.h"
#include <stdio.h>
#include <iostream>

PersonList createPersonList(int n){
    Person* array = createPersonArray1(n);
    PersonList finalArray;
    finalArray.numPeople = n;
    finalArray.people = array;
    
    return finalArray;
}

int main(){
    PersonList array = createPersonList(2);
    PersonList array2;
    array2 = deepCopyPersonList(array);
}