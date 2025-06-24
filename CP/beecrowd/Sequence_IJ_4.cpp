// https://judge.beecrowd.com/en/problems/view/1098

#include <iostream>
using namespace std;

int main() {
    int   start = 1, end = 3;
    float x = 0, y = 0;
    for (int i = 0; i <= (2 / 0.2); i++) {
        for (int j = start; j <= end; j++) {
            cout << "I=" << x << " J=" << (float) j + y << endl;
        }
        x += 0.2;
        y += 0.2;
    }
    return 0;
}

// solved
