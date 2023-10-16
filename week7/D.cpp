#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'

struct Instruction {
    string action;
    string reg;
    int point;
};

void inp(map <string, int>& registers, char chars[], int posChar, string reg){
    char received = chars[posChar];
    int ascii = int(received);
    registers[reg] = ascii;
}

void print(map <string, int> registers, string reg){
    int received = registers[reg];
    char ascii = char(received);
    cout << ascii;

}

int main() {
    int n; cin >> n;

    Instruction instructions[n];
    map<string, int> registers;
    stack<int> pila;

    REP(i, 0, n) {
        cin >> instructions[i].action;

        if (instructions[i].action == "ret" || instructions[i].action == "halt"){
            instructions[i].reg = "";
            instructions[i].point = 0;       
            if (i == n-1){
                break;
            }else continue;
        }

        if (instructions[i].action == "call"){
            instructions[i].reg = "";
            cin >> instructions[i].point;
            if (i == n-1){
                break;
            }else continue;
        }

        cin >> instructions[i].reg;
        if (instructions[i].action == "dec"){
            cin >> instructions[i].point;
        }else instructions[i].point = 0;
    }

    //To put all chars in an array; BREAK if we find \n (ASCII 10)
    int m; cin >> m; cin.ignore();
    char chars[n];
    int k = 0; bool found;
    REP(i, 0, m){
        found = false;
        while(!found){
            chars[k] = cin.get();
            int aux = (int) chars[k];
            if (aux == 10){found = true;}
            k++;
        }
    }

    int posChar = 0;
    int i = 0;
    while(i < n){

        if (instructions[i].action == "inc"){
            registers[instructions[i].reg]++;
            i++;

        }else if (instructions[i].action == "dec"){
            if (registers[instructions[i].reg] > 0){
                registers[instructions[i].reg]--;
                i++;
            }else if (registers[instructions[i].reg] == 0){
                i = instructions[i].point;
            }

        }else if (instructions[i].action == "halt"){
            break;

        }else if (instructions[i].action == "inp"){
            string reg = instructions[i].reg;
            inp(registers, chars, posChar, reg);
            posChar++;
            i++;

        }else if (instructions[i].action == "call"){
            pila.push(i+1);
            i = instructions[i].point;
        }else if (instructions[i].action == "ret"){
            i = pila.top();
            pila.pop();
        }else if (instructions[i].action == "print"){
            string reg = instructions[i].reg;
            print(registers, reg);
            i++;
        }
    }
}