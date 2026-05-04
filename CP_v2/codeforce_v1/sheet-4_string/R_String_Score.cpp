// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int score = 0;
    for (int i = 0; i < n; i++) {
        // cout << "score = " << score << endl;
        if (s[i] == 'V') {
            score += 5;
        } else if (s[i] == 'W') {
            score += 2;
        } else if (s[i] == 'X') {
            i++;
        } else if (s[i] == 'Y') {
            s.push_back(s[i + 1]);
            i++;
            n++;
        } else if (s[i] == 'Z') {
            if (s[i + 1] == 'V') {
                score /= 5;
                i++;
            } else if (s[i + 1] == 'W') {
                score /= 2;
                i++;
            }
        }
    }

    cout << score << endl;
}
