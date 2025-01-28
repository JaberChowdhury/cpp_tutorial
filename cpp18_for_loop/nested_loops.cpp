#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << "from outer loop: " << i << "   💕💕💕💕" << endl;
        for (int k = 0; k < 1000; k++)
        {
            cout << "from inner loop: " << k << endl;
        }
    }
    return 0;
}