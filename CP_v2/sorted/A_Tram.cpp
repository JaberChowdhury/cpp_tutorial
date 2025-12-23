// https://codeforces.com/problemset/problem/116/A//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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

    int         current = 0;
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current -= a;
        current += b;
        ans[i] = current;
    }
    sort(ans.begin(), ans.end());

    cout << ans[n - 1] << endl;
}
