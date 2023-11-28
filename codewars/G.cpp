#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long

int arr[9][9];

bool solve_square(int x, int y){

    bool nums[9];
    memset(nums, 0 ,sizeof(nums));

    REP(i, 0, 3){
        REP(j, 0, 3){
            nums[arr[i+x][j+y]] = 1;
        }
    }
    REP(j, 0, 9){
        if (nums[j] == 0){
            return 0;
        }
    }
    return 1;

}

int main(){
    string s;
    int n = 9, num;
    bool lines[n];
    memset(lines, 0 ,sizeof(lines));
    char c;

    //LINES AND INPUT
    REP(i, 0 ,n){
        cin >> s;
        stringstream ss(s);
        REP(j, 0, n){
            ss >> c;
            num = (int) c - 48;
            arr[i][j] = num-1;
            lines[arr[i][j]] = 1;
        }
        REP(j, 0, n){
            if (lines[j] == 0){
                cout << "No";
                return 0;
            }
        }
        memset(lines, 0 ,sizeof(lines));
    }
    
    //COLUMNS
    REP(i, 0 ,n){
        REP(j, 0, n){
            lines[arr[j][i]] = 1;
        }
        REP(j, 0, n){
            if (lines[j] == 0){
                cout << "No";
                return 0;
            }
        }
        memset(lines, 0 ,sizeof(lines));
    }

    //SQUARES INTERNALLY
    if (!solve_square(0, 0)
        || !solve_square(0, 3)
        || ! solve_square(0, 6)
        || !solve_square(3, 0)
        || ! solve_square(3, 3)
        || !solve_square(3, 6)
        || ! solve_square(6, 0)
        || !solve_square(6, 3)
        || ! solve_square(6, 6)
        ) cout << "No";
    else cout << "Si";

}