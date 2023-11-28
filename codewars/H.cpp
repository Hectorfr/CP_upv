#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long


void solve(){
    int n, p; cin >> n >> p;

    string s ; cin >> s;
    int count = 0;

    REP(i, 0, s.length()) if (s.at(i) == 'r')count++;

    if (!p){ //rojos pares
        if (count % 2 == 0){ //rojos ya pares
            cout << "BLUE";
        }else cout << "RED";
    }else{
        if (count % 2 == 0){ //rojos pares
            cout << "RED";
        }else cout << "BLUE";
    }
    cout << endl;

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}