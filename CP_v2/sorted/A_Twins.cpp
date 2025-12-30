// https : // codeforces.com/problemset/problem/160/A
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
    int n, sum = 0, coin_count = 0, my_sum = 0;
    cin >> n;

    vector<int> nums(n);
    while (n--) {
        cin >> nums[n];
        sum += nums[n];
    }

    sort(nums.begin(), nums.end(), greater<int>());

    for (auto d : nums) {
        if (my_sum > (sum - my_sum)) {
            break;
        }
        // cout << "my_sum = " << my_sum << "  sum = " << sum - my_sum << endl;
        my_sum += d;
        coin_count++;
    }

    cout << coin_count << endl;
}
