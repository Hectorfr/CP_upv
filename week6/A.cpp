#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPv(i, a, b) for (int i = a; i >= b; --i)
#define ent '\n'


int main() {
    int t; cin >> t;
    set<string> set1;
    string s;
    getline(cin, s);
    REP(i, 0, t){
        getline(cin, s);
        set1.insert(s);
    }
    cout << set1.size() << endl;
    return 0;

}
