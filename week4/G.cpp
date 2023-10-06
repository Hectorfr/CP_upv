#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = 0; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n, m; cin >> n >> m;
    char t[n][m];
    int ans[n][m]; memset(ans, 0, sizeof(ans));

    REP(i, 0, n) REP(j, 0, m) cin >> t[i][j];
}
