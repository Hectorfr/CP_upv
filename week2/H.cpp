// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;


int main() {

    int a; cin >> a; int cardsA[a];
    int b; cin >> b; int cardsB[b];


    for (int i = 0; i < a; i++){
        cin >> cardsA[i]; 
    }
    for (int i = 0; i < b; i++){
        cin >> cardsB[i]; 
    }

    int pointerA = 0;
    int pointerB = 0;
    int temp = -1;

    while(pointerA < a && pointerB < b){
        if (cardsA[pointerA] == cardsB[pointerB]){
            if (temp != cardsA[pointerA]){
                cout << cardsA[pointerA] << " ";
                temp = cardsA[pointerA];
            }
            pointerA++;
            pointerB++;
        }else if (cardsA[pointerA] > cardsB[pointerB]){
            pointerB++;
        }else if (cardsA[pointerA] < cardsB[pointerB]){
            pointerA++;
        }
    }
}
