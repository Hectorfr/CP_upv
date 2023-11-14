#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'
#define ll long long


int main() {
    ll n; cin >> n;
    ll a, b;
    ll sq = sqrt(n);
    sq *= sq; // the same as n if it's square leaves no remainder
    b = -(sq-n); // 0 if equal
    a = sqrt(sq) -b;

    cout << a << " " << b << endl;
    

}
