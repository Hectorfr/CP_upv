#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n, offset, maxN, minN, count; cin >> n;
    int row[n];
    count = 0;


    maxN = INT32_MIN;
    minN = INT32_MAX;
    REP(i, 0, n){
        cin >> row[i];
        maxN = max(maxN, row[i]);
        minN = min(minN, row[i]);
    }

    int aux[maxN-minN+1];

    memset(aux, 0, sizeof(aux));

    REP(i, 0, n){
        aux[row[i] - minN]++;
    }

    REP(i, 0, maxN-minN+1){
        while (aux[i] != 0){
            row[count] = i + minN;
            count++;
            aux[i]--;
        }
    }
    REP(i, 0, n) cout << row[i] << " ";
}
