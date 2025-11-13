// https://codeforces.com/problemset/problem/158/B
//
//
//
//
#include <bits/stdc++.h>
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
    vector<int> arr_three;
    vector<int> arr_one;
    vector<int> arr_two;
    int         taxi_count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 4) {
            taxi_count++;
        } else if (x == 1) {
            arr_one.push_back(x);
        } else if (x == 2) {
            arr_two.push_back(x);
        } else if (x == 3) {
            arr_three.push_back(3);
        }
    }

    if ((arr_three.size() + 1) >= (arr_one.size() + 1)) {
        taxi_count += arr_three.size() + 1;
    } else if ((arr_one.size() + 1) > (arr_three.size() + 1)) {
        if ((arr_two.size() + 1) >= ((arr_one.size() + 1) / 2)) {
            int x = (arr_one.size() + 1) / 2;
            taxi_count += x;
            taxi_count += (arr_two.size() + 1) - x;
        } else if (((arr_one.size() + 1) / 2) >= (arr_two.size() + 1)) {
            int y = (arr_one.size() + 1) - ((arr_two.size() + 1) * 2);
            taxi_count += y;
            taxi_count += (arr_one.size() + 1) - y;
        }
    }

    cout << taxi_count << endl;
}

// we need to handle this
// 1 1 1 1 1 1
