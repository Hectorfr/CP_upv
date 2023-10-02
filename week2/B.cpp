// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++){

        int N; cin >> N;
        int C; cin >> C;
        int b; 
        bool found = false;

        for (int j = 0; j < N; j++){
            cin >> b;
            if (b == C) found = true;
        }
        if (found){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
}
