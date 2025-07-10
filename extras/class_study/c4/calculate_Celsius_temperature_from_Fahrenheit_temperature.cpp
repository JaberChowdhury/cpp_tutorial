#include <iostream>
using namespace std;

int main() {
    // farenheit =((9/5)*celsius)+32
    // celsius = ((5/9)*farenheit)-32
    // kelvin = celsius + 273.15

    float farenheit, celsius, kelvin;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> farenheit;
    celsius = ((5.0 / 9.0) * (farenheit - 32));
    kelvin  = celsius + 273.15;
    cout << "Temperature in Celsius: " << celsius << endl;
    cout << "Temperature in Kelvin: " << kelvin << endl;
    return 0;
}
