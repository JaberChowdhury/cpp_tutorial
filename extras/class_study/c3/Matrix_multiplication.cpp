#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int c[2][2] = {0}; // result matrix initialized to 0

    // Matrix multiplication
    for (int i = 0; i < 2; i++) {         // rows of a
        for (int j = 0; j < 2; j++) {     // columns of b
            for (int k = 0; k < 3; k++) { // columns of a = rows of b
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant matrix (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
