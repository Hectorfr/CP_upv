#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

int main() {
    int n;
    map<string, int> m;
    string str;
    getline(cin, str);
    n = stoi(str);
    string arr[n];

    REP(i, 0, n){
        getline(cin, str);
        arr[i] = str;
    }

    int pos = 0;
    while(pos < n){
        stringstream ss(arr[pos]);
        ss >> str;

        if (str == "inc"){
            ss >> str;
            m[str]++;
            pos++;
        }else if (str == "dec"){
            ss >> str;
            if (m[str] > 0 && m.count(str) != 0){
                m[str]--;
                pos++;
                ss >> str; // pass the number
            }else{
                m[str] = 0;
                ss >> str;
                pos = stoi(str); // change to this instruction
            }
        }else{
            break;
        }
    }
    for (const auto& pair : m){
        cout << pair.first << " = " << pair.second << endl;
    }
    return 0;
}
