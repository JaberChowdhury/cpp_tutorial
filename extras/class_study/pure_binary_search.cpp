#include <iostream>
#include <vector>
using namespace std;

void bubleSorting(vector<int>& data) {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.size() - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp    = data[j];
                data[j]     = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int binarySearch(const vector<int>& arr, int target) {
    int low  = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

int main() {
    vector<int> nums = {21, 34, 21, 7, 321, 467, 78, 120, 231, 22, 43, 5, 78, 98, 21, 457, 6, 213, 5};
    bubleSorting(nums);

    int need_to_search = 22;

    cout << "Sorted Array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i < nums.size() - 1 ? ", " : "");
    }
    cout << endl;

    int position = binarySearch(nums, need_to_search);
    if (position != -1)
        cout << "The number " << need_to_search << " is at index: " << position << endl;
    else
        cout << "The number doesn't exist in the array." << endl;

    return 0;
}
