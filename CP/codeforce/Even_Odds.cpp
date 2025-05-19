// https://codeforces.com/problemset/problem/318/A

#include <iostream>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    long long int odd_count = (n + 1) / 2;

    if (k <= odd_count) {
        cout << (2 * k - 1) << endl;
    } else {
        cout << (2 * (k - odd_count)) << endl;
    }

    return 0;
}
