#include <vector>
#include <cmath>
#include <cstdint>
#include "../include/alias.h"







class Calc {
    public:
        Calc() {}
        ~Calc() {}
        
       
        vector<mp::cpp_dec_float_50> v;
        mp::cpp_dec_float_50 num, num2, base, exp, index, res=0, perc;
        void calc();
        void add();
        void sub();
        void mul();
        void div();
        void pow();
        void rt();
        void percent();
};
extern Calc calc;
