// https://codeforces.com/problemset/problem/1475/A
//
//
//
//
//
//
//
#include <bits/stdc++.h>
#include <cstdint>
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

void test() {
    int64_t n;
    cin >> n;
    cout << n << endl;
    if (n % 2 == 1) {
        cout << "YES" << endl;
        return;
    }

    for (int64_t i = 3; i < n / 2; i += 2) {
        if (n % i == 0) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
void solution() {

    int t;
    cin >> t;

    while (t--) {
        test();
    }
}
