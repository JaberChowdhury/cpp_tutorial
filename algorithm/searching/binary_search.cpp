#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int search) {

    if (low > high) {
        return -1;
    }

    int mid = low + ((high - low)) / 2;
    cout << " mid = " << arr[mid];
    if (arr[mid] == search) {
        return 1;
    }

    if (search > arr[mid]) {
        cout << " greater " << endl;
        return binary_search(arr, mid + 1, high, search);
    } else {
        cout << " smaller " << endl;
        return binary_search(arr, low, mid - 1, search);
    }
}

int main() {

    int arr[]  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int search = 2;
    cout << "search = " << search << endl;

    int low    = 0;
    int high   = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, low, high, search);
    cout << endl;
    if (result == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "found" << endl;
    }
    return 0;
}
