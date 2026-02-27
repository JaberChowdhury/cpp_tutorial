// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
//
//
//
//
#include <iostream>
#include <string>
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
    int a, b;
    cin >> a >> b;
    string eq;
    cin >> eq;

    if (eq[a] != '-') {
        cout << "No" << endl;
    } else {
        bool isSOlved = true;
        for (int i = 0; i < eq.size(); i++) {
            // cout << eq[i] << endl;
            if (i == a) {
                continue;
            } else if (!((int) eq[i] >= 48 && (int) eq[i] <= 57)) {
                // cout << "break because " << eq[i] << endl;
                isSOlved = false;
                break;
            }
        }
        if (isSOlved) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    // 48 - 57
}
