#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'


int main() {
    int n; cin >> n;
    int count = 0;
    int arr[n+2];
    memset(arr, 0, sizeof(arr));
    arr[0] = 0; arr[1] = 1; arr[2] = 1;
    int aux;

    for(int i = 3, j = 4; i < n; i++, j++){
        aux = arr[i-1];
        if (j % 2 == 0) aux = min(aux, arr[j/2-1]);
        if (j % 3 == 0) aux = min(aux, arr[j/3-1]);
        arr[i] = aux +1 ;
    }

    cout << arr[n-1];
    

}
