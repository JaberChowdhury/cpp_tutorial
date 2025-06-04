// https://judge.beecrowd.com/en/problems/view/1043

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b)) {
        float Perimetro = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << Perimetro << endl;
    } else {
        float Area = (0.5 * c) * (a + b);
        cout << "Area = " << fixed << setprecision(1) << Area << endl;
    }
    return 0;
}

// solved
