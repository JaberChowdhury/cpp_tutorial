// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

#include <iomanip>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int64_t a, b, c;

    cin >> a >> b >> c;

    if (a % c == 0 && b % c == 0) {
        cout << "Both" << endl;
    } else if (a % c == 0 && b % c != 0) {
        cout << "Memo" << endl;
    } else if (a % c != 0 && b % c == 0) {
        cout << "Momo" << endl;
    } else if (a % c != 0 && b % c != 0) {
        cout << "No One" << endl;
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

// done
