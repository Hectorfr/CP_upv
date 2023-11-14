#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'


int main() {
    int n; cin >> n;
    int arr[n];
    REP(i, 0, n){ cin >> arr[i]; arr[i]--;}//to make n ums correspond to pos
    REP(i, 0, n){
        if (arr[arr[arr[i]]] == i){ cout << "YES"; return 0;}
    }
    cout << "NO";
    

}
