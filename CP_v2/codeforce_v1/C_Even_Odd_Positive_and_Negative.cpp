// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <iostream>
using namespace std;

#define endl '\n'

void test() {
    int x, e = 0, o = 0, p = 0, n = 0;
    cin >> x;

    for (int i = 0; i < x; i++) {
        int b;
        cin >> b;

        if (b % 2 == 0) {
            e++;
        }
        if (b % 2 != 0) {
            o++;
        }

        if (b > 0) {
            p++;
        }
        if (b < 0) {
            n++;
        }
    }

    cout << "Even: " << e << "\nOdd: " << o << "\nPositive: " << p << "\nNegative: " << n << endl;
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
