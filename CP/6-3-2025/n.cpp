#include <iostream>

using namespace std;

int main()
{
    int a, b, area, perimeter;
    cin >> a >> b;

    area = a * b;
    perimeter = 2 * (a + b);

    cout << area << " " << perimeter << endl;

    return 0;
}