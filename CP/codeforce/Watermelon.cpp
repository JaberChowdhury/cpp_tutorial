// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main()
{
    int x, each;
    cin >> x;
    each = x / 2;
    if (x % 2 == 0)
    {
        if (each % 2 == 0)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// not solved yet