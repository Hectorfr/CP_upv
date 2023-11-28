#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define ll long long


void solve(){

}

int main(){
    string s; cin >> s;
    int mayusculas = 0, minusculas = 0;

    REP(i, 0, s.length()){
        if (s.at(i) >= 65 && s.at(i) <= 90){
            mayusculas++;
            s.at(i) += 32;
        }else minusculas++;
    }
    
    if (mayusculas>minusculas){
        REP(i, 0, s.length())s.at(i) -= 32;
    }

    cout << s << endl;

}