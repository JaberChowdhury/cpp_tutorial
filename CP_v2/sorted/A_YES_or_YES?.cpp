// https://codeforces.com/problemset/problem/1703/A
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
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

string check(string s) {
    if (s.size() > 3) {
        return "NO";
    }
    if (
        //
        (s[0] == 'Y' || 'y')
        //
        // (s[1] == 'E' || 'e') &&
        // //
        // (s[2] == 'S' || 's')
        //
    ) {
        return "YES";
    } else {
        return "NO";
    }
}

void solution() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        //
        if (s.size() > 3) {
            cout << "NO" << endl;
            continue;
        } else {
            if (
                //
                (s[0] == 'Y' || s[0] == 'y') &&
                //
                (s[1] == 'E' || s[1] == 'e') &&
                // //
                (s[2] == 'S' || s[2] == 's')
                //
            ) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
