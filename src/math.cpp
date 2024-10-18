#include "include/dc.h"
#include "include/avrg.h"
#include "include/math.h"
#include "include/calc.h"
#include "include/area.h"
#include "include/pitagora.h"
#include "include/bindeccon.h"
#include "include/fibonacci.h"
#include "include/fattoriale.h"
#include "include/prime.h"
#include "include/die.h"

DC dc;
Avrg avrg;
Calc calc;
Area area;
Pitagora pitagora;
BinDecCon bindeccon;
Fibonacci fibonacci;
Fattoriale fattoriale;
Prime prime;
Dice die;

void Math::menu(int argc ,char *args[]){
    string choice;
    
    if (argc < 2 ) {
         cout << "inserisci in argomento\n";
             
    }
    else{
        choice= args[1];
        if (choice == "cartesiano") {dc.dc();}
        else if (choice == "media") {avrg.avrg();}
        else if (choice == "calcolatrice" || choice== "calc") {calc.calc();}
        else if (choice == "area") {area.area();}
        else if (choice == "pitagora") {pitagora.pitagora();}
        else if (choice == "convertitore") {bindeccon.binceccon();}
        else if (choice == "fibonacci") {fibonacci.fibonacci();}
        else if (choice == "fattoriale") {fattoriale.fattoriale();}
        else if (choice == "numprimo" || choice == "primo") {prime.prime();} 
        else if (choice == "dado") {die.die();}
    }
    
}   