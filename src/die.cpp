#include "include/die.h"


void Dice::die() {
    srand(time(0));
    cout << "inserisci il numero di dadi: ";
    cin >> dice;
    cout << "inserisci il numero di lanci: ";
    cin >> roll;

    for (mp::cpp_int i = 0; i < roll; i++) {
        num= 1+(rand() % (dice *6) );
        cout << num << '\n';
}
}