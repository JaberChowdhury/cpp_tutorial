#include <iostream>
using namespace std;

int main() {
    // smallest element
    // given array
    int nums[] = {21, 43, 5634, 23, 766, 892, 9, 64, -1};

    int smallest = nums[0], limit = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < limit; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    cout << "Smallest number is = " << smallest << endl;

    return 0;
}
