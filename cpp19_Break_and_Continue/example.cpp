#include <iostream>
#include <string>
using namespace std;

int main()
{
    string position_in_race[10] = {"joan", "jose", "maria", "luis", "pedro", "ana", "laura", "julia", "javier", "jose"};
    string name = "laura";
    for (int i = 0; i < 10; i++)
    {
        if (position_in_race[i] == name)
        {
            cout << "The position of " << name << " is " << i + 1 << endl;
            break;
        }
    }
    return 0;
}