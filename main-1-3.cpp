#include <stdio.h>
#include "Person.h"
#include <iostream>

int main(void){
    PersonList array = createPersonList(2);
    PersonList array2;
    array2 = deepCopyPersonList(array);
}