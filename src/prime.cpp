#include "include/prime.h"

void Prime::prime(){
    cout << "inserisci un numero: ";
    cin >> num;
    for (mp::cpp_int i=2; i<=mp::sqrt(num); i++) {
       
        if (num % i == 0||num == 1||num == 0) {
            is_prime = false;
            break;
           
        }
        
    }
   if (is_prime) {
    cout <<  "il numero " << num << " è primo\n";
   }
   else {
    cout << "il numero " << num << " non è primo\n";
   }
}