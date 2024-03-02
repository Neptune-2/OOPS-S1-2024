#include <iostream>

double weighted_average(int array[], int n){
    int ones=0;
    int twos=0;
    int threes=0;
    int fours=0;
    int fives=0;
    int sixes=0;
    int sevens=0;
    int eights=0;
    int nines=0;

    for(int i=0; i<n; i++){
        if(array[i]==2){
            twos++;
        } else if(array[i]==5){
            fives++;
        } else if(array[i]==9){
            nines++;
        } else if (array[i]==1){
            ones++;
        } else if (array[i]==3){
            threes++;
        } else if (array[i]==4){
            fours++;
        } else if (array[i]==6){
            sixes++;
        } else if (array[i]==7){
            sevens++;
        } else if (array[i]==8){
            eights++;
        }
    }

    int sum = (1*ones)/n + (2*twos)/n + (3*threes)/n + (4*fours)/n + (5*fives)/n + (6*sixes)/n +(7*sevens)/n + (8*eights)/n + (9*nines)/n;
    return sum;
}