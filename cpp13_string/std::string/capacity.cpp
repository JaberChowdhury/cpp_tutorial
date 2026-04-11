#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string str("Test string");
    cout << str << endl;
    std::cout << "size: " << str.size() << "\n";
    std::cout << "length: " << str.length() << "\n";
    std::cout << "capacity: " << str.capacity() << "\n";
    std::cout << "max_size: " << str.max_size() << "\n";

    for (char i = 'A'; i <= 'Z'; i++) {
        str.push_back(' ');
        str.push_back(i);
    }
    cout << str << endl;
    std::cout << "capacity: " << str.capacity() << "\n";
    return 0;
}
