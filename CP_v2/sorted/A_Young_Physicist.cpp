//
// https://codeforces.com/problemset/problem/69/A
//
//
//
#include <bits/stdc++.h>
#include <iomanip>
#include <vector>
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
    ll t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    ll n;
    cin >> n;
    vector<vector<ll>> nums;

    for (ll i = 0; i < n; i++) {
        vector<ll> temp;
        for (ll j = 0; j < 3; j++) {
            ll x;
            cin >> x;
            temp.push_back(x);
        }
        nums.push_back(temp);
    }

    vector<ll> result;
    for (ll i = 0; i < 3; i++) {
        ll res = 0;
        for (ll j = 0; j < n; j++) {
            res += nums[j][i];
        }
        result.push_back(res);
    }

    sort(result.begin(), result.end());

    if (result[2] != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
