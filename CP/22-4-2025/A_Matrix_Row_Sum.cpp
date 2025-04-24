#include <iostream>
using namespace std;

int main()
{
    int col, row;
    cin >> col >> row;

    int *sums = new int[col];

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int k = 0; k < row; k++)
        {
            int h;
            cin >> h;
            sum += h;
        }
        sums[i] = sum;
    }

    for (int i = 0; i < col; i++)
    {
        cout << sums[i] << endl;
    }

    delete[] sums;
    return 0;
}
