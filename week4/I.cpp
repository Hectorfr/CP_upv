#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n; cin >> n;
    int m[n], p[n];
    REP(i, 0, n) cin >> m[i];
    REP(i, 0, n) cin >> p[i];


    sort(m, m+n);
    sort(p, p+n);

    long long ans = 0;

    REP(i, 0, n) ans += (long long) m[i] * p[i];
    cout << ans;
}
