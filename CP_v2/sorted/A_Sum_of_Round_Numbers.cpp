// https://codeforces.com/problemset/problem/1352/A
//
//
//
//
#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
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
    int t;
    cin >> t;

    int nums[t];
    for (int i = 0; i < t; i++) {
        cin >> nums[i];
    }

    for (auto d : nums) {
        if (to_string(d).size() == 1) {
            cout << 1 << endl;
            cout << d << endl;
            continue;
        }
        int         num = d, divide = 10;
        vector<int> parts;

        while (d != 0) {
            int last_digit = d % 10;
            if (last_digit != 0) {
                int part = num % divide;
                // cout << part << " ";
                parts.push_back(part);
            }
            divide *= 10;
            d /= 10;
        }

        cout << parts.size() << endl;
        cout << parts[0] << " ";
        for (int i = 1; i < parts.size(); i++) {
            cout << parts[i] - parts[i - 1] << " ";
        }
        cout << endl;
    }
}
