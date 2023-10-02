// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)


int main() {
    int n, m; cin >> n >> m;
    int res[m][n];
    int rowPointer = n-1;

    REP(i, 0, n){
        REP(j, 0, m){
            cin >> res[j][rowPointer];

        }
        rowPointer--;
    }
    REP(i, 0, m){
        REP(j, 0, n){
            cout << res[i][j] << " ";
        }
        cout << "\n";

    }

}
