// https://codeforces.com/problemset/problem/141/A
//
//
//
//
//
#include <bits/stdc++.h>
#include <map>
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

    string x, y, z;
    cin >> x >> y >> z;

    map<char, int> data;
    map<char, int> bigstring;

    for (auto d : x) {
        data[d]++;
    }
    for (auto d : y) {
        data[d]++;
    }
    for (auto d : z) {
        bigstring[d]++;
    }

    bool possible = true;
    for (auto const& [d, count] : data) {
        if (bigstring[d] != count) {
            possible = false;
            break;
        }
    }

    if (bigstring.size() != data.size()) {
        cout << "NO" << endl;
        return;
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
