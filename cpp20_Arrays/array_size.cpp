#include <iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int getArraysize = sizeof(myNumbers);
    cout << getArraysize;
    return 0;
}
