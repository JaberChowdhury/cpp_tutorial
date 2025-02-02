// #include <iostream>
// #include <string>
// using namespace std;

// class MyClass
// {                    // The class
// public:              // Access specifier
//     int myNum;       // Attribute (int variable)
//     string myString; // Attribute (string variable)
// };

// int main()
// {
//     MyClass myObj; // Create an object of MyClass

//     // Access attributes and set values
//     myObj.myNum = 15;
//     myObj.myString = "Some text";

//     // Print values
//     cout << myObj.myNum << "\n";
//     cout << myObj.myString;
//     return 0;
// }

#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int price;
};

int main()
{
    Car tesla;
    tesla.name = "Tesla";
    tesla.price = 500;
    cout << tesla.name << endl;
    cout << tesla.price << endl;
    return 0;
}