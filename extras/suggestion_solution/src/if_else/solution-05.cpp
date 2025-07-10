#include <iostream>
using namespace std;

int main() {
    // smallest number
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];

    int small_num = nums[0];
    for (int i = 0; i < 3; i++) {
        if (nums[i] < small_num) {
            small_num = nums[i];
        }
    }

    cout << small_num << endl;
    return 0;
}
