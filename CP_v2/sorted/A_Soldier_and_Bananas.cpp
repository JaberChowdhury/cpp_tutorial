// https://codeforces.com/problemset/problem/546/A
//
//
//
//
#include <bits/stdc++.h>
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
    ll k, n, w;
    cin >> k >> n >> w;

    // ll money_needed = (w / 2) * ((2 * k) + ((w - 1) * k));
    ll money_needed = (w * ((2 * k) + ((w - 1) * k))) / 2;

    if ((n - money_needed) < 0) {
        cout << (n - money_needed) * (-1) << endl;
    } else {
        cout << 0 << endl;
    }
}

// Sn​=n/2[2a+(n−1)d]
// (859 453892 543) -> 126416972
