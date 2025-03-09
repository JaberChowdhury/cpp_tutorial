#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b;
    s = pow(a, b) + pow(b, a);
    cout << s << endl;
    return 0;
}