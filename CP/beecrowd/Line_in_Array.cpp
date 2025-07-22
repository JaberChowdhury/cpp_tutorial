// https://judge.beecrowd.com/en/problems/view/1181

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int   l;
    float sum = 0;
    char  o;
    cin >> l;
    cin >> o;
    for (int i = 0; i < 144; i++) {
        float x;
        cin >> x;
        if (i >= l * 12 && i < (i * 12) + 12) {
            sum += x;
        }
    }
    if (o == 'S') {
        cout << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / 12 << endl;
    }
    return 0;
}

// need to submit it later
