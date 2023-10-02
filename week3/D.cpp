// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b) for (int i = 0; i < b; ++i)

int maxi(int x, int y){
    if (x > y) return x;
    return y;
}
int main() {
    int n; cin >> n;
    int m; cin >> m;
    int S;
    int cols[m] = {0}; //maximums of columns
    int sum = 0, max = 0; //maximum of rows and result

    REP(i, 0, n){
        REP(j, 0, m){
            cin >> S;
            sum += S;
            cols[j] += S;
        }
        max = maxi(max, sum);
        sum = 0;
    }

    REP(j, 0, m){
        max = maxi(max, cols[j]);
    }
    cout << max;
}
