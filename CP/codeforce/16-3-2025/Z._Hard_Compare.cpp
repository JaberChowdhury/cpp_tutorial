// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long a, b, c, d, res1, res2;
    cin >> a >> b >> c >> d;

    res1 = pow(a % 100, b % 10);
    res2 = pow(c % 100, d % 10);

    if (res1 > res2) {
        cout << "YES" << endl;
    } else if (res1 < res2) {
        cout << "NO" << endl;
    }

    return 0;
}