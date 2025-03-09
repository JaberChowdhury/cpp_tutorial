#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double r;
    std::cin >> r;

    if (r > 0 && r < 10000)
    {
        double area = M_PI * r * r;
        double circumference = 2 * M_PI * r;
        std::cout << std::fixed << std::setprecision(6) << area << " " << circumference << std::endl;
    }
    return 0;
}