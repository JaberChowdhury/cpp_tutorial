// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <map>
#include <string>
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
    ll t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    string s;
    cin >> s;

    map<char, int> frequency;
    frequency['e'] = 0;
    frequency['g'] = 0;
    frequency['y'] = 0;
    frequency['p'] = 0;
    frequency['t'] = 0;

    for (auto d : s) {
        frequency[tolower(d)]++;
    }

    int         count = 0;
    vector<int> f;
    for (auto d : frequency) {
        if (d.first == 'e' || d.first == 'g' || d.first == 'y' || d.first == 'p' || d.first == 't') {
            f.push_back(d.second);
        }
    }

    sort(f.begin(), f.end());

    cout << f[0] << endl;
}
