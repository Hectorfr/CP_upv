#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPm(i, a, b) for (int i = a; i <= b; ++i)
#define ent '\n'

int *arr;

void solve(int start, int end){
    if (end-start < 1) return;
    int index = start;
    int pivot = arr[end]; //last pos
    REP(i, start, end){
        if (arr[i] < pivot){
            swap(arr[i], arr[index]);
            ++index;
        }
    }
    swap(arr[index], arr[end]);
    solve(start, index-1);
    solve(index+1, end);
}


int main() {
    int n; cin >> n;
    arr = new int[n];
    REP(i, 0, n) cin >> arr[i];


    solve(0, n-1);

    REP(i, 0, n) cout << arr[i] << " ";
    delete [] arr;
}
