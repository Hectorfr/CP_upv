#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

int w, h;
vector<string> maze;

int solve(int px, int py, int x, int y){
    if (maze.at(y).at(x) == 'S') return 1;
    int r;
    //left-up-right-down
    if (x > 0 && x <= px && maze.at(y).at(x-1) != '#'){      
        r = solve(x, y, x-1, y);
        if (r > 0) return r + 1;
    }
    if (y > 0 && y <= py && maze.at(y-1).at(x) != '#'){
        r = solve(x, y, x, y-1);
        if (r > 0) return r + 1;
    }
    if (x < w-1 && x >= px && maze.at(y).at(x+1) != '#'){
        r = solve(x, y, x+1, y);
        if (r > 0) return r + 1;
    }
    if (y < h-1 && y >= py && maze.at(y+1).at(x) != '#'){
        r = solve(x, y, x, y+1);
        if (r > 0) return r + 1;
    }
    return -1;
}

int main() {
    cin >> w >> h;
    string s;
    
    REP(i, 0, h){
        cin >> s;
        maze.push_back(s);
    }
    cout << solve(w-2, h-2, w-2, h-2); ent;
    return 0;

}
