// https://judge.beecrowd.com/en/problems/view/1189

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    char o;
    cin >> o;

    vector<vector<float>> nums; // 12x12 matrix
    for (int i = 0; i < 12; i++) {
        vector<float> row;
        for (int j = 0; j < 12; j++) {
            float x;
            cin >> x;
            row.push_back(x);
        }
        nums.push_back(row);
    }

    float sum   = 0;
    int   count = 0;

    // Traverse only left area
    for (int i = 1; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            if (j < i && j < 11 - i) {
                sum += nums[i][j];
                count++;
            }
        }
    }

    if (o == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else {
        cout << fixed << setprecision(1) << sum / count << endl;
    }

    return 0;
}

// solved
