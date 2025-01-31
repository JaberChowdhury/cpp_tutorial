#include <iostream>
using namespace std;

int sum(int k)
{
    if (k > 0)
    {
        // cout << "k is greater than 0. now k is " << k << endl;
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = sum(10);
    cout << result;
    return 0;
}
