#include <iostream>
using namespace std;
int make_sum(int arr[], int flag) {
    if (flag > 0) {
        return arr[flag] + make_sum(arr, flag - 1);
    } else {
        return 0;
    }
}
int main() {
    int flag  = 9;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum   = make_sum(num, flag);
    cout << sum << endl;
    return 0;
}
