// https://codeforces.com/problemset/problem/337/A
//
//
//
//
#include <algorithm>
#include <bits/stdc++.h>
#include <ratio>
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

    int n, m;
    cin >> n >> m;

    vector<int> puzzels(m);
    vector<int> ans;

    for (int i = 0; i < m; i++) {
        cin >> puzzels[i];
    }
    sort(puzzels.begin(), puzzels.end());
    int start = 0, end = n - 1;
    while (end < m) {
        vector<int> temp;
        for (int i = start; i <= end; i++) {
            // cout << puzzels[i] << " ";
            temp.push_back(puzzels[i]);
        }
        sort(temp.begin(), temp.end());
        // cout << "||" << temp.back() << " - " << temp.front() << " = " << (temp.back() - temp.front()) << endl;
        // cout << endl;

        ans.push_back((temp.back() - temp.front()));
        start++;
        end++;
    }

    sort(ans.begin(), ans.end());

    cout << ans.front() << endl;
}
