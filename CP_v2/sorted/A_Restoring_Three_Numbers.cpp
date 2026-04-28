// https://codeforces.com/problemset/problem/1154/A
//
//
//
//
//
//
//
#include <bits/stdc++.h>
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
    vector<int> nums(4);
    for (int i = 0; i < 4; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < 3; i++) {
        cout << nums[3] - nums[i] << " ";
    }
    cout << endl;
}
