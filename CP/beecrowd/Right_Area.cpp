// https://judge.beecrowd.com/en/problems/view/1190

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

    int limits[] = {11, 10, 9, 8, 7, 7, 8, 9, 10, 11};
    int total = 0, flag = 0;
    for (int i = 1; i < 11; i++) {
        for (int j = limits[flag]; j < 12; j++) {
            sum += nums[i][j];
            total++;
        }
        flag++;
    }

    if (o == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / total << endl;
    }
    return 0;
}

// i have to submit it later
