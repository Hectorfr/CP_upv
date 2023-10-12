#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

string solve(int n){
    if (n == 0) return "HOLA";
    if (n > 5){
        return "MAYOR" + solve(n-1) + "MAYOR";
    }else if (n % 2 == 0){
        return "PAR" + solve(n-1) + "PAR";
    }else{
        return "IMPAR" + solve(n-1) + "IMPAR";
    }
}

int main() {
    int n; cin >> n;
    cout << solve(n);
}
