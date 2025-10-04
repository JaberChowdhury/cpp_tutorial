// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void test() {
    long long a = 5, b = 2, c = 4, d = 2;
    cin >> a >> b >> c >> d;

    long double x = b * log(a);
    long double y = d * log(c);
    if (x > y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
// freopen("error.txt", "w", stderr);
#endif

    // int t;
    // cin >> t;
    // while (t--)
        test();
    return 0;
}
