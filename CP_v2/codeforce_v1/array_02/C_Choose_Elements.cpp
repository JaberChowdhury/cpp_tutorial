// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
//
//
//
//
#include <algorithm>
#include <functional>
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
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), greater<int>());
    ll sum = 0;
    for (ll i = 0; i < k; i++) {
        if (nums[i] > 0) {
            sum += nums[i];
        }
    }
    cout << sum << endl;
}
