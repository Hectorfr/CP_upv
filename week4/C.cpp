#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n; cin >> n;
    int vec[n]; REP(i, 0, n) cin >> vec[i];
    sort(vec, vec+n);

    int mn = INT32_MAX;
    
    REP(i, 1, n){
        mn = min(mn, vec[i]-vec[i-1]);
    }
    cout << mn;
}
