// Importar librería con utilidades
#include <bits/stdc++.h>
// Para especificar por ejemplo que 'cout' pertenece a la librería estandar
using namespace std;

#define REP(i, a, b) for (int i = 0; i < b; ++i)
#define ent cout << '\n'


/*
123
456
78'*'
*/

int main() {
    int n, m; cin >> n >> m;
    char t[n][m];
    int ans[n][m]; memset(ans, 0, sizeof(ans));

    REP(i, 0, n) REP(j, 0, m) cin >> t[i][j];

    REP(i, 0, n){
        REP(j, 0, m){
            if (i > 0 && j > 0 && t[i-1][j-1] == '*') ++ans[i][j];
            if (i > 0 && t[i-1][j] == '*') ++ans[i][j];
            if (i > 0 && j < m-1 && t[i-1][j+1] == '*') ++ans[i][j];

            if (j > 0 && t[i][j-1] == '*') ++ans[i][j];
            if (j < m-1 && t[i][j+1] == '*') ++ans[i][j];

            if (i < n-1 && j > 0 && t[i+1][j-1] == '*') ++ans[i][j];
            if (i < n-1 && t[i+1][j] == '*') ++ans[i][j];
            if (i < n-1 && j < m-1 && t[i+1][j+1] == '*') ++ans[i][j];

            if (t[i][j] == '*') ans[i][j] = 9;
        }
    }
    REP(i, 0, n){
        REP(j, 0, m){
            switch (ans[i][j]){
                case 0:
                    cout << " ";
                    break;
                case 9:
                    cout << "F";
                    break;
                default:
                    cout << ans[i][j];
            }
        }
        if (i < n-1) ent;
    }
}
