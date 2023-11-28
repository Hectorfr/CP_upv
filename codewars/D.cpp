#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long


void solve(){

}

int main(){
    string t; cin >> t;
    string ans = t.substr(0, 8);
    int t1 = stoi(ans);

    int remain = (t1 % 23) - 1;
    switch(remain){
        case -1:
            ans+= "T";
        break;
        case 0:
            ans+= "R";
        break;
        case 1:
            ans+= "W";
        break;
        case 2:
            ans+= "A";
        break;
        case 3:
            ans+= "G";
        break;
        case 4:
            ans+= "M";
        break;
        case 5:
            ans+= "Y";
        break;
        case 6:
            ans+= "F";
        break;
        case 7:
            ans+= "P";
        break;
        case 8:
            ans+= "D";
        break;
        case 9:
            ans+= "X";
        break;
        case 10:
            ans+= "B";
        break;
        case 11:
            ans+= "N";
        break;
        case 12:
            ans+= "J";
        break;
        case 13:
            ans+= "Z";
        break;
        case 14:
            ans+= "S";
        break;
        case 15:
            ans+= "Q";
        break;
        case 16:
            ans+= "V";
        break;
        case 17:
            ans+= "H";
        break;
        case 18:
            ans+= "L";
        break;
        case 19:
            ans+= "C";
        break;
        case 20:
            ans+= "K";
        break;
        case 21:
            ans+= "E";
        break;

    }

    if (ans == t) cout << "Si";
    else cout << "No";

}