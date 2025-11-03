// https://codeforces.com/problemset/problem/58/A
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
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

string rem_duplicate() {}

void solution() {
    string s, clean = "", correct = "hello";
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (correct[count] == s[i]) {
            clean += s[i];
            count++;
        }
    }

    if (clean == correct) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
