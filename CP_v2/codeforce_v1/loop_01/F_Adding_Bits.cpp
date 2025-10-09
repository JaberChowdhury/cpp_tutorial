// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F

#include <bitset>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int a, b, c;
    cin >> a >> b;
    c = a ^ b;
    cout << c << endl;
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
