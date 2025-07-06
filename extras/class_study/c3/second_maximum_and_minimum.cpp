// second maximum and minimum

#include <iostream>
#include <vector>
using namespace std;

// buble sorting
// parameter is passed by reference
void buble_sorting(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> nums = {12, 23, 12, 56, 78, 22, 45, 7, 8, 2, 4, 7, 89};
    buble_sorting(nums);
    int second_max = nums[nums.size() - 2];
    int second_min = nums[1];
    // sorted array
    // for (int num : nums) {
    //     cout << num << " ";
    // }
    // cout << endl;
    cout << "Second maximum: " << second_max << endl;
    cout << "Second minimum: " << second_min << endl;
    return 0;
}
