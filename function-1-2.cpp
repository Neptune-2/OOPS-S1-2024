#include <iostream>

double array_mean(int array[], int n){
    int sum = 0;
    double mean = 0;
    if (n > 5){
        for(int i=0; i<n; i++){
            sum += array[i];
        }
        mean = sum/n;
        } else {
            mean = 0.0;
        }
    return mean;
}