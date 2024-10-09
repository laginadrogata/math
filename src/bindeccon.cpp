#include "include/bindeccon.h"

void BinDecCon::binceccon() {
    int choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "1-Converti da Decimale a Binario\n";
    cout << "2-Converti da Binario a Decimale\n";
    cout << "3-Converti da Decimale a Ottale\n";
    cout << "4-Converti da Ottale a Decimale\n";
    cout << "Scegli: ";
    cin >> choice;
    if (choice == 1){dectobin();}
    else if (choice == 2){bintodec();}
    else if (choice == 3){dectooct();}
    else if (choice == 4){octtodec();}
}


void BinDecCon::dectobin() {
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

void BinDecCon::bintodec() {
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
void BinDecCon::dectooct()  {
    int decimal;
    string oct;
    cout << "Inserisci un numero decimale: ";
    cin >> decimal;
    while (decimal > 0) {
        if (decimal % 8 == 0) {
            oct = '0'+ oct;}
        else if (decimal % 8 == 1) {
            oct ='1' + oct;}
        else if (decimal % 8 == 2) {
            oct ='2' + oct;}
        else if (decimal % 8 == 3) {
            oct ='3' + oct;}
        else if (decimal % 8 == 4) {
            oct ='4' + oct;}
        else if (decimal % 8 == 5) {
            oct ='5' + oct;}
        else if (decimal % 8 == 6) {
            oct ='6' + oct;}
        else if (decimal % 8 == 7) {
            oct ='7' + oct;}
        else if (decimal % 8 == 8) {
            oct ='8' + oct;}
        
        decimal /= 8;
        
    }
    cout << "ottale: " << oct << endl;
        }    
void BinDecCon::octtodec()  {
    int i=0,oct,dec = 0;
    cout << "Inserisci un numero ottale: ";
    cin >> oct;
   
    while (oct > 0) {
        dec += (oct % 10) * pow(8,i );
        i++;
        oct /= 10;
    }
    cout << "Numero decimale: " << dec << endl;
}