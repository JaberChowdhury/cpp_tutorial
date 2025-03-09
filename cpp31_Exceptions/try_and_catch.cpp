#include <iostream>
using namespace std;

int main()
{
    try
    {
        int x = 21;
        if (x > 123)
        {
            cout << "haha" << x << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch (int value)
    {
        cout << "Some thing is wrong " << endl;
        cout << "Value of x is " << value << endl;
    }

    // new block

    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw 505;
        }
    }
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
    return 0;
}
