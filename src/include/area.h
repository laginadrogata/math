#include <iostream>
#include <cmath>
using namespace std;

class Area {
    public:
        Area() {} 
        ~Area() {} 
        
        float b;
        float h;
        float A;
        float r;
        float l;
        float B;
        const float pi = acos(-1.0);
        void area();
        void rect();
        void tri();
        void cir();
        void trap(); 

        
};