// https://codeforces.com/contest/2171/problem/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solution();
int  main() {
    solution();
    return 0;
}
void ans() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    } else {
        if (n == 2) {
            cout << 1 << endl;
            return;
        } else if (n == 4) {
            cout << 2 << endl;
            return;
        } else {
            cout << (n / 4) + 1 << endl;
        }
    }
}
void solution() {
    int t;
    cin >> t;
    while (t--)
        ans();
}
