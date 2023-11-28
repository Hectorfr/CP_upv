#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
#define REP(i, a, b) for(int i = a; i < b; i++)
#define REPm(i, a, b) for(int i = a; i <= b; i++)
#define REPv(i, a, b) for(int i = a; i > b; i--)
    

    
int main(){
    int w, h, d;
    cin >> w >> h >> d;

    int c1 = d; 
    int c2 = 0;
    bool estoy = true;

    while(c1 > 0){
        REP(i, 0, c1) cout << " ";
        if (estoy){
            REP(i, 0, w) cout << "_";
            estoy = false;
        }else{
            cout << "/";
            REP(i, 0, w) cout << " ";
            cout << "/";
            REP(i, 0, c2) cout << " ";
            cout << '\\';
            c2 += 2;
        }
        c1--;
        cout << endl;
    }
    cout << "/";
    REP(i, 0, w) cout << "_";
    cout << "/";
    REP(i, 0, c2) cout << " ";
    cout << "\\";
    cout << endl;

    c2++;

    while(c1 < w/2 - 1){
        REP(i, 0, c1) cout << " ";
        cout << '\\';
        REP(i, 0, w) cout << " ";
        cout << '\\';
        REP(i, 0, c2) cout << " ";
        if (c1 == h/2 +1 ){
            cout << "/";
            c2--;
        }else{
            cout << '\\';
        }
        if (c1 == h/2 ) c2--;  
        
        c1++;
        cout << endl;
    }

    REP(i, 0, c1) cout << " ";

    cout << "\\";
    REP(i, 0, w) cout << "_";
    cout << "\\";
    cout << "/";
    cout << endl;



}

