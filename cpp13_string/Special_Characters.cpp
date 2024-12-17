#include <iostream>
#include <string>

int main()
{
    std::string text = "Hello there I am a \"Programmer\" !!";
    std::string txt = "It\'s alright.";
    std::string txt2 = "The character \\ is called backslash.";
    std::cout << text << "\n";
    std::cout << txt << "\n";
    std::cout << txt2 << "\n";

    return 0;
}