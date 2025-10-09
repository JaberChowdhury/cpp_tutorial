// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

string reverse(string a) {

    string x = "";
    int    f = a.size();
    while (f--) {
        x += a[f];
    }
    // cout << "main :: " << a << endl;
    // cout << "reverse :: " << x << endl;
    return x;
}
void test() {
    string x;
    cin >> x;

    // if (x != reverse(x)) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }

    bool ispal = true;
    for (int i = 0; i < (x.size() - 1) / 2; i++) {
        if (x[i] != x[(x.size() - 1) - i]) {
            ispal = false;
            break;
        }
    }

    if (ispal) {
        cout << stoi(reverse(x)) << endl;
        cout << "YES" << endl;
    } else {
        cout << stoi(reverse(x)) << endl;
        cout << "NO" << endl;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
// freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}

// SOLVED
