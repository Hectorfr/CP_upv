#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int temp, n; cin >> n;
    int row[n];

    REP(i, 0, n) cin >> row[i];

    REP(i, 0, n-1){
        REP(j, 0, n-i-1){
            if (row[j] > row[j+1]){
                temp = row[j+1];
                row[j+1]  = row[j];
                row[j] = temp;
            }
        }
    }
    REP(i, 0, n) cout << row[i] << " ";
}
