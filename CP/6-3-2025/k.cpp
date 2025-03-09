#include <iostream>

int main()
{
    int x, y, c;
    std::cin >> x >> y;
    if (x >= 1 && x <= 10)
    {
        if (y >= 200 && y <= 300)
        {
            c = x * y;
        }
    }
    std::cout << c << std::endl;
    return 0;
}