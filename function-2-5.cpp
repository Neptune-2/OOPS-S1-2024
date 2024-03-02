#include <iostream>

bool is_descending(int array[], int n){
    bool truth = 1;
    for(int i=1; i<n; i++){
        if(array[i]>array[i-1]){
            truth = 0;
        }
    }
    return truth;
}
