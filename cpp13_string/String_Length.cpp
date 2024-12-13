#include <iostream>
#include <string>

int main()
{
    std::string input_text;
    std::cout << "Please write your university name :";
    std::cin >> input_text;

    // find out the length
    int text_length = input_text.length();
    std::cout << "The length of this text is : " << text_length;

    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.size();

    return 0;
}