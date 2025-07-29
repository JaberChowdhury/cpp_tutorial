// https://judge.beecrowd.com/en/problems/view/1866

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}

// solved i think as my submission in queue for too long
