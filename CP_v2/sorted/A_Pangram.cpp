// https://codeforces.com/problemset/problem/520/A
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <set>
#include <sys/types.h>
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
    bool en_count[27] = {false};
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        // cout << tolower(x) - 96 << endl;
        if (!en_count[tolower(x) - 96]) {
            en_count[tolower(x) - 96] = true;
        }
    }

    bool isOk = true;
    for (int i = 1; i <= 26; i++) {
        if (!en_count[i]) {
            cout << "NO" << endl;
            isOk = false;
            break;
        }
    }

    if (isOk) {
        cout << "YES" << endl;
    }
}
