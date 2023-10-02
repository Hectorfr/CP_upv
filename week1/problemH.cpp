#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
    double sum = 0, count = 0;
    
    for (int i = 0; i < n; i++){
        float num; cin >> num;
        if (num >= 5.00){
            sum += num;
            count++;
        }

    }
    cout << setprecision(2) << fixed << sum/count << endl;
}
