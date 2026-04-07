// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
//
//
//
//
//
#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solution func
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    string s;
    getline(cin, s);

    for (char c : s) {
        if (c == '\\') {
            break;
        }
        cout << c;
    }
    cout << endl;
}
