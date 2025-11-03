// https://codeforces.com/problemset/problem/2160/A
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

void test() {

    int n;
    cin >> n;
    set<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.insert(x);
    }

    // // // subarray
    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         for (int k = i; k <= j; k++) {
    //             cout << nums[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    vector<int> final;
    for (auto d : nums) {
        final.push_back(d);
    }
    for (int i = 0; i <= 100; i++) {
        if (final[0] != i) {
            cout << i << endl;
            break;
        }
    }

    // for (auto d : nums) {
    //     cout << d << " ";
    // }
    // cout << endl;
}
void solution() {

    int t;
    cin >> t;
    while (t--)
        test();
}
