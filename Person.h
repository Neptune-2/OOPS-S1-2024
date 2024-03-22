#ifndef PERSON_H
#define PERSON_H
#include <stdio.h>
#include <iostream>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

Person* createPersonArray(int n);
Person* createPersonArray1(int n);

#endif