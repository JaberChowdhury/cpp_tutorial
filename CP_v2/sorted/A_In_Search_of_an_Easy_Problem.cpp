// https://codeforces.com/problemset/problem/1030/A//
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

    int n;
    cin >> n;
    bool ok = true;
    while (n--) {
        int x;
        cin >> x;

        if (x == 1)
            ok = false;
    }

    if (ok) {
        cout << "EASY" << endl;
    } else {
        cout << "HARD" << endl;
    }
}
