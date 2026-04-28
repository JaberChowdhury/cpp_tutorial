// https://codeforces.com/problemset/problem/492/B
//
//
//
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
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
    int n, l;
    cin >> n >> l;
    vector<int> lanterns(n);
    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());
    vector<int> each_distance(n);
    for (int i = 1; i < n; i++) {
        each_distance[i - 1] = abs((lanterns[i - 1] - lanterns[i]));
    }

    sort(each_distance.begin(), each_distance.end());
    for (auto d : each_distance) {
        cout << d << endl;
    }
    cout << max((double) each_distance[0], (double) each_distance[n - 1] / 2) << endl;
}
// need to fix
