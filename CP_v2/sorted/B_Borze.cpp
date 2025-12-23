// https://codeforces.com/problemset/problem/32/B
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

    string s;
    cin >> s;

    string num = "";

    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            num += "0";
        } else if (i + 1 != n) {
            if (s[i] == '-' && s[i + 1] == '.') {
                num += "1";
                i++;
            } else if (s[i] == '-' && s[i + 1] == '-') {
                num += "2";
                i++;
            }
        }
    }

    cout << num << endl;
}
