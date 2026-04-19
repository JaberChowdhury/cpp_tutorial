// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
//
//
//
#include <iostream>
#include <map>
using namespace std;
#define endl '\n'

void solution();
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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

    map<char, int> freq;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        freq[x]++;
    }

    for (auto d : freq) {
        for (int j = 0; j < d.second; j++) {
            cout << d.first;
        }
    }
    cout << endl;
}
