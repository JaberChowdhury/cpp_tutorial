// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
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
    int n;
    cin >> n;
    int min, index = 0;
    cin >> min;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (min > x) {
            min   = x;
            index = i;
        }
    }

    cout << min << " " << index + 1 << endl;
}
