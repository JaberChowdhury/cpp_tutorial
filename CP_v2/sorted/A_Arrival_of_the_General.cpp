// https://codeforces.com/problemset/problem/144/A
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <utility>
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
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> temp = nums;
    sort(temp.begin(), temp.end(), greater<int>());
    int move_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == temp[0]) {
            int ptr = i;
            while (nums[0] != temp[0]) {
                move_count++;
                swap(nums[ptr], nums[ptr - 1]);
                ptr--;
            }
            break;
        }
    }

    int min_index = 0, min_value = nums[0];

    for (int i = 0; i < n; i++) {
        if (nums[i] <= min_value) {
            min_index = i;
            min_value = nums[i];
        }
    }
    // for (auto d : nums) {
    //     cout << d << " ";
    // }
    // cout << endl;
    int ptr = min_index;
    while (nums[n - 1] != temp[n - 1]) {
        move_count++;
        swap(nums[ptr], nums[ptr + 1]);
        ptr++;
    }

    cout << move_count << endl;

    // cout << "move count = " << move_count << endl;
    // cout << "min_index = " << min_index << endl;
}
