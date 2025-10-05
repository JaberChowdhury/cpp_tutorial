// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

#include <cmath>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {

    int a, b;
    cin >> a >> b;

    if (abs(a - b) <= 1 && (a + b) > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
// freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}

// SOLVED
