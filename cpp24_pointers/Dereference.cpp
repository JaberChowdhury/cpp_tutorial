#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string *ptr = &food;

    cout << ptr << "\n";

    cout << *ptr << "\n";

    int numbers[2] = {1000, 200};
    int *p = numbers;

    cout << numbers << endl;
    cout << *p << endl;
    return 0;
}
