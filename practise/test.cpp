#include <iostream>
#include <utility>
using namespace std;

int main() {

    int n         = 4;
    int arr[]     = {21, 43, 289, 43};
    int itaration = 0;
    for (int i = 0; i < n - 1; i++) {

        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            itaration++;
            if (arr[i] > arr[j]) {
                min_index = j;
                cout << " i :::  " << i << "  |  j ::  " << j << "    |   " << "#### swapped" << endl;
            }
        }
        cout << endl << endl;

        // int temp       = arr[i];
        // arr[i]         = arr[min_index];
        // arr[min_index] = temp;
        swap(arr[i], arr[min_index]);
    }

    for (auto d : arr) {
        cout << d << " ";
    }
    cout << "itaration :: " << itaration << endl;
    return 0;
}
