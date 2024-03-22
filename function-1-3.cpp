#include "Person.h"
#include <stdio.h>
#include <iostream>

PersonList deepCopyPersonList(const PersonList& originalList) {
    PersonList copiedList;
    int n = originalList.numPeople;
    copiedList.people = new Person[n];
    for (int i = 0; i < n; ++i) {
        copiedList.people[i] = originalList.people[i];
    }
    copiedList.numPeople = n;
    return copiedList;
}