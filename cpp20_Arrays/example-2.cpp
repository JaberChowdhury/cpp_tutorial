#include <iostream>
using namespace std;

int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70, 13};
    int i;
    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = ages[0];
    for (int age : ages)
    {
        cout << "The age is: " << age << "\n";
        if (lowestAge > age)
        {
            lowestAge = age;
            cout << "The lowest age is: " << lowestAge << " 🕊️🕊️🕊️" << "\n";
        }
        else
        {
            cout << "The age is not lowest: " << lowestAge << "\n";
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";
    return 0;
}
