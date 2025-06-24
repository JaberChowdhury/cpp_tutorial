// https://judge.beecrowd.com/en/problems/view/1079

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<float> result;

    for (int i = 0; i < t; i++) {
        vector<float> nums(3);
        for (int j = 0; j < 3; j++) {
            cin >> nums[j];
        }
        float r = (nums[0] * 2 + nums[1] * 3 + nums[2] * 5) / 10;
        result.push_back(r);
    }
    for (int i = 0; i < result.size(); i++) {
        cout << fixed << setprecision(1) << result[i] << endl;
    }

    // cout << "Size of result = " << result.size() << endl;
    return 0;
}

// solved
