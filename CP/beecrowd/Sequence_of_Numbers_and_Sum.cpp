// https://judge.beecrowd.com/en/problems/view/1101
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> ranges;
    while (true) {
        vector<int> range;
        int         x, y;
        cin >> x >> y;
        if (x <= 0 || y <= 0) {
            break;
        }
        if (x > y) {
            int temp = x;
            x        = y;
            y        = temp;
        }
        range.push_back(x);
        range.push_back(y);
        ranges.push_back(range);
    }
    for (int i = 0; i < ranges.size(); i++) {
        int sum = 0;
        for (int j = ranges[i][0]; j <= ranges[i][1]; j++) {
            sum += j;
            cout << j << " ";
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}

// solved
