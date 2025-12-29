// https://codeforces.com/problemset/problem/158/B
//
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

    int count[5] = {0};
    int taxi     = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    taxi += count[4];

    taxi += count[3];
    count[1] = max(0, count[1] - count[3]);

    taxi += count[2] / 2;

    if (count[2] % 2 != 0) {
        taxi++;
        count[1] = max(0, count[1] - 2);
    }

    if (count[1] > 0) {
        taxi += (count[1] + 3) / 4;
    }

    cout << taxi << endl;
}
