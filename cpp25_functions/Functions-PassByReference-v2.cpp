#include <iostream>
using namespace std;

void modifyValue(int num)
{
    num = 10; // This will only change the local copy so this is where we need to use ref
}

int main()
{
    int x = 5;
    cout << "Before function call: " << x << endl;
    modifyValue(x);                               // Passing by value
    cout << "After function call: " << x << endl; // x remains unchanged
    return 0;
}
