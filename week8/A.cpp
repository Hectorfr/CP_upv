#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

int main() {
    int N;
    long long a, b, c;
    cin >> N >> a >> b >> c;
    cout << a << " " << b << " ";

    REP(i, 2, N){
        cout << c << " ";
        long long temp = c;
        c = a + b + c;
        a = b;
        b = temp;
    }
    return 0;
}
