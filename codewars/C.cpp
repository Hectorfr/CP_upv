#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'
map <string, vector<string>> g;


string solve(string curr, string target){
    if (curr == target) return target;
    string path;
    vector<string>:: iterator it;

    for(it = g[curr].begin(); it != g[curr].end(); it++){
        path = solve(*it, target);
        if (path.size() > 0) return curr + "/" + path;
    }
    return "";

}


int main() {
    int n, m; cin >> n >> m;
    string s, src, dest;

    REP(i, 0, n){
        cin >> s;
        if (s[0] == '/'){
            src = "";
            dest = s.substr(1, 10);
        }else{
            src = s.substr(0, 10);
            dest = s.substr(11, 20);
        }
        if (g.find(src) == g.end()){
            g.insert(pair<string, vector<string>>("", vector<string>()));
        }
        g[src].push_back(dest);
    }
    REP(i, 0, m){
        cin >> s;        
        cout << solve("", s) << endl;
    }
    return 0;
}
