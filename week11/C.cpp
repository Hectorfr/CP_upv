#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'
#define ll long long

int main() {

    int sides[3];
    REP(i, 0, 3) cin >> sides[i];
    sort(sides, sides+3);
    int s = sides[0], m = sides[1], l = sides[2];

    
    if (s == l) cout << "EQUILATERO";
    else if (s*s+m*m == l*l) cout << "RECTANGULO";
    else if (s+m <= l) cout << "IMPOSIBLE";
    else if (s == m || m == l) cout << "ISOSCELES";
    else cout << "ESCALENO";
    

}