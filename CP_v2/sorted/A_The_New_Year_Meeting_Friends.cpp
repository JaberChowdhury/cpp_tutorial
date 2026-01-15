// https://codeforces.com/problemset/problem/723/A
//
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
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
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    vector<int> nums(3);
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int sum = 0;
    sum += nums[1] - nums[0];
    sum += nums[2] - nums[1];

    cout << sum << endl;
}
