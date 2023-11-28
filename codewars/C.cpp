#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long


void solve(){

}

int main(){
    string t; cin >> t;
    cout << t;

    int t1 = stoi(t);

    int remain = (t1 % 23) - 1;
    switch(remain){
        case -1:
            cout << "T";
        break;
        case 0:
            cout << "R";
        break;
        case 1:
            cout << "W";
        break;
        case 2:
            cout << "A";
        break;
        case 3:
            cout << "G";
        break;
        case 4:
            cout << "M";
        break;
        case 5:
            cout << "Y";
        break;
        case 6:
            cout << "F";
        break;
        case 7:
            cout << "P";
        break;
        case 8:
            cout << "D";
        break;
        case 9:
            cout << "X";
        break;
        case 10:
            cout << "B";
        break;
        case 11:
            cout << "N";
        break;
        case 12:
            cout << "J";
        break;
        case 13:
            cout << "Z";
        break;
        case 14:
            cout << "S";
        break;
        case 15:
            cout << "Q";
        break;
        case 16:
            cout << "V";
        break;
        case 17:
            cout << "H";
        break;
        case 18:
            cout << "L";
        break;
        case 19:
            cout << "C";
        break;
        case 20:
            cout << "K";
        break;
        case 21:
            cout << "E";
        break;

    }

}