#include "include/bindeccon.h"

void BinDecCon::binceccon() {
  long long choice;
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
  long long decimal ;
    string binary;
    cout << "Inserisci un numero decimale: ";
    cin >> decimal;
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    cout << "Numero binario: " << binary << endl;   
           
}    

void BinDecCon::bintodec() {
  long long binary,decimal = 0, i = 0;
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
  long long decimal;
    string oct;
    cout << "Inserisci un numero decimale: ";
    cin >> decimal;
    while (decimal > 0) {
      oct = to_string(decimal % 8) + oct;
        decimal /= 8;
        
    }
    cout << "ottale: " << oct << endl;
        }    
void BinDecCon::octtodec()  {
  long long i=0,oct,dec = 0;
    cout << "Inserisci un numero ottale: ";
    cin >> oct;
   
    while (oct > 0) {
        dec += (oct % 10) * pow(8,i );
        i++;
        oct /= 10;
    }
    cout << "Numero decimale: " << dec << endl;
}