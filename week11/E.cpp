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

        if (n != 4){
            for (int i = 0; i < n; i += 2){
                REP(j, 0, m) arr[i][j] = idx++;
            }
            for (int i = 1; i < n; i += 2){
                REP(j, 0, m) arr[i][j] = idx++;
            }
        }else{
            for (int i = 0; i < m; i += 2){
                REP(j, 0, n) arr[j][i] = idx++;
            }
            for (int i = 1; i < m; i += 2){
                REP(j, 0, n) arr[j][i] = idx++;
            }
        }


        REP(i, 0, n){
            REP(j, 0, m) cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}
