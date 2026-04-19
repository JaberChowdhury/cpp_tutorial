// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
//
//
//

#include <algorithm>
#include <iostream>
#include <set>

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

bool compare(string a, string b) {
    return a.size() > b.size();
}

void solution() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    string temp_str = "";
    temp_str += str[0];
    for (int i = 1; i < str.size(); i++) {
        if (str[i] != str[i - 1]) {
            temp_str += str[i];
        }
    }

    n = temp_str.size();

    cout << n << endl;
}

// need to submit
