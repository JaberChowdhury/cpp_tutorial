// average of different ages:

#include <iostream>
using namespace std;

int main()
{
    int ages[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum = 0;
    int array_length = sizeof(ages) / sizeof(ages[0]);
    for (int i = 0; i < array_length; i++)
    {
        sum += ages[i];
    }

    cout << "total person is : " << array_length << endl;

    cout << "total age is : " << sum << endl;

    cout << "Avarage age is : " << sum / array_length << endl;

    return 0;
}