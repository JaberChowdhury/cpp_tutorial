// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
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

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int  start = 0, end = n - 1;
    bool flip = false;

    for (int i = 0; i < n; i++) {
        if (flip) {
            cout << arr[end--] << " ";

        } else {
            cout << arr[start++] << " ";
        }
        flip = !flip;
    }
}
