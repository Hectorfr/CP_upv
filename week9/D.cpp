#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

int main() {
    int n; cin >> n;
    int count = 0;
    while(n != 1){
        if (n % 2 == 0){
            n /= 2;
            count++;
        }else if (n % 3 == 0){
            n /= 3;
            count++;
        }else{
            n--;
            count++;
        }

    }
    
    cout << count;
    

}
