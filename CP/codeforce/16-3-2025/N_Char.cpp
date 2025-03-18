// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    int x_ascii = int(x);
    if (x_ascii >= 65 && x_ascii <= 90)
    {
        char ans = char(x_ascii + 32);
        cout << ans << endl;
    }
    else if (x_ascii >= 97 && x_ascii <= 122)
    {
        char ans = char(x_ascii - 32);
        cout << ans << endl;
    }

    return 0;
}