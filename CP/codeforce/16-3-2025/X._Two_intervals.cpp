// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
#include <iostream>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long L = max(l1, l2);
    long long R = min(r1, r2);

    if (L <= R) {
        cout << L << " " << R << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

// solved