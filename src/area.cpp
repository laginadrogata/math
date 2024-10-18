#include "include/area.h"


void Area::area() {
    int choice;
    
    cout << "1. Rettangolo\n";
    cout << "2. Triangolo\n";
    cout << "3. Cerchio\n";
    cout << "4. Trapezio\n";
    cout << "Scegli tra le opzioni sopra: ";
    cin >> choice;
    if (choice == 1) {Area::rect();};
    if (choice == 2) {Area::tri();};
    if (choice == 3) {Area::cir();};
    if (choice == 4) {Area::trap();};
    
}
void Area::rect() {
    cout <<"b: ";
    cin >> b;
    cout <<"h: ";
    cin >> h;
    A = b*h;
    cout << "Area: "<< setprecision(13) << A << endl;
}
void Area::tri() {
    cout <<"b: ";
    cin >> b; 
    cout <<"h: ";
    cin >> h;
    A = (b*h)/2;
    cout << "Area: "<< setprecision(13) << A << endl;
}

void Area::cir() {
    cout <<"r: ";
    cin >> r;
    A = pi*mp::pow(r,2);
    cout << "Area: " << setprecision(13) << A << endl;
}


void Area::trap() {
    cout <<"b1: ";
    cin >> b;
    cout <<"b2: ";
    cin >> B;
    cout <<"h: ";
    cin >> h;
    
    A = ((b+B)*h)/2;
    cout << "Area: " << setprecision(13) << A << " cm2\n";
}

