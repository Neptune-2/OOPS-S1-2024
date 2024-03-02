#include <iostream>

double array_mean(int array[], int n) {
    int sum = 0;
    double mean = 0;

    if (n > 0) {
        for (int i = 0; i < n; i++) {
            sum += array[i];
        }
        mean = static_cast<double>(sum) / n;
    } else {
        mean = 0.0;
    }

    return mean;
}