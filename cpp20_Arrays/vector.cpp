#include <iostream>
#include <vector> // Including the vector library
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford"};

    cars.push_back("Tesla");
    cout << cars.size() << endl;
    for (string car : cars)
    {
        cout << car << "\n";
    }
    return 0;
}