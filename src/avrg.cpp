#include "include/avrg.h"

void Avrg::avrg() {
    cout <<"Numero: ";
    cin >> num;
    
    while (add != "n") {
        cout << "Numero: ";
        cin >> num;
        v.push_back(num);
        cout << "Vuoi aggiungere un numero? (s/n): ";
        cin >> add;
    }
   if (add == "n" and v.size() > 1) {
    
    for (mp::cpp_dec_float_50 num : v) {
        sum += num;
    }
     average = sum / v.size();
    cout << "Media: " << average <<'\n';
   }
   else {
    cout << "Inserisci almeno due numeri" <<'\n';
    cout << "Vuoi aggiungere un numero? (s/n): ";
        cin >> add;}
}

