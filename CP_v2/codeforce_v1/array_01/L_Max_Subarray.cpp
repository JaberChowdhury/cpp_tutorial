// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
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

void test() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // int         subarray[(j - i) + 1];
            vector<int> subarray((j - i) + 1);
            int         count = 0;
            for (int k = i; k <= j; k++) {
                subarray[count] = arr[k];
                count++;
                // cout << arr[k] << " ";
            }
            sort(subarray.begin(), subarray.end(), greater<int>());

            cout << subarray[0] << " ";
        }
    }
    cout << endl;
    // for (int i = 0; i < n; ++i) {
    //     for (int j = i; j < n; ++j) {
    //         cout << "j = " << i << endl;
    //         std::cout << "[";
    //         for (int k = i; k <= j; ++k) {
    //             std::cout << arr[k] << (k == j ? "" : ", ");
    //         }
    //         cout << "]" << endl;
    //     }
    // }
}
void solution() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
