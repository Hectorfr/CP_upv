#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n; cin >> n;
    double low = 0, mid = n+1, up = n;
    double ans = -1;
    
    while(abs(ans-n) >= 1e-7){
        mid = (low + up) / 2.0;
        ans = mid * mid;
        if (ans > n){
            up = mid;
        }else low = mid;

    }
    cout << fixed << setprecision(7) << mid;
}
