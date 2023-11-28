#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long


void solve(){
    int a, b, c; cin >> a >> b >> c;

    if (a+b == c){
        cout << "+";
    }else cout << "-";

    cout << endl;

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}