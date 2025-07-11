#include <iostream>
using namespace std;

int main() {
    // given array
    int nums[]  = {12, 23, 34, 32, 12, 8, 32, 78, 9, 5, 3, 2, 3, 5, 7};
    int largest = 0;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    cout << "largest number is " << largest << endl;
    return 0;
}
