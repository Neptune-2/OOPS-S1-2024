#include "Person.h"
#include "function-1-1.cpp"
#include <stdio.h>
#include <iostream>
#include "function-1-2.cpp"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copiedList;
    int n = pl.numPeople;
    copiedList.people = new Person[n];
    for (int i = 0; i < n; ++i) {
        copiedList.people[i] = pl.people[i];
    }
    copiedList.numPeople = n;
    return copiedList;
}