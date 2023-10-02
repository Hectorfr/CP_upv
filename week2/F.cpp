// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {
    int P; cin >> P;
    int V; cin >> V;
    long int count = 0;
    bool inside;


    for (int i = 0; i < P; i++){
        for (int j = 0; j < V; j++){
            inside = false;
            for (int z = 0; z < 2; z++){
                char window; cin >> window;
                if (window == '#'){
                    inside = true;
                }
            }
            if (inside) count++;
        }
    }

    cout << count;

    
}
