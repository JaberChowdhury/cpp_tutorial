// https://codeforces.com/problemset/problem/1676/A
//
//
//
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
bool isLucky(int x) {
    int s1 = 0, s2 = 0;

    int counter = 1;
    while (x != 0) {
        int lastdigit = x % 10;
        if (counter <= 3) {
            s2 += lastdigit;
        } else {
            s1 += lastdigit;
        }
        x /= 10;
        counter++;
    }
    // cout << "s1 = " << s1 << " | s2 = " << s2 << endl;
    if (s1 == s2) {
        return true;
    } else {
        return false;
    }
}
void solution() {
    int n;
    cin >> n;
    int tickets[n];
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }
    for (int i = 0; i < n; i++) {
        if (isLucky(tickets[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
