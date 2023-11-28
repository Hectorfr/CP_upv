#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long


void solve(){

}

int main(){
    int n, m; cin >> n >> m;

    char arr[n][m];

    REP(i, 0, n){
        REP(j, 0, m){
            cin >> arr[i][j];
            if (arr[i][j] == '.') arr[i][j] = 'P';
        }
    }

    REP(i, 0, n){
        REP(j, 0, m){
            if (arr[i][j] == 'O'){

                if (
                i < n-1 && arr[i+1][j] == 'L'
                || i > 0 && arr[i-1][j] == 'L'
                || j < m-1 && arr[i][j+1] == 'L'
                || j > 0 && arr[i][j-1] == 'L'){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    

    cout << "Si" << endl;
    REP(i, 0, n){
        REP(j, 0, m){
            cout << arr[i][j];
        }
        cout << endl;
    }



}