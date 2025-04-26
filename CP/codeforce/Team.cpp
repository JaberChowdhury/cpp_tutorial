// https: // codeforces.com/problemset/problem/231

#include <iostream>
using namespace std;

int main() {

    int c, a = 0;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int x, y, z, t = 0;
        cin >> x >> y >> z;
        t = x + y + z;
        if (t >= 2) {
            a++;
        }
    }

    cout << a << endl;

    return 0;
}