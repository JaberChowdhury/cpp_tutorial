// https://judge.beecrowd.com/en/problems/view/1158

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, x, y, count = 0, sum = 0;
    cin >> t;
    vector<int> answers;
    for (int i = 0; i < t; i++) {
        // cout << "new test case" << endl;
        cin >> x >> y;
        while (count < y) {
            if (x % 2 != 0) {
                sum += x;
                // cout << "X = " << x << " Sum = " << sum << endl;
                count++;
            }
            x++;
        }
        answers.push_back(sum);
        sum   = 0;
        count = 0;
    }

    // print the values
    for (int i = 0; i < t; i++) {
        cout << answers[i] << endl;
    }
    return 0;
}

// solved
