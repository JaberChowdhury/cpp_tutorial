// https://codeforces.com/problemset/problem/263/A

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    int a = 5, x = 2, y = 5, move = 0;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            int z;
            cin >> z;
            if (z == 1) {
                x = i;
                y = j;
            }
        }
    }

    move += abs(3 - y);
    move += abs(3 - x);
    cout << move << endl;
    return 0;
}

// solved
