// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {

    int n;
    int temp; cin >> temp;
    while (cin >> n){

        if (temp < n){
            cout << "S";
        }else if(temp > n){
            cout << "B";
        }else{
            cout << "I";
        }

        temp = n;

    }


    
}
