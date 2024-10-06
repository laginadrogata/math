#include "include/bindeccon.h"

void BinDecCon::binceccon() {
    int choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "1-Converti in Binario\n";
    cout << "2-Converti in Decimale\n";
    cout << "Scegli: ";
    cin >> choice;
    if (choice == 1){bin();}
    else if (choice == 2){dec();
    }
}

void BinDecCon::bin() {
    int decimal ;
    string binary;
    cout << "Inserisci un numero decimale: ";
    cin >> decimal;
    while (decimal > 0) {
        if (decimal % 2 == 0) {
            binary = '0'+ binary;}
        else {
            binary ='1' + binary;}
        decimal /= 2;
    }

    cout << "Numero binario: " << binary << endl;   
           
}    

void BinDecCon::dec() {
    int binary,decimal = 0, i = 0;
    cout << "Inserisci un numero binario: ";
    cin >> binary;
    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i);
        i++;
        binary /= 10;
        
    }
    
    cout << "Numero decimale: " << decimal << endl;
    
}