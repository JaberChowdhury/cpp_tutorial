// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
//
//
//
//
//
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

void test() {
    string s, t;
    cin >> s >> t;
    int s1 = s.size(), s2 = t.size();
    int limit = min(s1, s2);

    for (int i = 0; i < limit; i++) {
        cout << s[i] << t[i];
    }

    if (s1 > s2) {
        for (int i = limit; i < s1; i++) {
            cout << s[i];
        }
    } else if (s2 > s1) {
        for (int i = limit; i < s2; i++) {
            cout << t[i];
        }
    }

    cout << endl;
}

void solution() {
    int t;
    cin >> t;

    while (t--) {
        test();
    }
}
