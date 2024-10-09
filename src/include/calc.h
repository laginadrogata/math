#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <boost/multiprecision/cpp_int.hpp>
#include <locale>
using namespace std;


class Calc {
    public:
        Calc() {}
        ~Calc() {}
        vector<long  double> v;
        long  double num, num2, base, exp, index, res=0;
        void calc();
        void add();
        void sub();
        void mul();
        void div();
        void pow();
        void rt();
};