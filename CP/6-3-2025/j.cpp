#include <iostream>

int main()
{
    int x, n, m, r, lc = 10, jc = 20;
    std::cin >> x >> n;
    if (x >= 1 && x <= 100)
    {
        if (n >= 1 && n <= 10)
        {
            if ((n * 10) <= x)
            {
                r = x - (n * lc);
                m = r / jc;
            }
        }
    }
    std::cout << m << std::endl;
    return 0;
}