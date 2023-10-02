#include <bits/stdc++.h>

using namespace std;

//Relationship I found with pairings
long long solve(long long n){
    if (n%2 == 0){
        return n * ((n/2)+0.5);
    }else{
        return n * ((n/2)+1);
    }
}
int main() {
	long long n; cin >> n;
    cout << solve(n) << endl;
}

