// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {
    int n; cin >> n;
    int flavors[n];

    for (int i = 0; i < n; i++){
        int f; cin >> f;
        flavors[i] = f;
    }
    for (int i = 0; i < n; i++){
        int f; cin >> f;
        //flavors[i] += f;
        cout << flavors[i] + f;cout << " ";
    }
}
