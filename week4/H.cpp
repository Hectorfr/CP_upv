#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'


int main() {
    int n, a, b; cin >> n;
    pair<int, int> arr[n];
    REP(i, 0, n){ 
        cin >> a, cin >> b;
        arr[i] = make_pair(a, INT32_MAX - b);
    }
    sort(arr, arr+n);
    for (int i = n-1; i >= 0; i--){
        cout << arr[i].first << " " << INT32_MAX - arr[i].second ;
        ent;
    }
    


}
