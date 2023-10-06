#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n; cin >> n;
    int nums[n];

    REP(i, 0, n) cin >> nums[i];
    sort(nums, nums+n);

    REP(i, 0, n){
        if (nums[i] != i){
            cout << i;
            return 0;
        }
    }
    cout << n;


}
