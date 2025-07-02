// https://judge.beecrowd.com/en/problems/view/1155

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float s;
    for (int i = 1; i <= 100; i++) {
        s += (float) 1 / i;
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}

// solved
