
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#include <map>
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
    bool log = false;
    int  n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    int prev;
    cin >> prev;

    int         count = 0;
    vector<int> history;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (prev <= x) {
            log&& cout << "increasing " << endl;
            if (count == 0) {
                count += 2;
            } else {
                count++;
            }
        } else {
            log&& cout << "reset" << endl;
            count = 0;
        }
        history.push_back(count);
        log&& cout << "prev = " << prev << "  current = " << x << " count = " << count << endl << endl;
        prev = x;
    }

    sort(history.begin(), history.end(), greater<>());

    cout << (history[0] == 0 ? 1 : history[0]) << endl;
}
