#include <iostream>
using namespace std;

int main() {
    int a[3][4] = {{2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}};
    int b[4][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1},
    };
    int n = 3, m = 4, q = 3;
    int result[n][q];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
