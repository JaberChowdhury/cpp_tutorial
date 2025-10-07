// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <cstdint>
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
    int64_t n;
    cin >> n;
    for (int64_t i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
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
