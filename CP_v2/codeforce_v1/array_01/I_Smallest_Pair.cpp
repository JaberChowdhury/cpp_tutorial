// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
//
//
//
//
//
#include <algorithm>
#include <iostream>
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

int find_min(vector<int> nums) {
    int min = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (min > nums[i]) {
            min = nums[i];
        }
    }
    return min;
}

void test() {

    int n;
    cin >> n;

    int         nums[n];
    vector<int> results;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // cout << nums[i] << " , " << nums[j] << " ===> " << " i : " << i + 1 << " | j : " << j + 1 << endl;
            results.push_back(nums[i] + nums[j] + ((j + 1) - (i + 1)));
        }
    }

    // cout << "Results :: ";
    // for (auto d : results) {
    //     cout << d << " ";
    // }
    //
    //
    cout << find_min(results) << endl;
}
void solution() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        test();
    }
}
