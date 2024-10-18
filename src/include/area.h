#include <cmath>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include "../include/alias.h"


class Area {
    public:
        Area() {} 
        ~Area() {} 
        
       mp::cpp_dec_float_50 b, h, A, r, l, B;
      
    
        const mp::cpp_dec_float_50 pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
        void area();
        void rect();
        void tri();
        void cir();
        void trap(); 

        
};