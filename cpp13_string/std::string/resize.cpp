#include <iostream>
#include <string>
using namespace std;

// it modify the original string

int main() {
    std::string str("I like to code in C");
    std::cout << str << '\n';

    unsigned sz = str.size();

    str.resize(sz + 2, '+');
    std::cout << str << '\n';

    str.resize(sz + 4, '{');
    std::cout << str << '\n';

    string temp = "Hello world";

    for (char i = 'A'; i <= 'Z'; i++) {
        temp.resize(temp.size() + 1, ' ');
        temp.resize(temp.size() + 1, i);
    }

    cout << temp << endl;
    return 0;
}
