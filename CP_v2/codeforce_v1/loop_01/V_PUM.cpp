// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
//
//
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int t;
    cin >> t;
    int j = 1;
    for (int i = 0; i < t; i++) {
        cout << j << " " << j + 1 << " " << j + 2 << " " << "PUM" << endl;
        j += 4;
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
