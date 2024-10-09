#include "include/fibonacci.h"

void Fibonacci::fibonacci() {
    do {
        cout << "Inserisci quanti numeri vuoi stampare: ";
        cin >> N;
    } while (N < 3);

    cout <<setprecision(15)<< primo<< ", " << secondo ;

    for (long double i = 2; i < N; i++) {
        terzo = primo + secondo;
        primo = secondo;
        secondo = terzo;
        cout << ", " << terzo;      
       
    }
    cout << '\n';
}