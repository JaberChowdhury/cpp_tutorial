// https://codeforces.com/problemset/problem/1742/A
//
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
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        if ((x + y == z) || (x + z == y) || (y + z == x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
