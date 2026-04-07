// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
//
//
//

#include <algorithm>
#include <iostream>

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
void solution() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string instruction;
        cin >> instruction;

        if (instruction == "pop_back") {
            s.pop_back();
        } else if (instruction == "front") {
            cout << s.front() << endl;
        } else if (instruction == "back") {
            cout << s.back() << endl;
        } else if (instruction == "sort") {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + l - 1, s.begin() + r);
        } else if (instruction == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + l - 1, s.begin() + r);
        } else if (instruction == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        } else if (instruction == "substr") {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;
        } else if (instruction == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}
