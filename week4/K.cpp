#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n; cin >> n;
    int books[n];
    REP(i, 0, n) cin >> books[i];

    int q; cin >> q;
    int consults[q];
    REP(i, 0, q) cin >> consults[i];


    sort(books, books+n);

    int down = 0, mid, up = n-1;
    bool found = false;
    REP(count, 0, q){
        while(down <= up && !found){
            mid = (up + down) / 2;
            if (books[mid] == consults[count]){
                found = true;
            }else if ( books[mid] > consults[count]){
                up = mid -1;
            }else{
                down = mid +1;
            }
        }
        cout << (found ? "YES" : "NO"); ent;
        if (found) found = false;

        down = 0; up = n;
    }
}
