// https://codeforces.com/problemset/problem/133/A
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <sys/types.h>
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
    string s = "HI";
    cin >> s;

    sort(s.begin(), s.end());
    // cout << "sorted string = " << s << endl;
    bool isBreak = false;
    for (auto d : s) {
        for (auto dc : "HQ9") {
            if (d == dc) {
                cout << "YES" << endl;
                isBreak = true;
                break;
            }
        }
        if (isBreak)
            break;
    }

    if (!isBreak)
        cout << "NO" << endl;
}
