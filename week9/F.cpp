#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'


int main() {
    int n, m; cin >> n >> m;
    int dp[n][m];
    REP(i, 0, n){
        REP(j, 0, m){
            cin >> dp[i][j];
            if (i == 0 && j == 0) continue;
            if (i != 0 && j != 0){ //can go left and up
                dp[i][j] += max(dp[i-1][j], dp[i][j-1]); 
            }else if (j == 0){ //can go up only
                dp[i][j] += dp[i-1][j]; 
            }else if (i == 0){ //can go left only
                dp[i][j] += dp[i][j-1]; 
            }
        }
    } 

    cout << dp[n-1][m-1];
    

}
