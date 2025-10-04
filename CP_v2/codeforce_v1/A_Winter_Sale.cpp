// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <iomanip>
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    float x, y;
    cin >> x >> y;

    // P = A - A.X/100
    //     P = A(1-X/100)
    //         A = P/(A-X/100))

    float a = y / (1 - (x / 100));
    cout << fixed << setprecision(2) << a << endl;
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
