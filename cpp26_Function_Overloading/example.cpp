// Formula(32°F − 32) × 5 / 9 = 0°C

#include <iostream>
using namespace std;

float convert_fahrenheit_to_celsius(float &far)
{
    return (far - 32) * 5 / 9;
}
int convert_fahrenheit_to_celsius(int &far)
{
    return (far - 32) * 5 / 9;
}

int main()
{
    // float temp_in_farenhiet = 32.00;
    float temp_in_farenhiet = 120.65;
    float temp_in_celsius = convert_fahrenheit_to_celsius(temp_in_farenhiet);
    int temp_in_celsius_in_int = convert_fahrenheit_to_celsius(temp_in_farenhiet);
    cout << "The temperature is celsius is : " << temp_in_celsius << endl;
    cout << "The temperature is celsius is in int : " << temp_in_celsius_in_int << endl;
    return 0;
}