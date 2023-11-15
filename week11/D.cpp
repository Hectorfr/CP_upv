#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'
#define ll long long


int main() {
    ll n; cin >> n;

    while(n != 1){
        if (n % 3 != 0){cout << "NO"; return 0;}
        n /= 3;
    }
    cout << "YES";

}
