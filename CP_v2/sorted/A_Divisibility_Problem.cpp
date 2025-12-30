// https://codeforces.com/problemset/problem/1328/A
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

void test() {
    long int a, b;
    cin >> a >> b;
    if (a % b == 0) {
        cout << 0 << endl;
        return;
    }
    if (a < b) {
        cout << b - a << endl;
        return;
    }

    cout << (((a / b) + 1) * b) - a << endl;
}
void solution() {
    int t;
    cin >> t;
    while (t--)
        test();
}
