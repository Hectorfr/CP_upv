#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

void solve(char mazmorra[][10], long long& good, long long& bad, int x, int y, int m, int n){
    if (mazmorra[x][y] != '.' && !(x == m-1 && y == n-1)){
        bad++;
        return;
    }else{
        if (x == m-1 && y == n-1){
            good++;
            return;
        }else{
            if (x < m-1) solve(mazmorra, good, bad, x+1, y, m, n);
            if (y < n-1) solve(mazmorra, good, bad, x, y+1, m, n);
        }
    }

}
int main() {
    int t; cin >> t;
    REP(k, 0, t){
        int n, m;cin >> m >> n;
        char mazmorra[m][10]; // we need to give max n because it is needed in parameter
        REP(i, 0, m){
            REP(j, 0, n){
                cin >> mazmorra[i][j];
            }
        }
        long long good = 0, bad = 0;
        solve(mazmorra, good, bad, 0, 0, m, n);
        cout << good << " " << bad << endl;

    }
    return 0;
}
