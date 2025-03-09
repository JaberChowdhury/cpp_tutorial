#include <iostream>

int main()
{
    int n, m, x, y, s;
    std::cin >> n >> m;
    std::cin >> x >> y;
    if (n >= 0 && n <= 100 && m >= 0 && m <= 100)
    {
        if (x >= 0 && x <= 1000 && y >= 0 && y <= 1000)
        {
            s = (n * x) + (m * y);
        }
    }
    std::cout << s << std::endl;
    return 0;
}