// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
//
//
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int t;
    cin >> t;
    int fibos[t];
    fibos[0] = 0;
    fibos[1] = 1;

    for (int i = 2; i < t; i++) {
        fibos[i] = fibos[i - 2] + fibos[i - 1];
    }
    for (int d : fibos) {
        cout << d << " ";
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
