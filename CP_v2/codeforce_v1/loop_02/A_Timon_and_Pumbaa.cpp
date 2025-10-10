// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
//
//
#include <cstdint>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int64_t a = -123, b = -321;
    cin >> a >> b;
    if (a >= b) {
        cout << a - b << endl;
    } else {
        cout << 0 << endl;
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
