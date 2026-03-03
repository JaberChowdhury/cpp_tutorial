// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
//
//
//
//
//
//
#include <iomanip>
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

    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pairs[q][2];
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> pairs[i][j];
        }
    }

    for (auto d : pairs) {
        int sum = 0;
        for (int i = d[0] - 1; i < d[1]; i++) {
            sum += arr[i];
        }
        cout << sum << endl;
    }
}
