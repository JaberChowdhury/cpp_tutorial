// https://judge.beecrowd.com/en/problems/view/1070

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = x; i < (x + 12); i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
    return 0;
}

// solved
