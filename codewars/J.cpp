#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long
#define ent cout<<endl;


void solve(){
    int n; cin >> n;
    string arr[n];
    int maxL = 0;
    REP(i, 0, n){
        cin >> arr[i];
        maxL = max(maxL, (int)arr[i].length());
    }

    char c = '#';

    REP(j, 0, maxL+4)cout << c;
    ent;

    cout << c;
    REP(j, 0, maxL+2) cout << " ";
    cout << c << "" << endl;
    

    REP(i, 0, n){
        cout << c << " " << arr[i]; 
        REP(k, arr[i].length(), maxL) cout << " ";
        cout << " " << c << endl;
    }

    cout << c;
    REP(j, 0, maxL+2) cout << " ";
    cout << c << "" << endl;


    REP(j, 0, maxL+4)cout << c;
    ent;




}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}