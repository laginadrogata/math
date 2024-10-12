#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include "../include/alias.h"
using namespace std;

class Area {
    public:
        Area() {} 
        ~Area() {} 
        
       mp::cpp_dec_float_50 b, h, A, r, l, B;
      
    
        const mp::cpp_dec_float_50 pi = acos(-1.0);
        void area();
        void rect();
        void tri();
        void cir();
        void trap(); 

        
};