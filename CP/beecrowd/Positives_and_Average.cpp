// https://judge.beecrowd.com/en/problems/view/1064

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int   count = 0;
    float sum   = 0, avarage;

    for (int i = 0; i < 6; i++) {
        float x;
        cin >> x;
        if (x > 0) {
            count++;
            sum += x;
        }
    }
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / count << endl;
    return 0;
}

// solved
