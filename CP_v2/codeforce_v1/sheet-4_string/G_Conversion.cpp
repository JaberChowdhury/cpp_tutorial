//  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
//
//
//
//
//
#include <cctype>
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
    cin >> s;

    for (auto d : s) {
        if (d == ',') {
            cout << " ";
        } else if (d >= 'A' && d <= 'Z') {
            cout << (char) tolower(d);
        } else if (d >= 'a' && d <= 'z') {
            cout << (char) toupper(d);
        }
    }
}
