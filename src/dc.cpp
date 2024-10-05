#include "include/dc.h"

void DC::dc() {
  cout << "scrivi i o d: ";
    cin >> prop;
    cout << "k: ";
    cin >> k;
    if (prop == "i") {
        invprop();
    }
    else if (prop == "d") {
        dirprop();
    }
    
     

}
void DC::dirprop() {
    cout << "x|y\n";
    while (x != 10000) {
        y=k*x;
        cout << x << '|' << y<<'\n';
        x++;
        sleep(1);
    }
}

void DC::invprop() {
    cout << "x|y" << '\n';
    x=1;
    while (x!=10000) {
        y=k/x;
        cout << x << '|' << y << '\n';
        x++;
        sleep(1);
    }
}