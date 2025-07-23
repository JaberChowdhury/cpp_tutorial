// https://judge.beecrowd.com/en/problems/view/1187

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    char operation;
    cin >> operation;

    double matrix[12][12];
    double sum   = 0;
    int    count = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12 - i - 1; j++) {
            sum += matrix[i][j];
            count++;
        }
    }

    if (operation == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if (operation == 'M') {
        double average = sum / count;
        cout << fixed << setprecision(1) << average << endl;
    }

    return 0;
}

// solved
