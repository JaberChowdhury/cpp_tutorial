// https://codeforces.com/problemset/problem/1/A

#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    int64_t m, n, a, x, y;
    cin >> m >> n >> a;

    x = m / a;
    y = n / a;

    if (m % a != 0)
        x++;
    if (n % a != 0)
        y++;
    cout << x * y << endl;
    return 0;
}

// solved
