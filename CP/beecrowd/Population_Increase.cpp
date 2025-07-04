// https://judge.beecrowd.com/en/problems/view/1160

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> answers;

    for (int i = 0; i < t; i++) {
        int   pa, pb;
        float ga, gb;
        cin >> pa >> pb >> ga >> gb;

        int years = 0;
        while (pa <= pb) {
            pa += pa * ga / 100;
            pb += pb * gb / 100;
            years++;
            if (years > 100) {
                answers.push_back("Mais de 1 seculo.");
                break;
            }
        }
        if (years <= 100) {
            answers.push_back(to_string(years) + " anos.");
        }
    }

    for (const auto& answer : answers) {
        cout << answer << endl;
    }

    return 0;
}

// solved
