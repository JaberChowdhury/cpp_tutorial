// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
//
//
//
//
//
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solution func
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

map<char, int> frequency_count;
void           solution() {
    string s;
    cin >> s;

    for (auto c : s) {
        frequency_count[c]++;
    }
    vector<pair<char, int>> v(frequency_count.begin(), frequency_count.end());

    sort(v.begin(), v.end(), [](auto& a, auto& b) { return a.first < b.first; });

    for (auto d : v) {
        cout << d.first << " : " << d.second << endl;
    }
}
