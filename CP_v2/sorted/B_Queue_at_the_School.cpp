// https://codeforces.com/problemset/problem/266/B
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

    int n, t;

    cin >> n >> t;

    char q[n];
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    while (t--) {
        for (int i = 1; i < n; i++) {
            if (q[i] == 'G' && q[i - 1] == 'B') {
                char temp = q[i];
                q[i]      = q[i - 1];
                q[i - 1]  = temp;
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << q[i];
    }
}
