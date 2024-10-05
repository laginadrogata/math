#include "include/pitagora.h"

void Pitagora::pitagora() {
    int choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<" 1-Trova cateto :\n "; 
    cout <<"2-Trova ipotenusa:\n ";
    cout <<"Scegli tra le opzioni sopra: ";
    cin >> choice;

    if (choice == 1) {Cateto();}
    else if (choice == 2) {ipotenusa();}

}

void Pitagora::Cateto() {
    cout << "inserici l'ipotenusa: ";
    cin >> i;
    cout << "insterici il cateto: ";
    cin >> c;
    if (c > i) {
    cout << "il cateto non puo' essere maggiore dell'ipotenusa\n" ;
    cout << "insterici il cateto: ";
    cin >> c;
    }
    C=::sqrt(pow(i,2)-pow(c,2));
    cout << "risultato: " << C << endl;
}
void Pitagora::ipotenusa() {
        cout << "inserici il primo cateto: ";
        cin >> C;
        cout << "inserici il secondo cateto: ";
        cin >> c;
        i=::sqrt(pow(C,2)+pow(c,2));
        cout << "risultato: " << i << endl;
}

