#include <iostream>
using namespace std;

void myFunction(int myNumbers[7])
{
    for (int i = 0; i < 7; i++)
    {   
        cout << myNumbers[i] << "\n";
    }
}

int main()
{
    int myNumbers[7] = {10, 20, 30, 40, 50, 67, 87};
    myFunction(myNumbers);
    return 0;
}
