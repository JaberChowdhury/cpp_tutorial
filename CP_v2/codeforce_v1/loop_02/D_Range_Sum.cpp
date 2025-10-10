// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
//
//
#include <iostream>
using namespace std;
#define endl '\n'
void test() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        long long sum = (b - a + 1) * (a + b) / 2;
        cout << sum << '\n';
    }
};

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
