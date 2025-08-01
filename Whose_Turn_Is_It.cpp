// https://judge.beecrowd.com/en/problems/view/1914

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string w, x, y, z;
        int    a, b, sum = 0;
        cin >> w >> x >> y >> z;
        cin >> a >> b;
        sum = a + b;

        if (sum % 2 == 0 && x == "PAR") {
            cout << w << endl;
        } else if (sum % 2 != 0 && x == "IMPAR") {
            cout << w << endl;
        } else if (sum % 2 == 0 && z == "PAR") {
            cout << y << endl;
        } else if (sum % 2 != 0 && z == "IMPAR") {
            cout << y << endl;
        }
    }
    return 0;
}

// solved
