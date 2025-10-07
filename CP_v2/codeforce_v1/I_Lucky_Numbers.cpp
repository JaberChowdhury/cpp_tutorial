// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <iostream>
using namespace std;
#define endl '\n'

void test() {

    int x;
    cin >> x;

    int a = x / 10;
    int b = x % 10;
    // cout << a << endl;
    // cout << b << endl;
    // cout << "---" << endl;
    // if (int(a % b) == 0 || int(b % a) == 0) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }
    //
    if (a != 0 && b % a == 0) {
        cout << "YES" << endl;
    } else if (b != 0 && a % b == 0) {
        cout << "YES" << endl;
    } else if ((a != 0 && b % a != 0) || (b != 0 && a % b != 0)) {
        cout << "NO" << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}

// SOLVED
