// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
//
//
//
//
#include <algorithm>
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

    int cost1 = 0, cost2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (arr[i] > 0)
                cost1++;
            if (arr[i] < 0)
                cost2++;
        } else {
            if (arr[i] < 0)
                cost1++;
            if (arr[i] > 0)
                cost2++;
        }
    }
    cout << min(cost1, cost2) << endl;
}
