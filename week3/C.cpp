// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b ) for (int i = 0; i < b; ++i)

int main() {
    int n; cin >> n;
    int m; cin >> m;
    bool filas[n], columnas[m];
    memset(filas, 0, sizeof(filas));
    memset(columnas, 0, sizeof(columnas));

    char c;
    
    REP(i, 0, n){
        REP(j, 0, m){
            cin >> c;

            if (c == '#'){
                filas[i] = true;
                columnas[j] = true;
            }
        }
    }
    REP(i, 0, n){
        REP(j, 0, m){
            cout << (filas[i] || columnas[j] ? '#' : '.');
        }
        cout << "\n";
    }
    
}
