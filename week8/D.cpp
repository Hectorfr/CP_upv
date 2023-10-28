#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define ent cout << '\n'
    
#define MAX 1000000007
    
int main() {
    int n; cin >> n;
    int dp[n+1];
    dp[0] = 1;
    REP(i, 1, n) {
        int j = 1;
        long long s = 0;
        while (i-j >= 0 && j < 7) { //1. Only check back if there is a number; 2. only check for 6 numbers behind
            s += dp[i-j];
            j++;
        }
        dp[i] = s % MAX;
    }
    cout << dp[n];
}