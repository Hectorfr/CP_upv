#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a; cin >> a;
    long long tc; cin >> tc;
    long long n; cin >> n;

    if (n != 0){
        n -= 1;
    }else if (tc != 0){
        tc -= 1;
    }else if (a != 0){
        a -= 1;
    }

    cout << a*5 + tc*7 + n*13;
    cout << "\n";
}
