// https://judge.beecrowd.com/en/problems/view/1182

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int   n;
    float sum = 0;
    char  o;
    cin >> n;
    cin >> o;

    vector<vector<float>> nums;
    //  take inputs
    for (int i = 0; i < 12; i++) {
        vector<float> temp;
        for (int j = 0; j < 12; j++) {
            float x;
            cin >> x;
            temp.push_back(x);
        }
        nums.push_back(temp);
    }

    // sum the matrix
    for (int i = 0; i < 12; i++) {
        sum += nums[i][n];
    }
    if (o == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / 12 << endl;
    }
    return 0;
}

// solved
