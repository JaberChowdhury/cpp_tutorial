// https://judge.beecrowd.com/en/problems/view/1080

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums, mem_nums;
    int         limit = 100;
    for (int i = 0; i < limit; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    mem_nums = nums;
    // buble sorting
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit - i - 1; j++) {
            if (nums[j] < nums[j + 1]) {
                int temp    = nums[j];
                nums[j]     = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // find position
    for (int i = 0; i < limit; i++) {
        if (mem_nums[i] == nums[0]) {
            cout << nums[0] << endl;
            cout << i + 1 << endl;
        }
    }
    return 0;
}

// solved
