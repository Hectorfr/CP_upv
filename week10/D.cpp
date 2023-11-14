#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'


int main() {
    int n; cin >> n;
    int arr[n];
    REP(i, 0, n){
        cin >> arr[i];
        arr[i]--;
    }
    int dp[n], j;
    REP(i, 0, n){
        memset(dp, 0, sizeof(dp));
        dp[i] = 1;
        j = i; //index 
        while(dp[j] == 1){
            j = arr[j]; //index to who the student accuses
            dp[j]++;
        }
        cout << j+1 << " ";
    }
    

}
