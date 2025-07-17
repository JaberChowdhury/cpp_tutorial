// https://judge.beecrowd.com/en/problems/view/1174
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float nums[100];
    for (int i = 0; i < 100; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < 100; i++) {
        if (nums[i] <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << nums[i] << endl;
        }
    }
    return 0;
}

// solved
