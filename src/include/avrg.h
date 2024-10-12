#include <iostream>
#include <vector>
#include  "../include/alias.h"
using namespace std;

class  Avrg {
public:
    Avrg() {}
    ~Avrg() {}
    vector<boost::multiprecision::cpp_dec_float_50> v;
    void avrg();
   
    boost::multiprecision::cpp_dec_float_50 num ,sum=0, average;
  
    string add;
     
     
};