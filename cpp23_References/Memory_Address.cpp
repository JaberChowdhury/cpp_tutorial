#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    cout << &food << endl;
    cout << &cars;
    return 0;
}
