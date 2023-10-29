#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define ent cout << '\n'

int fib[300000];

int main() {
    int t; cin >> t;
    fib[0] = 0;
    fib[1] = 1;
    int count = 1;
    for(int k = 0; k < t; k++){
        int n; cin >> n;

        if (count < n){
            REP(i, count+1, n){
                fib[i] = (fib[i-1] + fib[i-2]) % 1000000007;
                count++;
            }
        }
        cout << fib[n] << endl;
    }
    return 0;
}