#include "include/dc.h"

void DC::dc() {
  cout << "1-Inversamente Proporzionale\n";
  cout << "2-Direttamente Proporzionale\n";
  cout << "Scegli tra le opzioni sopra: ";
    
    cin >> choice;
    cout << "Quanti numeri vuoi stampare: ";
    cin >> num;
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
    while (x <= num ) {
        y=k*x;
        cout << setprecision(13)<< x << '|' << y<<'\n';
        x++;
    
        
    }
}

void DC::invprop() {
    cout << "x|y" << '\n';
    x=1;
    while (x <=num ) {
        y=k/x;
        cout << setprecision(13)<< x << '|' << y << '\n';
        x++;
        
    }
}