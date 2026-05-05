// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
//
//
//
//
#include <bits/stdc++.h>
#include <cstddef>
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
    ll t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

vector<string> split(string og, string target) {
    vector<string> result;
    size_t         og_size     = og.size();
    size_t         target_size = target.size();
    string         temp        = "";
    for (int i = 0; i < og_size; i++) {
        bool match = true;
        for (int j = 0; j < target_size; j++) {
            if (i + j >= og_size || og[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match && target_size > 0) {
            result.push_back(temp);
            temp = "";
            i += target_size - 1;
        } else {
            temp += og[i];
        }
    }
    result.push_back(temp);
    return result;
}
void solution() {
    string s;
    cin >> s;
    vector<string> result = split(s, "EGYPT");

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
