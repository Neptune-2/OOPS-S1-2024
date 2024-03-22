#include "Person.h"
#include <stdio.h>
#include <iostream>

Person* createPersonArray1(int n) {
    Person* array = new Person[n];
    for(int i=0; i<n; i++){
        array[i].name = "Jane Doe";
        array[i].age = 1;
    }
    return array;
}

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
    array2 = shallowCopyPersonList(array);
}