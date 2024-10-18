#include "include/fattoriale.h"

void Fattoriale::fattoriale() {
    cout << "Inserisci un numero: ";
    cin >> num;
    for (mp::cpp_dec_float_50 i = 2; i <= num; i++) {
        fatt *= i;                  
        
    
    }   
   cout << "fattoriale: " << fatt << '\n';
}