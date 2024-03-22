#include "Person.h"
#include <stdio.h>
#include <iostream>

int main(){
    PersonList array = createPersonList(2);
    PersonList array2;
    array2 = deepCopyPersonList(array);
}