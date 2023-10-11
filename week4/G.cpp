#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n, m; cin >> n >> m;
    long long ans = 0;
    int boats[n], groups[m];

    REP(i, 0, n) cin >> boats[i]; sort(boats, boats+n, greater<>());
    REP(i, 0, m) cin >> groups[i]; sort(groups, groups+m, greater<>());


    int i = 0, j = 0;
    while (i < n && j < m){
        if (boats[i] >= groups[j]){
            ans += groups[j];
            ++i;
        }
        ++j;
    }
    cout << ans;

}
