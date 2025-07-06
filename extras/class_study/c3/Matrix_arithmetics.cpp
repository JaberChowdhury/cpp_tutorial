#include <iostream>
using namespace std;

int main() {
    int limit = 3;
    cout << "Enter the quantity of arrays: ";
    cin >> limit;
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    int matrixs[limit][row][col];
    for (int i = 0; i < limit; i++) {
        cout << "Enter for matrix " << i + 1 << " and enter total " << row * col << " space saparated integer " << ":"
             << endl;
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < col; k++) {
                cin >> matrixs[i][j][k];
            }
        }
    }
    int sum[row][col] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int sub[row][col] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < col; k++) {
                sum[j][k] += matrixs[i][j][k];
                sub[j][k] -= matrixs[i][j][k];
            }
        }
    }

    cout << "Sum of matrices:" << endl;
    for (int j = 0; j < row; j++) {
        for (int k = 0; k < col; k++) {
            cout << sum[j][k] << " ";
        }
        cout << endl;
    }

    cout << "Difference of matrices:" << endl;
    for (int j = 0; j < row; j++) {
        for (int k = 0; k < col; k++) {
            cout << sub[j][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
