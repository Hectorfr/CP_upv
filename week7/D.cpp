#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

int main() {
    int n; cin >> n;
    REP(i, 0, n) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int ans = 0, C = 0;


        while(a > 0){
            if (b != 0){
                ans += 8*5;
                b--;
            }else if (c != 0){
                ans += 8*4; 
                c--;
            }else if (d != 0){
                ans += 8*3;
                d--;
            }else{
                break;
            }
            a--;
            C++;
        }

        while(b > 0){
            if (c != 0){
                ans += 5*4; 
                c--;
            }else if (d != 0){
                ans += 5*3;
                d--;
            }else{
                break;
            }
            b--;
            C++;
        }

        while(c > 0){
            if (d != 0){
                ans += 4*3;
                d--;
            }else{
                break;
            }
            c--;
            C++;
        }
        cout << C << " " << ans << endl;


    }
}