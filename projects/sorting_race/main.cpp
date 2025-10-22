#define vector std::vector;
#define cout std::cout;
#define cin std::cin;

// bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp   = arr[j];
                arr[j + 1] = arr[j];
                arr[j]     = temp;
            }
        }
    }
}
// insertion sort
void insertionSort(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        int key = arr[i];
        for (int j = i; j > 0; --j) {
            if (key > arr[j]) {
                int temp = arr[j];
                key      = arr[j];
                arr[j]   = temp;
            }
        }
    }
}
// selection sort

int main() {

    int arr[] = {21, 32,  32,  365, 123,  34122, 345, 452, 45, 76,  65, 234,
                 21, 234, 456, 87,  6578, 7809,  34,  53,  54, 236, 648};

    return 0;
}
