#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int search) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
        if (arr[i] == search) {
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[]  = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int search = 90;
    int size   = sizeof(arr) / sizeof(arr[0]);

    int result = linear_search(arr, size, search);

    if (result == -1) {
        cout << "not found " << endl;
    } else {
        cout << " found " << endl;
    }
    return 0;
}
