// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <iostream>
#include <set>
using namespace std;
#define endl '\n'

void test() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        int t = a;
        a     = b;
        b     = t;
    }

    set<int, greater<int>> divisor;

    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            divisor.insert(i);
        }
    }

    for (int d : divisor) {
        cout << d << endl;
        break;
    }

    // cout << *divisor.end() << endl;
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
