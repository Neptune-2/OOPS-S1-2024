#include <iostream>

void two_five_nine(int array[], int n){
    int twos;
    int fives;
    int nines;

    for(int i=0; i<n; i++){
        if(array[i]==2){
            twos++;
        } else if(array[i]==5){
            fives++;
        } else if(array[i]==9){
            nines++;
        }
    }
    std::cout << "2:" << twos << ";" << "5:" << fives << ";" << "9:" << nines << ";" << std::endl;
}