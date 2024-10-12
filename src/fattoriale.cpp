#include "include/fattoriale.h"

void Fattoriale::fattoriale() {
    cout << "Inserisci un numero: ";
    cin >> i;
    for (mp::cpp_dec_float_50 j = 1; j <= i; j++) {
        fatt *= j;                  
        
    }   
   cout << "fattoriale: " << fatt << '\n';
}