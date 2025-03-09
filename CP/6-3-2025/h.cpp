#include <iostream>
int main()
{
    int n, s;
    std::cin >> n;
    if (n >= 1 && n <= 100)
    {
        s = n * 2;
    }
    std::cout << s << std::endl;
    return 0;
}