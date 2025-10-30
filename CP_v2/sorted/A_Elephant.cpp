// https://codeforces.com/problemset/problem/617/A
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
    int n;
    cin >> n;
    int count = 0;

    while (n != 0) {
        if (n >= 5) {
            // cout << "n = " << n << "  || step = " << 5 << endl;
            count += (n / 5);
            n = n % 5;
        } else if (n >= 4) {
            // cout << "n = " << n << "  || step = " << 4 << endl;
            count += n / 4;
            n = n % 4;
        } else if (n >= 3) {
            // cout << "n = " << n << "  || step = " << 3 << endl;
            count += n / 3;
            n = n % 3;
        } else if (n >= 2) {
            // cout << "n = " << n << "  || step = " << 2 << endl;
            count += n / 2;
            n = n % 2;
        } else if (n == 1) {
            // cout << "n = " << n << "  || step = " << 1 << endl;
            n = 0;
            count++;
            break;
        }
    }
    cout << count << endl;
}
