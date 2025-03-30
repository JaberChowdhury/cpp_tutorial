#include <iostream>
using namespace std;

int main()
{
    bool test_passed = false;
    int numbers[8];
    for (int i = 0; i < 8; i++)
    {
        int x;
        cin >> x;
        numbers[i] = x;
    }
    for (int i = 0; i < 8; i++)
    {
        // monotonically non-decreasing
        if (numbers[i] < numbers[i + 1])
        {
            test_passed = true;
        }
        else
        {
            test_passed = false;
            break;
        }
        //  between 100 and 675,inclusive.
        if (numbers[i] < 100 || numbers[i] > 675)
        {
            test_passed = false;
            break;
        }
        else
        {
            test_passed = true;
        }

        /*multiples of 25*/
        if (numbers[i] % 25 != 0)
        {
            test_passed = false;
            break;
        }
        else
        {
            test_passed = true;
        }
    }
    cout << (test_passed ? "Yes" : "No") << endl;
    return 0;
}
