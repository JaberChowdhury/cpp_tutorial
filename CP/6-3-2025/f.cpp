#include <iostream>
int main()
{
    int x, y, s;
    std::cin >> x >> y;
    if (x >= 1 && x < y && y > x && y <= 1000)
    {
        s = (x * 6) + y;
    }
    std::cout << s << std::endl;
    return 0;
}