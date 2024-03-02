#include <iostream>

bool is_fanarray(int array[], int n){
    bool fanarray = true;
    for (int i=0; i<n; i++){
        if(array[i]!=array[n-i-1]){
            fanarray = false;
            break;
        }
    }
    return fanarray;
}