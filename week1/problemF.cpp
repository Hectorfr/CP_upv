#include <bits/stdc++.h>

using namespace std;

int main() {
    string res = "";
    int min = 720;
    int n; cin >> n;
    min += n;

    //DAYS
    min %= 1440;

    //HOURS
    int h = min/60;
    if (0 <= h && h < 10) cout << 0;
    cout << h;
    min %= 60;
    cout << ":";

    //MINUTES
    if (0 <= min && min < 10) cout << 0;
    cout << min;
    cout << "\n";
}
