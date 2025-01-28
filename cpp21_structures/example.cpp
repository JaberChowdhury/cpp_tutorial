#include <iostream>
using namespace std;

int main()
{
    struct Person
    {
        int id;
        string name;
        double anger;
        string interested_in;
    };

    Person p1;
    p1.id = 11;
    p1.name = "John Doe";
    p1.anger = 9.0;
    p1.interested_in = "Femail";

    cout << p1.anger << endl;

    return 0;
}