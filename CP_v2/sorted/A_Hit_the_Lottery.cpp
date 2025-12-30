// https : // codeforces.com/problemset/problem/996/A/
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
    int x, count = 0;
    cin >> x;

    while (x != 0) {
        if (x >= 100) {
            // cout << "x is >= 100 ===> " << x << endl;
            count += (x / 100);
            x -= (x / 100) * 100;
            // cout << "Count ==> " << count << endl;
        } else if (x >= 20) {
            // cout << "x is >= 20 ===> " << x << endl;
            count += (x / 20);
            x -= (x / 20) * 20;
            // cout << "Count ==> " << count << endl;
        } else if (x >= 10) {
            // cout << "x is >= 10 ===> " << x << endl;
            count += (x / 10);
            x -= (x / 10) * 10;
            // cout << "Count ==> " << count << endl;
        } else if (x >= 5) {
            // cout << "x is >= 5 ===> " << x << endl;
            count += (x / 5);
            x -= (x / 5) * 5;
            // cout << "Count ==> " << count << endl;
        } else {
            // cout << "x is >= 1 ===> " << x << endl;
            count += x;
            x = 0;
            // cout << "Count ==> " << count << endl;
        }
    }

    cout << count << endl;
}
