#include <algorithm>
#include <iostream>
using namespace std;

int mex(int arr[], int n) {
    if (n == 0)
        return 0;

    sort(arr, arr + n);

    int expected = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            continue;

        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        if (arr[i] == expected) {
            expected++;
        } else if (arr[i] > expected) {
            return expected;
        }
    }
    return expected;
}

int main() {
    int arr[] = {0, 1, 2, 3, -4, 6, 5, 7};
    int n     = sizeof(arr) / sizeof(arr[0]);
    int ans   = mex(arr, n);
    cout << "MEX of arr is " << ans << endl;

    return 0;
}
