// https://judge.beecrowd.com/en/problems/view/1154

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int age = 1, sum = 0, count = 0;

    while (age > 0) {
        cin >> age;
        if (age > 0) {
            sum += age;
            count++;
        }
    }

    cout << fixed << setprecision(2) << (float) sum / count << endl;
    return 0;
}

// solved
