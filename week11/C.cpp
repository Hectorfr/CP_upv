#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

int main() {
    int a, b, c; cin >> a >> b >> c;
    
    if (a == b && a == c){
        cout << "EQUILATERO";
        return 0;
    }else if (a*a + b*b == c*c){
        cout << "RECTANGULO";
        return 0;
    }else if (a == b || a == c || b == c){
        cout << "ISOSCELES";
        return 0;
    }else if (a == b || a == c || b == c){
        cout << "ISOSCELES";
        return 0;
    }else{
        int sides[3];
        sides[0] = a; sides[1] = b; sides[2] =c;

        int maxN = 0;
        maxN = max(a, b);
        maxN = max(maxN, c);

        int sum = 0;
        REP(i, 0, 3){
            if (sides[i] != maxN){
                sum += sides[i];
            }
        }

        if (sum > maxN){ //sum of both is bigger than the biggest
            cout << "ESCALENO";
            return 0;
        }else{
            cout << "IMPOSIBLE";
            return 0;
        }

    }
    

}