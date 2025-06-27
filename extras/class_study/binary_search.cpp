// How binaey search work
// A sorted array from small to big
// Divide the array by 2
// check if the number is located in first half of the array or in the secod half of the array

#include <iostream>
#include <vector>
using namespace std;

void bubleSorting(vector<int>& data) {
    // this function will change the original array
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

int main() {
    vector<int> nums = {21, 34, 21, 7, 321, 467, 78, 120, 231, 22, 43, 5, 78, 98, 21, 457, 6, 213, 5};
    bubleSorting(nums);
    int middlepoint    = nums.size() / 2;
    int need_to_search = 22;

    // print the real array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i < nums.size() - 1 ? ", " : "");
    }
    cout << endl;
    cout << "need_to_search : " << need_to_search << endl;
    if (nums[middlepoint] == need_to_search) {
        cout << "The position of the number is : " << middlepoint << endl;
    } else {
        if (need_to_search > nums[middlepoint]) {
            for (int i = middlepoint + 1; i < nums.size(); i++) {
                if (nums[i] == need_to_search) {
                    cout << "The position of the number is : " << i << endl;
                }
            }
        } else if (need_to_search < nums[middlepoint]) {
            for (int i = 0; i < middlepoint; i++) {
                if (nums[i] == need_to_search) {
                    cout << "The position of the number is : " << i << endl;
                }
            }
        } else {
            cout << "This number doesn't exist" << endl;
        }
    }
    return 0;
}

// searching
// linear
// binary
// ternary
