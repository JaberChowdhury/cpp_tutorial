#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int year;

    Car(string b, int y) : brand(b), year(y) {}

    void displayInfo()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main()
{
    Car cars[3] = {
        Car("Toyota", 2022),
        Car("Ford", 2021),
        Car("Honda", 2023)};

    for (int i = 0; i < 3; i++)
    {
        cout << "Car " << i + 1 << ": ";
        cars[i].displayInfo();
    }

    return 0;
}
