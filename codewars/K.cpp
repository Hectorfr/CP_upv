#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long

int main(){

    int t; cin >> t;
    char r[2*t-1][2*t-1];
    memset(r, '.', sizeof(r));


    char cp = ' ', c;
    REP(i, 0, t){
        c = cp == '#'?' ':'#';
        REP(j, i, 2*t-1){
            r[i][j] = c;
            r[j][i] = c;
            r[2*t-2-i][j] = c;
            r[j][2*t-2-i] = c;
        }
        if (i == 1) break;
        cp = c;
    }
    
    REP(i, 0,  2*t-1){
        REP(j, 0, 2*t-1){
            cout << r[i][j];
        }
        cout << endl;
    }

}