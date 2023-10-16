#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n, m, fila; cin >> n >> m;
    queue<string> most[n+1];
    char a;

    REP(i, 0, m){
        cin >> a >> fila;
        if (a == 'a'){
            string name;cin >> name;
            most[fila].push(name);
        }else if (a == 'p'){
            cout << "- Personas en la fila " << fila << ": " << most[fila].size() << endl;
        }else{
            if (most[fila].empty()){
                cout << "- No hay nadie en la fila " << fila << endl;
            }else{
                cout << "- Atendiendo a " << most[fila].front() << endl;
                most[fila].pop();
            }
        }
    }
    int count = 0;
    REP(i, 1, n+1){
        while(!most[i].empty()){
            most[i].pop();
            count++;
        }
    }
    cout << "Personas por atender: " << count << endl;
    return 0;
}
