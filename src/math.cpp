#include "include/dc.h"
#include "include/avrg.h"
#include "include/math.h"
#include "include/calc.h"
#include "include/area.h"
#include "include/pitagora.h"
#include "include/bindeccon.h"
#include "include/fibonacci.h"
#include "include/fattoriale.h"

DC dc;
Avrg avrg;
Calc calc;
Area area;
Pitagora pitagora;
BinDecCon bindeccon;
Fibonacci fibonacci;
Fattoriale fattoriale;
void Math::menu() {
    int choice;
    cout << "1 Diagramma Catresiano\n";
    cout << "2 Media\n";
    cout << "3 Calcolatrice\n";
    cout << "4 Area\n";
    cout << "5 Teorema di Pitagora\n";
    cout << "6 Convertitore numeri\n";
    cout << "7 Fibonacci\n";
    cout << "8 Fattoriale\n";
    cout << "9 Esci\n";
    cout << "Scegli tra le opzioni sopra: ";
    cin >> choice;
    if (choice == 1) {dc.dc();}
    else if (choice == 2) {avrg.avrg();}
    else if (choice == 3) {calc.calc();}
    else if (choice == 4) {area.area();}
    else if (choice == 5) {pitagora.pitagora();}
    else if (choice == 6) {bindeccon.binceccon();}
    else if (choice == 7) {fibonacci.fibonacci();}
    else if (choice == 8) {fattoriale.fattoriale();}
    else if (choice == 9) {return ;}
    
}   