// https://codeforces.com/problemset/problem/122/A
//
//
//
//
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solutioin func
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

bool isLucky(int x) {
    string s = to_string(x);
    for (char c : s) {
        if (c != '4' && c != '7')
            return false;
    }
    return true;
}

void solution() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
