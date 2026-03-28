// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
//
//
//
//

#include <algorithm>
#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // test func
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

void test() {
    int n;
    cin >> n;

    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if (n % 2 != 0) {
        cout << -1 << endl;
        return;
    }

    if (odd == even) {
        cout << 0 << endl;
        return;
    }
    int big   = max(odd, even);
    int small = min(odd, even);
    if (small == 0) {
        cout << big / 2 << endl;
        return;
    }
    cout << (big - small) / 2 << endl;
}
void solution() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
