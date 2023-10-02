#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

        //numbers
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            int num; cin >> num;
            cout << num*2;
            cout << " ";
        }
        cout << "\n";

        //chars
        cin >> n;
        for (int i = 0; i < n; i++){
            char c; cin >> c;
            if (96 < c && c < 123){
                c -= 32;
            }
            cout << c;
            cout << " ";
        }
        cout << "\n";

        //string
        int vocals[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
        bool voca;
        cin >> n;
        for (int i = 0; i < n; i++){
            string s; cin >> s;
            for (int c = 0; c < s.length(); c++){
                voca = false;
                for (int j = 0; j < 10; j++){
                    if (s.at(c) == vocals[j]) voca = true;
                }
                if (voca){
                    cout << 0;
                }else{
                    cout << s.at(c);
                }
            }
            cout << " ";
        }
        cout << "\n";
}
