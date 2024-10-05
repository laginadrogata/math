#include <iostream>
#include <unistd.h>
using namespace std;

class DC {
public:
    DC() {}
    ~DC() {}         
    float k;
    float x=0;
    float y;
    string prop; 
    void dirprop();
    void invprop();
    void dc();
};