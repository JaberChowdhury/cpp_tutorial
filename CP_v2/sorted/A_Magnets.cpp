// https://codeforces.com/problemset/problem/344/A
//

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
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    int n, group = 0;
    if (!(cin >> n)) {
        return;
    }
    string prev;
    cin >> prev;
    // cout << prev << " ";
    group++;
    for (int i = 1; i < n; i++) {
        string x;
        cin >> x;
        // cout << x << " ";
        if (prev != x) {
            // cout << "b ";
            group++;
        }
        prev = x;
    }
    // cout << endl;
    cout << group << endl;
}
