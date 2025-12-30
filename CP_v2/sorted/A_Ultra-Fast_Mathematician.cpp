// https://codeforces.com/problemset/problem/61/A// //

#include <bits/stdc++.h>
#include <iostream>
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

void solution() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            cout << "0";
        } else {
            cout << "1";
        }
    }
    cout << endl;
}
