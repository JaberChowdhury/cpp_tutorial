#include <iostream>
#include <iomanip>

int main()
{
    int a, b, d, r;
    double f;

    std::cin >> a >> b;

    d = a / b;
    r = a % b;
    f = (double)a / b;
    std::cout << d << " " << r << " " << std::fixed << std::setprecision(6) << f << std::endl;
    return 0;
}

