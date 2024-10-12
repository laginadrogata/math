#include "include/dc.h"

void DC::dc() {
  cout << "1-Inversamente Proporzionale\n";
  cout << "2-Direttamente Proporzionale\n";
  cout << "Scegli tra le opzioni sopra: ";
  
    cin >> choice;
    cout << "k: ";
    cin >> k;
    
    if (choice == 1) {
        invprop();
    }
    else if (choice == 2) {
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