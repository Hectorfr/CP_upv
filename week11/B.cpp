#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

#define ll long long

int main() {
    int t; cin >> t;
    REP(i, 0, t){
        ll n; cin >> n;
        ll ans = n + 4*n; //interior constant + sides
        ans += (n-2) * (n-1);//interior changes
        cout << ans << endl;
    }
    

}


// 16+10 20+20 24+26