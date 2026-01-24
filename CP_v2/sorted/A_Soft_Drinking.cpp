// https://codeforces.com/problemset/problem/151/A
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
    int n, k, l, c, d, salt, nl, np;
    cin >> n >> k >> l >> c >> d >> salt >> nl >> np;

    int total_drink = k * l, total_lime_slice = c * d;
    // for each batch/toast
    int drink_needed = nl * n, salt_needed = np * n, lime_needed = 1 * n;

    int maximun_drink_count = total_drink / drink_needed, maximum_salt_count = salt / salt_needed,
        maximum_lime_slice_count = total_lime_slice / n;

    int result = min(min(maximum_lime_slice_count, maximum_salt_count), maximun_drink_count);

    cout << result << endl;
}
