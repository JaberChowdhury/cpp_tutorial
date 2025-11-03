// https://codeforces.com/problemset/problem/96/A
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
    char current_char = s[0];
    int  count        = 1;
    bool isDangerous  = false;
    for (int i = 1; i <= s.size(); i++) {
        if (count != 7) {
            if (current_char == s[i]) {
                count++;
            } else {
                current_char = s[i];
                count        = 0;
                count++;
            }
        } else {
            isDangerous = true;
            break;
        }
    }

    // cout << "Count :: " << count << " || char :: " << current_char << endl;
    if (isDangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
