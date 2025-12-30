// https://codeforces.com/problemset/problem/705/A
//
//
//
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

    // 1 - > I hate it
    // 2 - > I hate that I love it
    // 3 - > I hate that I love that I hate it
    // 4 - > I hate that I love that I hate that I love it
    // 5 - > I hate that I love that I hate that I love that I hate it
    int n;
    cin >> n;

    if (n == 1) {
        cout << "I hate it" << endl;
        return;
    }
    string s = "";

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            if (i == n) {
                s += "I hate it";
            } else {
                s += "I hate that ";
            }
        } else {
            if (i == n) {
                s += "I love it";
            } else {
                s += "I love that ";
            }
        }
    }

    cout << s << endl;
}
