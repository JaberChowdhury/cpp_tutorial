// https://codeforces.com/problemset/problem/1335/A
//
//
//
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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << (x - 1) / 2 << endl;
    }
}

/*
 * n = 1 ans = 0
 * n = 2 ans = 0
 * n = 3 ans = 1
 * n = 4 ans = 1
 * n = 5 ans = 2
 * n = 6 ans = 2
 * n = 7 ans = 3
 * n = 8 ans = 3
 *
 *
 *
 *
 *
 *
 *
 * n = 5
 * 4 1
 * 3 2
 *
 * n = 6
 * 5 1
 * 4 2
 *
 */
