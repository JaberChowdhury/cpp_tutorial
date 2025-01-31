#include <iostream>
using namespace std;

void myFunction()
{
    // Local variable that belongs to myFunction
    int x = 5;

    // Print the variable x
    cout << "This x is from myFunctions variable : " << x << endl;
}

int main()
{
    int x = 10;
    cout << "This x is from mains variable : " << x << endl;
    myFunction();
    return 0;
}
