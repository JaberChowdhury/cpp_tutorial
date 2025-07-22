// https://judge.beecrowd.com/en/problems/view/1182

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int   n   = 11;
    float sum = 0;
    char  o   = 'S';
    cin >> n;
    cin >> o;

    vector<float> nums;
    // for (int i = 0; i < 144; i++) {
    //     nums.push_back(1.00);
    // }
    for (int i = 0; i < 144; i++) {
        float x;
        cin >> x;
        nums.push_back(x);
    }

    for (int i = n; i < 144; i += 12) {
        sum += nums[i];
        cout << nums[i] << endl;
    }

    if (o == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / 12 << endl;
    }
    return 0;
}

// need to submit it later
