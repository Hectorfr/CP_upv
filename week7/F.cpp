#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'
typedef  pair<int, int> pii;

class MaxQueue {
private:
    stack<pii> s1, s2;

    void move_stack() {
        while(!s1.empty()){
            int next = s1.top().first;
            s1.pop();
            if (s2.empty()){
                s2.push({next, next});
            }else{
                s2.push({next, max(next, s2.top().second)});
            }
        }
    }

public:
    void add(int x) {
        if (s1.empty()){
            s1.push({x, x});
        }else{
            s1.push({x, max(x, s1.top().second)});
        }
    }

    int get_max(){
        if (s1.empty() || s2.empty()){
            return s1.empty() ? s2.top().second : s1.top().second;
        }else{
            return max(s1.top().second, s2.top().second);
        }
    }

    void remove () {
        if (s2.empty()){
            move_stack();
        }
        s2.pop();
    }
    
};

void solve() {
    long n, m;
    int a;
    cin >> n >> m >> a;

    MaxQueue marco;
    int next;
    REP(i, 1, m){
        cin >> next;
        marco.add(next);
    }

    n = n - m + 1;

    long count = 0;
    int max_photo;
    cout << "---" << endl;
    REP(i, 0, n){
        cin >> next;
        marco.add(next);

        max_photo = marco.get_max();
        if (max_photo <= a){
            cout << "SI " << max_photo << endl;
            count++;
        }else{
            cout << "NO " << max_photo << endl;
        }
        marco.remove();
    }
    cout << "Total: " << count << endl;

}

int main(){
    int t; cin >> t;
    REP(i, 0, t){
        solve();
    }
}