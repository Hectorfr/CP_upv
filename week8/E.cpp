#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

#define MOD 1000000007

int main() {
    int n,m; cin >> n >> m;
    char c;
    bool arr[n][m];
    int dp[n][m];
    memset(dp, 0, sizeof(dp));
    REP(i, 0, n){ 
        REP(j, 0, m){
        cin >> c;
        arr[i][j] = c == '.';
        }
    }

    int i = 0;
    while(i < n && arr[i][0]){
        dp[i][0] = 1;
        i++;
    }
    i = 0;
    while(i < m && arr[0][i]){
        dp[0][i] = 1;
        i++;
    }
    
    REP(i, 1, n){ 
        REP(j, 1, m){
            if (arr[i][j]) dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
        }
    }

    cout << dp[n-1][m-1];
}