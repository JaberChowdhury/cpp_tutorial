// https://judge.beecrowd.com/en/problems/view/1165

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, x;
    cin >> t;
    vector<string> answers;
    for (int i = 0; i < x; i++) {
        cin >> x;
        for (int i = 2; i <= x; i++) {
            if (x % i == 0) {
                answers.push_back(to_string(x) + " nao eh primo");
                break;
            }
            if (i == x) {
                answers.push_back(to_string(x) + " eh primo");
            }
        }
    }

    // print answers
    for (const auto& answer : answers) {
        cout << answer << endl;
    }

    return 0;
}

// i have to submit it later
