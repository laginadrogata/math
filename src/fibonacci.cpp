#include "include/fibonacci.h"

void Fibonacci::fibonacci() {
    do {
        cout << "Inserisci quanti numeri vuoi stampare: ";
        cin >> N;
    } while (N < 3);

    cout <<setprecision(13)<< primo<< ", " << secondo ;

    for (mp::cpp_dec_float_50 i = 2; i < N; i++) {
        terzo = primo + secondo;
        primo = secondo;
        secondo = terzo;
        cout << setprecision(13)<< ", " << terzo;      
       
    }
    cout << '\n';
}