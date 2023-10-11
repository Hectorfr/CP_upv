#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n, k, julian = INT32_MIN, adrian = INT32_MAX; cin >> n >> k;
    int tareas[n];
    REP(i, 0, n) cin >> tareas[i];
    sort(tareas, tareas+n);
    cout << tareas[k-1] << " " << tareas[k];

}
