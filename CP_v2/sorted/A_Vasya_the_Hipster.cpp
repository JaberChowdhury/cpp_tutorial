// https://codeforces.com/problemset/problem/581/A
//
//
//
//
#include <algorithm>
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
    ll t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << endl;
}
