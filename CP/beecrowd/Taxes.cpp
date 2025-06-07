// https://judge.beecrowd.com/en/problems/view/1051

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float value;
    cin >> value;
    float temp = value;

    if (!(value > 0 && value < 2000.00)) {
        if (value >= 2000.01 && value <= 3000.00) {
            value = (1000 * 0.08);
            cout << "R$ " << fixed << setprecision(2) << value << endl;
        } else if (value >= 3000.01 && value <= 4500.00) {
            value = (1000 * 0.08) + (temp - 3000.00) * 0.18;
            cout << "R$ " << fixed << setprecision(2) << value << endl;
        } else if (value > 4500.00) {
            value = (1000.00 * (8.00 / 100)) + (1500 * (18.00 / 100)) + (temp - 4500.00) * (28.00 / 100);
            cout << "R$ " << fixed << setprecision(2) << value << endl;
        }
    } else {
        cout << "Isento" << endl;
    }
    return 0;
}

// n = 3002.00
//             1000*0.08    (n-3000)*0.18  (n-4500)*0.28
//             n - 2000         n-3000        n-4500
//    00         0.08             0.18        0.28
// [0,2000][2000.01,3000.00][3000.01,4500.00][>4500]

// not solved
