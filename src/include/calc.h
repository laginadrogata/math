#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
using namespace std;

class Calc {
    public:
        Calc() {}
        ~Calc() {}
        vector<float> v;
        uint64_t num;
        uint64_t num2;
        uint64_t base;
        uint64_t exp;
        uint64_t index;
        uint64_t res;
        void calc();
        void add();
        void sub();
        void mul();
        void div();
        void pow();
        void rt();
};