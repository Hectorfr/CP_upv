#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

#define MOD 1000000007

int main() {
    int t; cin >> t;
    REP(i, 0, t){
        int n, m; cin >> n >> m;
        bool al[n][n];
        memset(al, false, sizeof(al));

        int u, v;
        REP(i, 0, m){
            cin >> u >> v;
            al[u-1][v-1] = true;
            al[v-1][u-1] = true;
        }

        int count, x = 0, y = 0;
        REP(i, 0, n){
            count = 0;
            REP(j, 0, n){
                if (al[i][j]) count++;
            }
            if (count == 1) y++; //exterior nodes
            else x++;
        }

        cout << x-1 << " " << y/(x-1) << endl;
    }
    

}
