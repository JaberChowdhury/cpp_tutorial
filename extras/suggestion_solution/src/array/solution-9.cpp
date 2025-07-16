#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter row and column size :: ";
    cin >> row >> column;

    int a[100][100], b[100][100];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> b[i][j];
        }
    }

    // Optional: Display the matrix
    cout << "Matrix a is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
