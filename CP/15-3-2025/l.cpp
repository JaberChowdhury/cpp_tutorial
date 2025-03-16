#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n >= pow(10, 8))
        cout << (n / (long long)pow(10, 6)) * (long long)pow(10, 6) << endl;
    else if (n >= pow(10, 7))
        cout << (n / (long long)pow(10, 5)) * (long long)pow(10, 5) << endl;
    else if (n >= pow(10, 6))
        cout << (n / (long long)pow(10, 4)) * (long long)pow(10, 4) << endl;
    else if (n >= pow(10, 5))
        cout << (n / (long long)pow(10, 3)) * (long long)pow(10, 3) << endl;
    else if (n >= pow(10, 4))
        cout << (n / (long long)pow(10, 2)) * (long long)pow(10, 2) << endl;
    else if (n >= pow(10, 3))
        cout << (n / (long long)pow(10, 1)) * (long long)pow(10, 1) << endl;
    else
        cout << n << endl;

    return 0;
}
