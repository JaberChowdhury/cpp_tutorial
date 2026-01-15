// https://codeforces.com/problemset/problem/268/A

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

    int hsc[n], gsc[n];

    for (int i = 0; i < n; i++) {
        cin >> hsc[i] >> gsc[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (hsc[i] == gsc[j]) {
                    // cout << hsc[i] << " " << gsc[j] << endl;
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
