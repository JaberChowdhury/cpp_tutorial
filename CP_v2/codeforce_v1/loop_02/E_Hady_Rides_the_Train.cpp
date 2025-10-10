// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
//
//
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    long long id;
    cin >> id;
    long long row = id + 1 / 4;
    long long col;
    if (row % 2 == 0) {
        col = id % 4;
    } else {
        col = 3 - (id % 4);
    }
    cout << row + 1 << " " << col << endl;
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
