#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    string n, m; cin >> n >> m;
    sort(n.begin(), n.end());
    sort(m.begin(), m.end());
    if (n == m){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
