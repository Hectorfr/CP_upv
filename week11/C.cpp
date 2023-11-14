#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

int lake[1000][1000];

int dfs(int n, int m, int x, int y){
    
    
    int aux = lake[x][y];
    lake[x][y] = 0;
    if (!aux) return 0;
    else return aux +
        (x >= n-1 ? 0 : dfs(n, m, x+1, y)) +
        (y >= m-1 ? 0 : dfs(n, m, x, y+1)) +
        (x <= 0 ? 0 : dfs(n, m, x-1, y)) +
        (y <= 0 ? 0 : dfs(n, m, x, y-1));

}

int main() {
    int n, m; cin >> n >> m;
    REP(i, 0, n) REP(j, 0, m) cin >> lake[i][j];

    int ans = 0;
    REP(i, 0, n){
        REP(j, 0, m){
            if (lake[i][j]) ans = max(ans, dfs(n, m, i, j));
        }
    }


    cout << ans;
    

}
