#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
#define REP(i, a, b) for(int i = a; i < b; i++)
#define REPm(i, a, b) for(int i = a; i <= b; i++)
#define REPv(i, a, b) for(int i = a; i > b; i--)
    
void solve(){
    
}
    
    
int main(){
    int M =1000, D = 500, C=100, L=50, X=10, V=5, I=1;
    int t; cin >> t;
    REP(j, 0, t){
        string ans = "";
        int n = 0, count = 0;
        cin >> n;

        if(n >= 1000){
            count = n / M;
            n %= M;
            REP(i, 0, count) ans += "M";
        }
        if(n >= 900){
            count = n / 900;
            n %= 900;
            REP(i, 0, count) ans += "CM";
        }
        if(n >= 500){
            count = n / D;
            n %= D;
            REP(i, 0, count) ans += "D";
        }
        if(n >= 400){
            count = n / 400;
            n %= 400;
            REP(i, 0, count) ans += "CD";
        }
        if(n >= 100){
            count = n / C;
            n %= C;
            REP(i, 0, count) ans += "C";
        }
        if(n >= 90){
            count = n / 90;
            n %= 90;
            REP(i, 0, count) ans += "XC";
        }
        if(n >= 50){
            count = n / L;
            n %= L;
            REP(i, 0, count) ans += "L";
        }
        if(n >= 40){
            count = n / 40;
            n %= 40;
            REP(i, 0, count) ans += "XL";
        }
        if(n >= 10){
            count = n / X;
            n %= X;
            REP(i, 0, count) ans += "X";
        }
        if(n >= 9){
            count = n / 9;
            n %= 9;
            REP(i, 0, count) ans += "IX";
        }
        if(n >= 5){
            count = n / V;
            n %= V;
            REP(i, 0, count) ans += "V";
        }
        if(n >= 4){
            count = n / 4;
            n %= 4;
            REP(i, 0, count) ans += "IV";
        }
        if(n >= 1){
            count = n / 1;
            n %= 1;
            REP(i, 0, count) ans += "I";
        }
        cout << ans << endl;
    }
}
