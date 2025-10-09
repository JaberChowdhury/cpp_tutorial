// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <iostream>
using namespace std;
#define endl '\n'

void test() {

    int a;
    cin >> a;
    int temp = -1;

    while (a--) {
        int x;
        cin >> x;
        if (x > temp) {
            temp = x;
        }
    }

    cout << temp << endl;
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
