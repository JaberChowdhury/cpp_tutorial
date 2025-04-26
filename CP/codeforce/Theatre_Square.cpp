// https://codeforces.com/problemset/problem/1/A

#include <iostream>
using namespace std;

int main() {
    int m, n, a, base_size, flag_size, total = 0;
    cin >> m >> n >> a;

    base_size = m * n;
    flag_size = a * a;

    if (base_size % flag_size != 0) {
        total = (base_size / flag_size) + 1;
    } else {
        total = base_size / flag_size;
    }
    cout << total << endl;

    return 0;
}

// not solved yet