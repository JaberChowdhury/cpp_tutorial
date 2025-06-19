// https://judge.beecrowd.com/en/problems/view/1072

#include <iostream>
using namespace std;

int main() {
    int x, t, in = 0, out = 0;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        if (x >= 10 && x <= 20) {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}

// solved
