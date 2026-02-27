#include <iostream>
#include <utility>
using namespace std;

int createPartition(int arr[], int low, int high) {
    int i     = low - 1;
    int pivot = arr[high];
    for (int j = low; j < high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[j], arr[i]);
        }
    }

    swap(arr[high], arr[i + 1]);

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = createPartition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {21, 32, 43, 54, 65, 76, 87, 897, 98098, 212};

    quickSort(arr, 0, 6);

    for (auto d : arr) {
        cout << d << " ";
    }
    return 0;
}
