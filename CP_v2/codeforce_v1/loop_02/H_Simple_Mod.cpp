//
//
//
//
//
//
#include <cmath>
#include <cstdint>
#include <iostream>
using namespace std;
#define endl '\n'
void test(); // test func
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
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

void test() {
    int64_t n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            int64_t part = pow(i, 2) + pow(j, 2);
            if (part % n == 0) {
                cout << i << " " << j << endl;
                cout << "done" << endl;
                break;
            }
        }
    }
}
