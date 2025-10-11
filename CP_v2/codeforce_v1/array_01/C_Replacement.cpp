// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
//
//
//
//
//
#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
void test(); // test func
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
        test();
    return 0;
}

void test() {
    ll t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;
        if (x > 0) {
            cout << 1 << " ";
        } else if (x < 0) {
            cout << 2 << " ";
        } else if (x == 0) {
            cout << 0 << " ";
        }
    }
    cout << endl;
}
