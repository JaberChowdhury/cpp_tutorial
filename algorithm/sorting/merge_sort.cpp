#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int leftpart[n1], rightpart[n2];

    for (int i = 0; i < n1; i++) {
        leftpart[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightpart[i] = arr[mid + i + 1];
    }

    // merge
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftpart[i] <= rightpart[j]) {
            arr[k] = leftpart[i];
            k++;
            i++;
        } else {
            arr[k] = rightpart[j];
            k++;
            j++;
        }
    }
    // merge remaining
    while (i < n1) {
        arr[k] = leftpart[i];
        k++;
        i++;
    }
    while (j < n2) {
        arr[k] = rightpart[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int left, int right) {

    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    int arr[] = {12, 90, 23, 89, 34, 78, 45, 67, 56, 13, 42, 35, 64, 57, 86, 79, 10};
    int size  = sizeof(arr) / sizeof(arr[0]) - 1;

    mergeSort(arr, 0, size);

    for (auto d : arr) {
        cout << d << " ";
    }
    return 0;
}
