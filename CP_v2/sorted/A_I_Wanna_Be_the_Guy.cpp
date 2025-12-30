// https://codeforces.com/problemset/problem/469/A
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
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
    int a;
    cin >> a;

    vector<bool> data(n + 1, false);
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        data[x] = true;
    }

    int b;
    cin >> b;

    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        data[x] = true;
    }

    bool isOK = true;
    for (int i = 1; i <= n; i++) {
        if (!data[i]) {
            isOK = false;
            break;
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << "i = " << i << "  " << (data[i] ? "true" : "false") << endl;
    // }

    if (isOK) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}
