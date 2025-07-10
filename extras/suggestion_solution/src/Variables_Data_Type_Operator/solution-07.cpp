#include <iostream>
using namespace std;

int main() {
    // celsius to fahrenheit
    // formula: F = (C * 9/5) + 32

    double celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Celsius: " << celsius << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
