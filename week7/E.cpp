#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int solve(string& s, int left, int right){
    if (right - left == 1) return s[left] == 'O' ? 1 : 0;
        

    int t = 0;
    REP(i, left, right){
        if (s[i] == 'O') t++;
    }
    if (t == 0) return 0;
    else if (t == right-left) return t;



    int mid = left + (right - left) / 2;
    return max(solve(s, left, mid), solve(s, mid, right));
    
}

int main() {
    int l; cin >> l;
    string s; cin >> s;
    cout << solve(s, 0, l) << endl;
    return 0;
}
