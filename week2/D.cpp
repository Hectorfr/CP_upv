// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {
    int n; cin >> n;
    int nums[n], nums1[n];

    for (int i = 0; i < n; i++){
        int f; cin >> f;
        if (i % 2 == 0){
            nums[i] = f;
        }else{
            nums1[i] = f;
        }
    }
    for (int i = 0; i < n; i++){
        int f; cin >> f;
        if (i % 2 != 0){
            nums[i] = f;
        }else{
            nums1[i] = f;
        }    
    }
    for (int i = 0; i < n; i++){
        cout << nums[i]; cout << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << nums1[i]; cout << " ";
    }
    cout << endl;
}
