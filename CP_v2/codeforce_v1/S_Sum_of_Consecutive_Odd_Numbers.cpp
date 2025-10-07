// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
//
#include <iostream>
#include <utility>
using namespace std;
#define endl '\n'

void test() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int sum = 0;
        int a, b;
        cin >> a >> b;
        if (a > b) {
            swap(a, b);
        }
        a++;
        b--;
        for (int j = a; j <= b; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }
        cout << sum << endl;
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
