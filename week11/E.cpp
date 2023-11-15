#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'
#define ll long long


int main() {
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int arr[n][m];
        int idx = 1;

        for (int i = 0; i < n; i += 2){
            REP(j, 0, m) arr[i][j] = idx++;
        }
        for (int i = 1; i < n; i += 2){
            REP(j, 0, m) arr[i][j] = idx++;
        }

        REP(i, 0, n){
            REP(j, 0, m) cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}
