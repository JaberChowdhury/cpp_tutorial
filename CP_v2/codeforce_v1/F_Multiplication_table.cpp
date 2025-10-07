// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int n;
    cin >> n;
    for (int i = 1; i <= 12; i++) {
        cout << n << " * " << i << " = " << i * n << endl;
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
