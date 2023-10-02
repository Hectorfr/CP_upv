// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {
    int minN = 1000;
    int maxN = -1000;

    int n; cin >> n;

    for (int i = 0; i < n; i++){
        int f; cin >> f;
        minN = min(minN, f);
        maxN = max(maxN, f);
    }

    cout << minN << " " << maxN;
}
