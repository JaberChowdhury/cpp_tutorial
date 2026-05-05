// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
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
    ll t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    int a;
    cin >> a;
    string s;
    cin >> s;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string og  = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string temp = "";
    if (a == 1) {
        for (int i = 0; i < s.size(); i++) {
            temp += key[og.find(s[i])];
        }

    } else {
        for (int i = 0; i < s.size(); i++) {
            temp += og[key.find(s[i])];
        }
    }
    cout << temp << endl;
}
