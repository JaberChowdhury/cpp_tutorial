// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
//
//
#include <cstdlib>
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

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int a = 0, b = 0;

    for (int i = 0; i < n; i++) {
        a += arr[i][i];
        b += arr[i][n - (i + 1)];
        // cout << arr[i][n - (i + 1)] << " ";
    }

    cout << abs(a - b) << endl;
}
