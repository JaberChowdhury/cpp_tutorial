#include <iostream>
int main()
{
    int x, y;
    std::cin >> x;
    if (x >= 1 && x <= 10)
    {
        y = x * 2;
    }
    std::cout << y << std::endl;
    return 0;
}