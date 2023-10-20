#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'



int main() {
    int n, m, h, x, y; cin >> n >> m >> h >> x >> y;
    int mars[n][m];
    int maxN = INT32_MIN, manhattan = INT32_MAX, x1 = -1, y1 = -1;

    REP(i, 0, n){
        REP(j, 0, m){
            cin >> mars[i][j];
            maxN = max(maxN, mars[i][j]);
        }
    }
    int minN = maxN - h;

    REP(i, 0, n){
        REP(j, 0, m){
            if (mars[i][j] > minN){
                if (abs(i - x) + abs(j - y) < manhattan){
                    manhattan = abs(i -x) + abs(j - y);
                    x1 = i;
                    y1 = j;

                }
            }
        }
    }
    cout << x1 << " " << y1 << endl;
    return 0;
}
