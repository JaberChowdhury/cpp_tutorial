// https://judge.beecrowd.com/en/problems/view/1181

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int  l;
    char o;
    cin >> l >> o;

    float sum = 0;
    for (int i = 0; i < 144; ++i) {
        float x;
        cin >> x;
        // Check if current element is in the l-th row
        if (i / 12 == l) {
            sum += x;
        }
    }

    if (o == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / 12 << endl;
    }

    return 0;
}

// solved
