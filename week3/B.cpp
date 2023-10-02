// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b ) for (int i = 0; i < b; ++i)

int main() {
    int n; cin >> n;
    int size = n*4+1;
    char c;


    REP(i, 0, size){
        REP(j, 0, size){
            c = ' ';
            if (i % 4 == 0) c = '-';
            if (j % 4 == 0) c = '|';
            if (i % 4 == 0 && j % 4 == 0) c= '+';
            cout << c;
        }
        cout << "\n";
    }
}




