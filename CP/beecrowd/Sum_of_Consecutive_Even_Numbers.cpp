// https://judge.beecrowd.com/en/problems/view/1159

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int         x, count = 0, sum = 0;
    vector<int> answers;
    while (true) {
        // cout << "new test case" << endl;
        cin >> x;
        if (x == 0) {
            break;
        }
        while (count < 5) {
            if (x % 2 == 0) {
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
    for (int i = 0; i < answers.size(); i++) {
        cout << answers[i] << endl;
    }
    return 0;
}

// solved
