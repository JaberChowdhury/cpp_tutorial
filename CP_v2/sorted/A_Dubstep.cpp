// https://codeforces.com/problemset/problem/208/A
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
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
string replace(string s, string from, string to) {
    string result = "";
    int    i      = 0;
    while (i < s.length()) {
        bool match = true;
        if (i + from.length() <= s.length()) {
            for (int j = 0; j < from.length(); j++) {
                if (s[i + j] != from[j]) {
                    match = false;
                    break;
                }
            }
        } else {
            match = false;
        }

        if (match) {
            for (int j = 0; j < to.length(); j++) {
                result += to[j];
            }
            i += from.length();
        } else {
            result += s[i];
            i++;
        }
    }
    return result;
}

void solution() {
    string s, song = "";
    cin >> s;

    string result = replace(s, "WUB", " ");
    cout << replace(result, "  ", " ") << endl;
}
