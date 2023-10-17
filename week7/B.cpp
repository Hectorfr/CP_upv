#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

int main() {
    int n;
    map<string, int> m;
    string str;
    getline(cin, str);
    n = stoi(str);
    string arr[n];

    REP(i, 0, n){
        getline(cin, str);
        arr[i] = str;
    }
    return 0;
}
