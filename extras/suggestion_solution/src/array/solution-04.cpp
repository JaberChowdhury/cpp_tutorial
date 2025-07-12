#include <iostream>
using namespace std;

int main() {
    // given array
    int nums[] = {21, 4, 4, 76, 8, 65, 431, 21, 23, 54, 65, 8769, 879, 234, 32, 654, 7568956, 8, 67, 9, 6, 4, 748};
    int limit  = sizeof(nums) / sizeof(nums[0]);

    // bubble sorting
    // sorting nums from big to small
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit - i - 1; j++) {
            if (nums[j] < nums[j + 1]) {
                int temp    = nums[j];
                nums[j]     = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    cout << "Second largest = " << nums[1] << endl;
    return 0;
}
