#include <iostream>
#include <unistd.h>
#include"../include/alias.h"
using namespace std;

class DC {
public:
    DC() {}
    ~DC() {}   
    typedef mp::cpp_dec_float<50> cpp_dec_float_50;     
    mp::cpp_dec_float_50 k, x=0, y;
    int choice;
    void dirprop();
    void invprop();
    void dc();
};