#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'
#define MOD 1000000007


int main() {
    int n, k; cin >> n >> k;

    int dp[n];
    dp[0] = 1;
    REP(i, 1, n){
        dp[i] = 0;
        REP(j, 0, k+1){
            if (i-j >= 0) dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    } 

    cout << dp[n-1];
    

}
