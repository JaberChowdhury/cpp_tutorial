// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string         x;
    vector<string> tokens;
    while (getline(cin, x, ' ')) {
        tokens.push_back(x);
    }

    int  a, b, ans;
    bool result;
    int  aqr;
    a   = stoi(tokens[0]);
    b   = stoi(tokens[2]);
    ans = stoi(tokens[4]);
    if (tokens[1] == "+") {
        if ((a + b == ans)) {
            result = true;
        } else {
            result = false;
            aqr    = a + b;
        }
    } else if (tokens[1] == "-") {
        if ((a - b == ans)) {
            result = true;
        } else {
            result = false;
            aqr    = a - b;
        }
    } else if (tokens[1] == "*") {
        if ((a * b == ans)) {
            result = true;
        } else {
            result = false;
            aqr    = a * b;
        }
    }
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << aqr << endl;
    }

    return 0;
}

//   32
// = 61
// * 42
// + 43
// - 45

// solved