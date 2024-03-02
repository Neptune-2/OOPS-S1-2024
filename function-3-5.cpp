#include <iostream>

double sum_even(double array[], int n){
    int sum = 0;

    for(int i=0; i < n/2 ; i++){
        sum += array[n*2];
    }
    return sum;
}