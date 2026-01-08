// https://codeforces.com/problemset/problem/208/A
//
//
//
//
#include <bits/stdc++.h>
#include <iostream>
#include <set>
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
    vector<string> song;

    int ptr = 1;
    while (s[ptr] != '\0') {
        string subs = "";
        bool   cont = true;
        while (cont) {
            subs += s[ptr - 1];
            ptr++;
            if (ptr % 3 == 0) {
                cont = false;
                break;
            }
        }
        if (subs != "WUB") {
            song.push_back(subs);
        }
    }

    for (auto d : song) {
        cout << d << " ";
    }
}
