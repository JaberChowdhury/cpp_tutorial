// https://judge.beecrowd.com/en/problems/view/1188

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    char  o;
    float sum = 0;
    cin >> o;

    vector<vector<float>> nums;
    for (int i = 0; i < 12; i++) {
        vector<float> temp;
        for (int j = 0; j < 12; j++) {
            float x;
            cin >> x;
            temp.push_back(x);
        }
        nums.push_back(temp);
    }

    int start = 5, end = 7, total = 0;
    for (int i = 7; i < 12; i++) {
        for (int j = start; j < end; j++) {
            sum += nums[i][j];
            total++;
        }
        start--;
        end++;
    }

    if (o == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / total << endl;
    }
    return 0;
}

// solved
