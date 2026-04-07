//  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
//
//
//
//
//
#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solution func
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

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;

        if (x.size() <= 10) {
            cout << x << endl;
        } else {
            cout << x[0];
            cout << x.size() - 2;
            cout << x[x.size() - 1] << endl;
        }
    }
}
