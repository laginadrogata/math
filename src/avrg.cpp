#include "include/avrg.h"

void Avrg::avrg() {
    float num;
    string add;
    cout << "Vuoi aggiungere un numero? (s/n): ";
    cin >> add;
    while (add != "n") {
        cout << "Numero: ";
        cin >> num;
        v.push_back(num);
        cout << "Vuoi aggiungere un numero? (s/n): ";
        cin >> add;
    }
   if (add == "n" and v.size() > 1) {
    float sum = 0.0;
    for (float num : v) {
        sum += num;
    }
    float average = sum / v.size();
    cout << "Media: " << average << endl;
   }else {
    cout << "Inserisci almeno due numeri" << endl;
    cout << "Vuoi aggiungere un numero? (s/n): ";
        cin >> add;}
}
