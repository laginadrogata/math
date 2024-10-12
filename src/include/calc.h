#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include "../include/alias.h"


using namespace std;




class Calc {
    public:
        Calc() {}
        ~Calc() {}
        
       
        vector<mp::cpp_dec_float_50> v;
        mp::cpp_dec_float_50 num, num2, base, exp, index, res=0;
        void calc();
        void add();
        void sub();
        void mul();
        void div();
        void pow();
        void rt();
};
extern Calc calc;
