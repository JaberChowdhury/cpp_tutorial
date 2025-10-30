// https://codeforces.com/problemset/problem/2067/A
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
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int diff = x + 1 - y;
        if (diff >= 0 && diff % 9 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
