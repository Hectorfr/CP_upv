#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'



int main() {
    int n; cin >> n;
    stack<string> books;

    REP(i, 0, n){
        string s;cin >> s;
        if (s == "Depositan"){
            getline(cin, s);
            s = s.substr(1);
            books.push(s);
        }else{
            books.pop();
        }
    }
    if (books.empty()){
        cout << "No quedan libros" << endl;
    }
    while (!books.empty()){
        cout << books.top() << endl;
        books.pop();
    }
    return 0;
}
