// https://codeforces.com/problemset/problem/405/A
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

    int n;
    cin >> n;

    vector<int> nums;
    while (n--) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());

    for (auto d : nums) {
        cout << d << " ";
    }
    cout << endl;
}
