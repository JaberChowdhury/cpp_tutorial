#include <iostream>
using namespace std;

int main()
{
    char x = 'a';
    cout << int(x) << endl;
    return 0;
}

// #include <iostream>
// #include <cctype> // For isdigit, isalpha, etc.

// int main()
// {
//     // Print lowercase letters a-z
//     std::cout << "Lowercase letters (a-z):" << std::endl;
//     for (char ch = 'a'; ch <= 'z'; ++ch)
//     {
//         std::cout << ch << " ";
//     }
//     std::cout << std::endl;

//     // Print uppercase letters A-Z
//     std::cout << "Uppercase letters (A-Z):" << std::endl;
//     for (char ch = 'A'; ch <= 'Z'; ++ch)
//     {
//         std::cout << ch << " ";
//     }
//     std::cout << std::endl;

//     // Print digits 0-9
//     std::cout << "Digits (0-9):" << std::endl;
//     for (char ch = '0'; ch <= '9'; ++ch)
//     {
//         std::cout << ch << " ";
//     }
//     std::cout << std::endl;

//     // Print some special characters
//     std::cout << "Special characters:" << std::endl;
//     for (char ch = 32; ch < 127; ++ch)
//     { // ASCII range of printable characters
//         if (!std::isalnum(ch))
//         {
//             std::cout << ch << " ";
//         }
//     }
//     std::cout << std::endl;

//     return 0;
// }
