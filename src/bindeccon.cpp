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
  long long decimal = 0;
  long long base = 1;
  string binary;  
    cout << "Inserisci un numero binario: ";
    cin >> binary;
    for (int i = 0; i < int(binary.length()); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            cout << "inserici un numero usndo solo 1 e 0" << endl;
            cout << "Inserisci un numero binario: ";
            cin >> binary;
            
        }
        
    }
    for (int i = binary.length() - 1; i >= 0; i--) {
       decimal += (binary[i] - '0') * base;
        
        base *= 2;
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
  long long  dec = 0;
  long long base = 1;
  string oct;
  cout << "Inserisci un numero ottale: ";
  cin >> oct;
  for (int i = 0; i < int(oct.length()); i++) {
    if (oct[i] > '7' ) {
      cout << "inserisci un numero usando cifre da 0 a 7" << endl;
      cout << "Inserisci un numero ottale: ";
      cin >> oct;
    }
  }
  for (int i =oct.length()-1 ; i >= 0; i--) {
    dec+= (oct[i] - '0') * base;
    base *= 8;
    
  }
    cout << "Numero decimale: " << dec << endl;
}