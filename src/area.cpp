#include "include/area.h"


void Area::area() {
    int choice;
    cout << "Inserisci figura: \n";
    cout << "1. Rettangolo\n";
    cout << "2. Triangolo\n";
    cout << "3. Cerchio\n";
    cout << "4. Trapezio\n";
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
    cout << "Area: " << A << endl;
}
void Area::tri() {
    cout <<"b: ";
    cin >> b; 
    cout <<"h: ";
    cin >> h;
    A = (b*h)/2;
    cout << "Area: " << A << endl;
}

void Area::cir() {
    cout <<"r: ";
    cin >> r;
    A = pi*pow(r,2);
    cout << "Area: " << A << endl;
}

void Area::trap() {
    cout <<"b: ";
    cin >> b;
    cout <<"B: ";
    cin >> B;
    cout <<"h: ";
    cin >> h;
    
    A = ((b+B)*h)/2;
    cout << "Area: " << A << endl;
}

