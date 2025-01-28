#include <iostream>
using namespace std;

int main()
{
    int myNumbers[] = {10, 20, 30, 40, 50, 7, 6};
    myNumbers[2] = 100;
    myNumbers[5] = 1098798;

    for (int i = 0; i < 10; i++)
    {
        cout << myNumbers[i] << "\n";
    }
    return 0;
}
