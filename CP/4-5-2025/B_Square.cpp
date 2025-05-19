#include <iostream>
using namespace std;

int calculate_area() {
    int a1, a2, b1, b2, c1, c2, d1, d2, x, y;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    if (a1 == b1) {
        if (a1 > c1) {
            x = a1 - c1;
        } else if (a1 < c1) {
            x = c1 - a1;
        }
    } else {
        if (a1 > b1) {
            x = a1 - b1;
        } else if (a1 < b1) {
            x = b1 - a1;
        }
    }

    if (a2 == b2) {
        if (a2 > c2) {
            y = a2 - c2;
        } else if (a2 < c2) {
            y = c2 - a2;
        }
    } else {
        if (a2 > b2) {
            y = a2 - b2;
        } else if (a2 < b2) {
            y = b2 - a2;
        }
    }

    return x * y;
}

int main() {
    int n;
    cin >> n;
    int* result = new int[n];

    for (int i = 0; i < n; i++) {
        int v     = calculate_area();
        result[i] = v;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }
    delete[] result;
    return 0;
}