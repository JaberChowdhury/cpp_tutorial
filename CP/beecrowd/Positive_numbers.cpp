// https://judge.beecrowd.com/en/problems/view/1060

#include <iostream>
using namespace std;

int main() {
    int total = 0;
    for (int i = 0; i < 6; i++) {
        float x;
        cin >> x;
        if (x > 0) {
            total++;
        }
    }

    cout << total << " valores positivos" << endl;
    return 0;
}
