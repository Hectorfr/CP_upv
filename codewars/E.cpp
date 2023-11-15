#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

void merge(vector<int> &ans, vector<int> &l1,vector<int> &l2){
    int i1 = 0, i2 = 0;
    REP(i, 0, ans.size()){
        if (l1.size() == i1){
            ans[i] = l2[i2++];
        }else if (l2.size() == i2){
            ans[i] = l1[i1++];
        }else if (l1[i1] < l2[i2]){
            ans[i] = l1[i1++];
        }else{
            ans[i] = l2[i2++];
        }
    }
}

void solve(vector<int> &l){

    if (l.size() == 1) return;

    int mid = l.size() / 2;
    vector<int> l1(l.begin(), l.begin() + mid);
    vector<int> l2(l.begin() + mid, l.begin()+l.size());
    solve(l1);
    solve(l2);
    merge(l, l1, l2);
}

int main() {
    vector<int> l;
    int n; cin >> n;
    int a;
    REP(i, 0, n){
        cin >> a;
        l.push_back(a);
    }
    solve(l);

    REP(i, 0, n) cout << l[i] << " ";

    return 0;
}
