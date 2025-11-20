// https://codeforces.com/problemset/problem/1790/C
//
//
//
//
#include <bits/stdc++.h>
#include <map>
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

void ans() {
    int n;
    cin >> n;
    vector<vector<int>> data(n, vector<int>(n - 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> data[i][j];
        }
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            freq[data[i][0]]++;
        }
    }
    int bestKey   = 0;
    int bestValue = -1;

    for (auto& p : freq) {
        if (p.second > bestValue) {
            bestValue = p.second;
            bestKey   = p.first;
        }
    }

    cout << bestKey << " ";
    for (int i = 0; i < n; i++) {
        if (data[i][0] != bestKey) {
            for (int j = 0; j < n - 1; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void solution() {
    int t;
    cin >> t;
    while (t--)
        ans();
}
