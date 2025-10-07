// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
//
#include <iostream>
using namespace std;
#define endl '\n'

void print_his(string s, int l) {
    string f = "";
    for (int i = 1; i <= l; i++) {
        f += s;
    }
    cout << f << endl;
}
void test() {
    string s;
    int    x;

    cin >> s >> x;

    for (int i = 0; i < x; i++) {
        int a;
        cin >> a;
        print_his(s, a);
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
