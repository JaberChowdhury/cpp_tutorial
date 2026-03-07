// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
//
//
#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void test();

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);

    int t;
    cin >> t;
    while (t--)
#endif
        test();
    return 0;
}
void test() {
    ll x, row, col;

    cin >> x;

    row = x / 4;

    if (row % 2 != 0) {
        // cout << "row == odd -> " << row % 4 << endl;
        col = 3 - (x % 4);
    } else {
        // cout << "row == even" << endl;
        col = x % 4;
    }

    cout << row << " " << col << endl;
};
