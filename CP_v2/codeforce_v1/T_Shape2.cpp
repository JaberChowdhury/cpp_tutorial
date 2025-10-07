// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
//
//
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {

        for (int j = t - 1; j >= i; j--) {
            cout << " ";
        }
        for (int k = 1; k < i * 2; k++) {
            cout << "*";
        }
        cout << endl;
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
