// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <iomanip>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {

    char x;
    cin >> x;
    int  y = x;
    char z;
    if (y == 122) {
        z = 97;
    } else {
        z = y + 1;
    }

    cout << z << endl;
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

// solved
