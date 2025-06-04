// https://judge.beecrowd.com/en/problems/view/1045

#include <iostream>
using namespace std;

void bubbleSort(double nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] < nums[j + 1]) {
                int temp    = nums[j];
                nums[j]     = nums[j + 1];
                nums[j + 1] = temp;
                swapped     = true;
            }
        }
        if (!swapped)
            break;
    }
}
int main() {
    double sides[3];
    for (int i = 0; i < 3; i++) {
        cin >> sides[i];
    }
    bubbleSort(sides, 3);

    double a = sides[0], b = sides[1], c = sides[2];

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {

        if ((a * a) == (b * b) + (c * c)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((a * a) > (b * b) + (c * c)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }

        if ((a * a) < (b * b) + (c * c)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if ((a == b) || (a == c) || (b == c)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}

// solved
