// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
//
//
//
//
//
//
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
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int track = 0;

    for (int j = 0; j < m; j++) {
        if (b[track] == a[j]) {
            track++;
        }
    }

    if (track != n) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
