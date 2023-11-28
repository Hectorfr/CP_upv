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
        string n;
        int c = 0, ans = 0;
        cin >> n;
        int s = n.size();

        while(!(c == n.size()) && n.at(c) == 'M'){
            c++;
            ans += 1000;
            s--;
        }
        while(!(c == n.size()) && s > 1 && n.at(c) == 'C' && n.at(c+1) == 'M'){
            c++;c++;
            ans += 900;
            s--;s--;
        }
        while(!(c == n.size()) && n.at(c) == 'D'){
            c++;
            ans += 500;
            s--;
        }
        while(!(c == n.size()) && s > 1 && n.at(c) == 'C' && n.at(c+1) == 'D'){
            c++;c++;
            ans += 400;
            s--;s--;
        }
        while(!(c == n.size()) && n.at(c) == 'C'){
            c++;
            ans += 100;
            s--;
        }
        while(!(c == n.size()) && s > 1 && n.at(c) == 'X' && n.at(c+1) == 'C'){
            c++;c++;
            ans += 90;
            s--;s--;
        }

        while(!(c == n.size()) && n.at(c) == 'L'){
            c++;
            ans += 50;
            s--;
        }
        while(!(c == n.size()) && s > 1 && n.at(c) == 'X' && n.at(c+1) == 'L'){
            c++;c++;
            ans += 40;
            s--;s--;
        }
        while(!(c == n.size()) && n.at(c) == 'X'){
            c++;
            ans += 10;
            s--;
        }
        while(!(c == n.size()) && s > 1 && n.at(c) == 'I' && n.at(c+1) == 'X'){
            c++;c++;
            ans += 9;
            s--;s--;
        }

        while(!(c == n.size()) && n.at(c) == 'V'){
            c++;
            ans += 5;
            s--;
        }
        while(!(c == n.size()) && s > 1 && n.at(c) == 'I' && n.at(c+1) == 'V'){
            c++;c++;
            ans += 4;
            s--;s--;
        }
        while(!(c == n.size()) && n.at(c) == 'I'){
            c++;
            ans += 1;
            s--;
        }
        cout << ans << endl;
    }
}
