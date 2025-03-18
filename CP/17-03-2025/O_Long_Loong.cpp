#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string x = "L";

    for (int i = 1; i <= n; i++)
    {
        x += "o";
    }
    x += "ng";
    cout << x << endl;
    return 0;
}