#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

#define MOD 1000000007

int main() {
    int n; cin >> n;
    int dp[n]; //how many numbers smaller do i have behind in order
    int arr[n];
    REP(i, 0, n) cin >> arr[i];
    


    REP(i, 0, n){
        dp[i] = 1;
        REP(j, 0, i){
            if (arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + 1);   
            }
        }
    }
     

    int ans = 0;
    REP(i, 0, n){
        ans = max(ans, dp[i]);
    }
    cout << ans;
}