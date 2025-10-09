// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int x;
    while (cin >> x) {
        if (x == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
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

// SOLVED
