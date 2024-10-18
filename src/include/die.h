#include "../include/alias.h"
#include <random>

class Dice{


    public:
    Dice() {}
    ~Dice() {}
    void die();
    mp::cpp_int roll, dice, num; 
};