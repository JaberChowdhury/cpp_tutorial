#include <iostream>
#include <vector>
using namespace std;

int main() {
    int         n = 2;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "A" << i + 1 << " : ";
        cin >> x;
        nums.push_back(x);
    }

    // buble sorting
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            if (nums[k] < nums[k + 1]) {
                int a       = nums[k];
                int b       = nums[k + 1];
                nums[k]     = b;
                nums[k + 1] = a;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << nums[i] << endl;
    // }
    cout << "The maximum number is : " << nums[0] << endl;
    return 0;
}
