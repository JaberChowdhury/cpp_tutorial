#include <iostream>

using namespace std;

int main()
{
    int w, h, x = 60, y = 130;
    cin >> w >> h;
    if (x <= w && y >= h)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}