// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <iostream>
using namespace std;
#define endl '\n'

bool isPrime(int a) {
    if (a == 2) {
        return true;
    }
    if (a % 2 == 0) {
        return false;
    }

    for (int i = 3; i < a; i++) {
        if (a != i && a % i == 0) {
            return false;
        }
    }
    return true;
}

void test() {
    int x;
    cin >> x;
    if (isPrime(x)) {
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
