#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPv(i, a, b) for (int i = a; i >= b; --i)
#define ent '\n'


void solve(int x, int lim, string s){
    if (x == lim){
        cout << s << ent;
    }else{
        cout << s << ent;
        solve(++x, lim, s + "#");
        cout << s << ent;
    }

}

int main() {

    int n; cin >> n;
    solve(1, n, "#");
}
