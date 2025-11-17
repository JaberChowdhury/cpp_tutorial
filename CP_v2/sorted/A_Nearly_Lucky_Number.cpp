// https://codeforces.com/problemset/problem/110/A
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

    string s;
    cin >> s;

    int total_lucky = 0;

    for (auto d : s) {
        if (d == '4' || d == '7') {
            total_lucky++;
        }
    }

    if (total_lucky == 4 || total_lucky == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
