// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
//
//
#include <iostream>
using namespace std;
#define endl '\n'

void printfromright(string h) {
    for (int i = h.size() - 1; i >= 0; i--) {
        cout << h[i] << " ";
    }
    cout << endl;
}
void test() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string f;
        cin >> f;
        printfromright(f);
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
