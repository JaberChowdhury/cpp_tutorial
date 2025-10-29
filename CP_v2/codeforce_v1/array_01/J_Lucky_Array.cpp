// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
//
//
//
//
#include <iostream>
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

    int nums[n];
    cin >> nums[0];
    int min = nums[0], min_count = 0;

    for (int i = 1; i < n; i++) {
        cin >> nums[i];
        if (min > nums[i]) {
            min = nums[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] == min) {
            min_count++;
        }
    }

    if (min_count % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
}
