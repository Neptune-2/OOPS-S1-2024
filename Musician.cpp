#include <iostream>
#include <stdio.h>
#include "Musician.h"

class Musician{
    private:
        std::string instrument;
        int exp;
    public:
    Musician(std::string s_instrument, int s_exp){
        exp=s_exp;
        instrument=s_instrument;
    }
    std::string get_instrument(){return instrument;}
    int get_exp(){return exp;}
};