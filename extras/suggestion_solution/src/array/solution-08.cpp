// Binary search algorithm
// 1. Get the array of numbers and the number to search.
// 2. Sort the array in ascending order (if it's not already sorted).
// 3. Find the middle index of the current search range.
// 4. Check if the target number is at the middle index.
// 5. If not, check whether the number is greater or smaller than the middle element.
// 6. Update the search range (either left or right half of the array) and repeat.
// 7. Repeat steps 3–6 until the number is found or range becomes invalid.
#include <algorithm> // for the sort
#include <iostream>
using namespace std;

int binary_search(int nums[], int limit, int search) {
    int low = 0, high = limit - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == search) {
            return mid;
        } else if (nums[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int nums[] = {23312743, 538732, 438972, 27294, 28754, 23, 543, 7, 5876, 24, 678, 69, 679};
    int limit  = sizeof(nums) / sizeof(nums[0]);

    int search = 23;
    sort(nums, nums + limit); // from small to large sorting

    int position = binary_search(nums, limit, search);

    if (position != -1) {
        cout << "The number is found" << endl;
    } else {
        cout << "The number is not found " << endl;
    }

    return 0;
}
