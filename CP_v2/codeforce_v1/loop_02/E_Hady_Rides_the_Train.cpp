// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
//
//
#include <iostream>
using namespace std;
#define endl '\n'

void test();

int main() {
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
    long long id, col, row;
    cin >> id;

    if (id <= 3) {
        row = id;
    } else {
        row = id / 4;
    }

    cout << "row = " << row << endl;
    cout << "col = " << col << endl;
};
