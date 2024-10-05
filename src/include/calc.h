#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Calc {
    public:
        Calc() {}
        ~Calc() {}
        vector<float> v;
        float num;
        float num2;
        float base;
        float exp;
        float index;
        float res;
        void calc();
        void add();
        void sub();
        void mul();
        void div();
        void pow();
        void rt();
};