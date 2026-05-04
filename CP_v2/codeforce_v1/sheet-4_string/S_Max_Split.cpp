// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
//
//
//
//
#include <bits/stdc++.h>
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

    vector<string> balanced_string;

    int    lc = 0, rc = 0;
    string temp = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') {
            lc++;
        } else {
            rc++;
        }
        temp.push_back(s[i]);
        if (lc > 0 && rc > 0 && lc == rc) {
            // cout << lc << " " << rc << endl;
            balanced_string.push_back(temp);
            lc   = 0;
            rc   = 0;
            temp = "";
        }
    }

    cout << balanced_string.size() << endl;
    for (auto d : balanced_string) {
        cout << d << endl;
    }
}
