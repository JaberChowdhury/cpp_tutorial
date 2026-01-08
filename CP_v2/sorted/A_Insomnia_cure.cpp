// https://codeforces.com/problemset/problem/148/A
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
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

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

void solution() {

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    long long count = d / k + d / l + d / m + d / n - d / lcm(k, l) - d / lcm(k, m) - d / lcm(k, n) - d / lcm(l, m)
                      - d / lcm(l, n) - d / lcm(m, n) + d / lcm(lcm(k, l), m) + d / lcm(lcm(k, l), n)
                      + d / lcm(lcm(k, m), n) + d / lcm(lcm(l, m), n) - d / lcm(lcm(lcm(k, l), m), n);

    cout << count << endl;
}
