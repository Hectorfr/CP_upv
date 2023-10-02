// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

int parseSum(int n){
    int rest = n % 10;
    int prod = n / 10;
    return rest + prod;
}


int main() {

    string number; cin >> number;

    int card[16];

    for (int i = 0; i < number.length(); i++){
        card[i] = number.at(i) - 48;
    }


    int res = 0;
   
    for (int i = 0; i < 16; i ++){
        if (i % 2 == 0){
            card[i] *= 2;
            if (card[i] >= 10){
                card[i] = parseSum(card[i]);
            }
        }
        res += card[i];
    }

    if (res % 10 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    
}
 