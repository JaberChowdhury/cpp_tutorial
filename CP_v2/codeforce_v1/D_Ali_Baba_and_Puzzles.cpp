// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <cstdint>
#include <iomanip>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;

    // a+b-c
    // a-b+c
    // a+b*c
    // a*b+c
    // a-b*c
    // a*b-c
    if (a + b - c == d || a - b + c == d || a + b * c == d || a * b + c == d || a - b * c == d || a * b - c == d) {
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
