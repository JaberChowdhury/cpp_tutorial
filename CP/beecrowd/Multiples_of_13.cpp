// https://judge.beecrowd.com/en/problems/view/1132
#include <iostream>
using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x >> y;
    if (x > y) {
        int temp = x;
        x        = y;
        y        = temp;
    }
    for (int i = x; i <= y; i++) {
        if (!(i % 13 == 0))
            sum += i;
    }
    cout << sum << endl;
    return 0;
}

// solved
