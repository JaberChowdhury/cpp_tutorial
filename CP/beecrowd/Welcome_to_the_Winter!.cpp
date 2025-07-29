// https://judge.beecrowd.com/en/problems/view/1847
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if ((y < x && z >= y) || (y > x && z > y && (z - y) >= (y - x)) || (y < x && z < y && (y - z) < (x - y))
        || (y == x && z > y)) {
        cout << ":)" << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}

// solved
