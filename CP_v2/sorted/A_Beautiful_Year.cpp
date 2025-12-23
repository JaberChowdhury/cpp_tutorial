// https://codeforces.com/problemset/problem/271/A//
//
//
//
#include <bits/stdc++.h>
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

    int t;
    cin >> t;

    while (t++) {
        int      temp = t;
        set<int> unique;
        while (temp != 0) {
            int lastdigit = temp % 10;
            unique.insert(lastdigit);
            temp = temp / 10;
        }

        if (unique.size() == 4) {
            cout << t << endl;
            break;
        }
    }
}
