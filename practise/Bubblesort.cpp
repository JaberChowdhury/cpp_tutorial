#include <iostream>
#include <utility>
using namespace std;
int  itaration = 0;
void print_array(int arr[], int size) {
    cout << " | ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size) {
    int i = 1, j = 1;
    for (i = 1; i <= size - 1; i++) {
        cout << "Outter loop : step-" << i << " | i = " << i << " | j = " << j << " |" << endl;
        for (j = 1; j <= size - i - 1; j++) {
            itaration++;
            cout << "===>  Inner loop : step-" << j << " | i = " << i << " | j = " << j << " |" << endl;
            cout << "##### Data : ";
            print_array(arr, size);
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

        cout << endl << endl;
    }
}

int main() {
    int size  = 16;
    int arr[] = {21, 23, 43, 1, 2, 32, 12, 345, 56, 76, 23, 46, 176, 23, 576, 12};
    bubbleSort(arr, size);

    // print_array(arr, size);
    cout << "itaration ::  " << itaration << endl;
    return 0;
}
