// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

bool isDouble(long double x) {
    string y          = to_string(x);
    bool   hasNonZero = false;
    int    dotindex   = 0;
    for (int i = 0; i < y.size(); i++) {
        if (y[i] == '.') {
            dotindex = i;
            break;
        }
    }

    for (int i = dotindex + 1; i < y.size(); i++) {
        if (y[i] != '0') {
            hasNonZero = true;
            break;
        }
    }

    if (hasNonZero) {
        return true;
    } else {
        return false;
    }
}

void test() {

    long double n, k, a;
    cin >> n >> k >> a;

    long double s = (n * k) / a;

    // if (n >= 2147483647 || n <= -2147483648 && k >= 2147483647 || k <= -2147483648) {
    //     cout << "long long" << endl;
    // } else if (!(n >= 2147483647 || n <= -2147483648 && k >= 2147483647 || k <= -2147483648)) {
    //     if (isDouble(s)) {
    //         cout << "double" << endl;
    //     } else {
    //         cout << "int" << endl;
    //     }
    // } else {
    //     cout << "int" << endl;
    // }

    if (s >= 2147483647 || s <= -2147483648) {
        cout << "long long" << endl;
    } else if (!(n >= 2147483647 || n <= -2147483648 && k >= 2147483647 || k <= -2147483648)) {
        if (isDouble(s)) {
            cout << "double" << endl;
        } else {
            cout << "int" << endl;
        }
    } else {
        cout << "int" << endl;
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

// hell no
