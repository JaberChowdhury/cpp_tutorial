#include <iostream>

int main()
{
    int x, y, m = 5000, n = 9800, s;
    std::cin >> x >> y;
    if (x >= 0 && x <= 10 && y >= 0 && y <= 10)
    {
        s = (x * m) + (y * n);
    }
    std::cout << s << std::endl;
    return 0;
}
