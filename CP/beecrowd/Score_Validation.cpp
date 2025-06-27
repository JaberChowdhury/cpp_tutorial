// https://judge.beecrowd.com/en/problems/view/1117

#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int            flag = 0;
    float          sum  = 0;
    vector<string> result;

    while (true) {
        float x;
        cin >> x;
        if (x < 0 || x > 10) {
            result.push_back("nota invalida");
            x = 0;
        } else {
            sum += x;
            flag++;
            if (flag == 2) {
                float         avarage = (float) sum / 2;
                ostringstream oss;
                oss << fixed << setprecision(2) << avarage;
                string output = "media = " + oss.str();
                result.push_back(output);
                break;
            }
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}

// solved
