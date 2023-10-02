// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b ) for (int i = 0; i < b; ++i)

int main() {
    int l; cin >> l;
    char c;
    bool enBlanco = true;

    char bef [l][l];

    REP(i, 0, l){
        REP(j, 0, l){
            cin >> c;
            if (c=='#') enBlanco = false;
            bef[i][j] = c;
        }
    }
    if (enBlanco){
        cout << "NO LLEVABA MERMELADA"; return 0;
    }
    REP(i, 0, l){
        REP(j, 0, l){
            cin >> c;
            if (c != bef[i][j]) {
                cout << "TRAGEDIA"; return 0;
            }
        }
    }
    cout << "HA HABIDO SUERTE";

}
