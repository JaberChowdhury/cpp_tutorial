// https://codeforces.com/problemset/problem/281/A
//
//
//
//
#include <bits/stdc++.h>
#include <cctype>
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

    s[0] = toupper(s[0]);
    cout << s << endl;
}
