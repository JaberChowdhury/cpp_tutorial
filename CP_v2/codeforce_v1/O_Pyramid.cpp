// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
// 
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int m;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
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
