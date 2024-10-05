#include "include/calc.h"
void Calc::calc() {
    int choice;
    cout << "1-Addizione\n";
    cout << "2-Sottrazione\n";
    cout << "3-Moltiplicazione\n";
    cout << "4-Divisione\n";
    cout << "5-Radice\n";
    cout << "6-Potenza\n";  


    cout << "Scegli l'operazione: " ; 
    cin >> choice;   
    if (choice == 1) {add();}
    else if (choice == 2) {sub();}
    else if (choice == 3) {mul();}
    else if (choice == 4) {div();}
    else if (choice == 5) {rt();}
    else if (choice == 6) {pow();}




}


void Calc::add() {
    string choice;
    cout << "vuoi aggiungere un numero? (s/n): ";
    cin >> choice;


    while (choice != "n" ) {
        cout << "Numero: ";
        cin >> num;
        v.push_back(num);
        cout << "vuoi aggiungere un numero? (s/n): ";
        cin >> choice;
    }
    
    if (choice == "n" && v.size() >= 2) {
    for (float num : v) {
        res += num;
        
    }
    cout    << "risultato: " << res << endl;
    }
    else if ( v.size() < 2) {
        cout << "Inserisci almeno due numeri\n"
        << "vuoi aggiungere un numero? (s/n): ";
        cin >> choice; 
    }
    else if (choice != "n" || choice != "s")
    {
       cout << "Inserisci una scelta valida\n";
       cout << "vuoi aggiungere un numero? (s/n): ";
       cin >> choice;
    }
    
}
void Calc::sub() {
    string choice;
    cout << "vuoi agiungere un numero? (s/n): ";
    cin >> choice;
    while (choice != "n") {
        cout << "Numero: ";
        cin >> num;
        v.push_back(num);
        cout << "vuoi agiungere un numero? (s/n): ";
        cin >> choice;
    }
   
    if (choice == "n" && v.size() >= 2) {
    for (float num : v) {
        res -= num;
        
    }
    cout    << "risultato: " << res << endl;
    }
    else if ( v.size() < 2) {
        cout << "Inserisci almeno due numeri\n" ;
    }
}


void Calc::mul() {
    string choice;
    cout << "vuoi agiungere un numero? (s/n): ";
    cin >> choice;
    while (choice != "n") {
        cout << "Numero: ";
        cin >> num;
        v.push_back(num);
        cout << "vuoi agiungere un numero? (s/n): ";
        cin >> choice;
    }
   
    if (choice == "n" && v.size() >= 2) {
    for (float num : v) {
        res *= num;    }
        
    cout   << "risultato: " << res << endl;
    }
    else if ( v.size() < 2) {
        cout << "Inserisci almeno due numeri\n";
        cout << "vuoi aggiungere un numero? (s/n): ";
        cin >> choice; ;
    }
}


void Calc::div() {
        cout << "Numero1 ";
        cin >> num;
        cout << "Numero2 ";
        cin >> num2;
        res = num / num2;
        cout    << "risultato: " << res << endl;
        

}
   

  



void Calc::pow() {
    cout << "inserisci la base: ";
    cin >> base;
    cout << "inserisci l'esponente: ";
    cin >> exp;
    
    res = ::pow(base, exp);
    cout << "risultato: " << res << endl;
}
void Calc::rt() {
    cout << "inserisci la base: ";
    cin >> base;
    cout << "inserisci l'indice: ";
    cin >> index ;
    res = ::pow(base, 1/index);
    cout   << "risultato: " << res << endl;
}