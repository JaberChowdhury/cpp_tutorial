// https://judge.beecrowd.com/en/problems/view/1178

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float nums[101];
    float x;
    cin >> x;
    nums[0] = x;

    for (int i = 1; i < 100; i++) {
        nums[i] = nums[i - 1] / 2;
    }

    // print
    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << nums[i] << endl;
    }
    return 0;
}

// need to submit
