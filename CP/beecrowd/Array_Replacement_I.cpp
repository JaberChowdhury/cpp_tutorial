// https://judge.beecrowd.com/en/problems/view/1172

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int         limit = 10;
    vector<int> nums;

    for (int i = 0; i < limit; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            nums.push_back(x);
        } else if (x <= 0) {
            nums.push_back(1);
        }
    }

    // print nums
    for (int i = 0; i < nums.size(); i++) {
        cout << "X[" << i << "] = " << nums[i] << endl;
    }
    return 0;
}

// I have to submit it later
