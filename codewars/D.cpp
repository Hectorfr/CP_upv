#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

char arr[1000][1000];

void solve(int x, int y, int ex, int ey, char c){

    if (ex-x < 4){
        REP(i, x, ex+1) REP(j, y, ey+1) arr[i][j] = c;
        return;
    }

    char nc = c == '.' ? '#' : '.';

    REP(i, x, ex+1){
        arr[i][y] = c;
        arr[i][ey] = c;
    }
    REP(j, y, ey+1){
        arr[x][j] = c;
        arr[ex][j] = c;
    }

    if ((ex - x) % 2 == 0){

        int my =  y + (ey - y) / 2;
        REP(i, x, ex+1){
            arr[i][my] = c;
        }
        int mx = x + (ex -x) / 2;
        REP(j, y, ey+1){
            arr[mx][j] = c;
        }

        solve(x+1, y+1, mx-1, my-1, nc); // upper left
        solve(x+1, my+1, mx-1, ey-1, nc); //down left
        solve(mx+1, y+1, ex-1, my-1, nc); //upper right
        solve(mx+1, my+1, ex-1, ey-1, nc); //dowmn right
    }else{
        int my =  y+ (ey -y) / 2;
        REP(i, x, ex+1){
            arr[i][my] = c;
            arr[i][my+1] = c;
        }
        int mx = x + (ex -x) / 2;
        REP(j, y, ey+1){
            arr[mx][j] = c;
            arr[mx+1][j] = c;
        }

        solve(x+1, y+1, mx-1, my-1, nc); // upper left
        solve(x+1, my+2, mx-1, ey-1, nc); //down left
        solve(mx+2, y+1, ex-1, my-1, nc); //upper right
        solve(mx+2, my+2, ex-1, ey-1, nc); //dowmn right
    }

}

int main() {
    int n; cin >> n;
    REP(i, 0, n) REP(j, 0, n) arr[i][j] = 'p';
    solve(0, 0, n-1, n-1, '#');
    REP(i, 0, n){
        REP(j, 0, n){
            cout << arr[i][j];
        }
        ent;
    }
}
