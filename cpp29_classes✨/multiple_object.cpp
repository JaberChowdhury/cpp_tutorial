#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    int price;
};

int main()
{
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;
    carObj1.price = 1089687999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;
    carObj2.price = 8977999;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << " " << carObj1.price << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << " " << carObj2.price << "\n";
    return 0;
}
