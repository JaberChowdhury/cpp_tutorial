// https://judge.beecrowd.com/en/problems/view/1071

#include <iostream>
using namespace std;

int main() {
    int x, y, from, to, sum = 0;
    cin >> x >> y;
    if (x > y) {
        from = y;
        to   = x;
    } else if (x < y) {
        from = x;
        to   = y;
    } else {
        // x == y == 0
        from = x;
        to   = x;
    }
    // cout << "from = " << from << endl;
    // cout << "to = " << to << endl;
    for (int i = from + 1; i < to; i++) {
        if (i % 2 != 0) {
            // cout << "adding " << i << endl;
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}

// solved
