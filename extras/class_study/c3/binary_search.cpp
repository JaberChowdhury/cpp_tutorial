#include <iostream>
#include <vector>
using namespace std;

vector<int> bubble_sort(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

int binarySearch(const vector<int>& arr, int low, int high, int num) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (num == arr[mid]) {
            return mid;
        } else if (num > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    vector<int> nums;

    for (int i = 0; i < limit; i++) {
        int num;
        cout << "Enter number " << i << ": ";
        cin >> num;
        nums.push_back(num);
    }
    int target = 90;
    cout << "Enter the target element: ";
    cin >> target;
    vector<int> sorted_array = bubble_sort(nums);
    // print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < sorted_array.size(); i++) {
        cout << sorted_array[i] << " ";
    }
    cout << endl;
    int result = binarySearch(sorted_array, 0, limit - 1, target);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
