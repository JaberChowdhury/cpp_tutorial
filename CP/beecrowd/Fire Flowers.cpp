// https://judge.beecrowd.com/en/problems/view/1039

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int r1, x1, y1, r2, x2, y2;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        double d = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

        if (d + r2 <= r1)
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }
    return 0;
}

// solved
