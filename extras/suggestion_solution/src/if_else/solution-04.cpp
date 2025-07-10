#include <iostream>
using namespace std;

int main() {
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];

    int big_num = nums[0];
    for (int i = 0; i < 3; i++) {
        if (nums[i] > big_num) {
            big_num = nums[i];
        }
    }

    cout << big_num << endl;
    return 0;
}
