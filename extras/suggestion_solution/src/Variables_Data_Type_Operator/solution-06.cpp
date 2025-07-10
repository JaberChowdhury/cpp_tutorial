#include <iostream>
using namespace std;

int main() {
    // fahrenheit to celsius
    // formula => (f-32)*(5/9)

    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Celsius: " << celsius << endl;

    return 0;
}
