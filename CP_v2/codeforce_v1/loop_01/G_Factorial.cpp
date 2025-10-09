// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <iostream>
using namespace std;
#define endl '\n'

int64_t factorial(int64_t a) {
    int64_t x = 1;
    for (int i = 1; i <= a; i++) {
        x *= i;
    }
    return x;
}

void test() {
    int64_t t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int64_t x;
        cin >> x;
        int64_t ans = factorial(x);
        cout << ans << endl;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
// freopen("error.txt", "w", stderr);
#endif

    int64_t t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
