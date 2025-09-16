// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

bool parse_string(string& data) {
    string a, b;
    char   s;
    bool   isfound = false;
    int    i;
    for (i = 0; i < data.size(); i++) {
        int z = data[i];
        if (z == 60 || z == 61 || z == 62) {
            isfound = true;
            i++;
            char f = z;
            s      = f;
        }
        if (!isfound) {
            a += data[i];
        }

        if (isfound) {
            b += data[i];
        }
    }
    bool ans;
    if (s == '>') {
        if (stoi(a) > stoi(b)) {
            ans = true;
        } else {
            ans = false;
        }
    } else if (s == '<') {
        if (stoi(a) < stoi(b)) {
            ans = true;
        } else {
            ans = false;
        }
    } else if (s == '=') {
        if (stoi(a) == stoi(b)) {
            ans = true;
        } else {
            ans = false;
        }
    }
    return ans;
}

int main() {

    string x;
    int    a, b;
    getline(cin, x);
    bool z = parse_string(x);
    if (z) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    return 0;
}
//   32
// < 60
// = 61
// > 62

// solved