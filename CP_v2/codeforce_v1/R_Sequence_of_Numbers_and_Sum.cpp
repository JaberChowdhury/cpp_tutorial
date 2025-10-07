// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
//
#include <iostream>
#include <utility>
using namespace std;
#define endl '\n'

void test() {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a <= 0 || b <= 0) {
            break;
        }

        if (a > b) {
            swap(a, b);
        }

        int sum = 0;
        for (int i = a; i <= b; i++) {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
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
