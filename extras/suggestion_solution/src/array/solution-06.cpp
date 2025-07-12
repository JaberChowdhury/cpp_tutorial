#include <iostream>
using namespace std;

int main() {
    // given array
    int nums[] = {21768342, 3478932, 43272, 65893, 90, 3};
    int limit  = sizeof(nums) / sizeof(nums[0]);

    // bubble sorting
    // sorting nums from small to big
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp    = nums[j];
                nums[j]     = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    cout << "Second smallest = " << nums[1] << endl;
    return 0;
}
