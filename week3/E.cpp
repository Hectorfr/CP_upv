// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)


int main() {
    int n; cin >> n;
    int m; cin >> m;
    char C[n][m];

    REP(i, 0, n){
        REP(j, 0, m){
           cin >> C[i][j];
        }
    }
    REP(i, 1, n){
        REP(j, 1, m){
            if (C[i][j - 1] == C[i][j]){
                if (C[i - 1][j - 1] == C[i - 1][j] && C[i - 1][j - 1] == C[i][j]){
                    cout << "NO ORIGINAL";
                    return 0;
                }
            }
        }
    }
    cout << "ORIGINAL";
}
