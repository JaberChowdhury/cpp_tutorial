// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
//
//
//
//
//
#include <iostream>
#include <vector>
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
    vector<ll> nums;
    for (ll i = 0; i < t; i++) {
        ll x;
        cin >> x;
        if (x <= 10) {
            nums.push_back(x);
        }
    }

    for (ll i = 0; i < nums.size(); i++) {
        cout << "A[" << i << "] = " << nums[i] << endl;
    }
}
