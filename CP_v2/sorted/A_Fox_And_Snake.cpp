
#include <bits/stdc++.h>
#include <iostream>
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

void reuse(int y) {
    for (int j = 2; j <= y; j++) {
        cout << ".";
    }
}
void solution() {
    int x, y;
    cin >> x >> y;

    bool isLeft = false;
    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0) {
            if (isLeft) {
                cout << "#";
                reuse(y);
                isLeft = (!isLeft);
                cout << endl;
            } else {
                reuse(y);
                cout << "#";
                isLeft = (!isLeft);
                cout << endl;
            }

        } else {
            for (int j = 1; j <= y; j++) {
                cout << "#";
            }
            cout << endl;
        }
    }
    cout << endl;
}
