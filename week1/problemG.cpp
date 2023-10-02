#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n; cin >> n;
    char op; cin >> op;
    long long int d; cin >> d; 

    if (op == '+'){
        cout << n + d;
    }else if (op == '-'){
        cout << n - d;
    }else if (op == '*'){
        cout << n * d;
    }else if (op == '/'){
        if (d == 0){
            cout << "ERROR";
        }else cout << fixed << setprecision(2) << n/(double)d;
    }
    cout << endl;
}
