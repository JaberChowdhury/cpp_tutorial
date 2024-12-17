# A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:

```cpp
#include <iostream>
#include <string>
// using namespace std;


int main()
{
  std::string first_name = "Md Jaber ";
  std::string middle_name = "Hossain ";
  std::string last_name = "Chowdhury";
  std::string line =  "My name is " + first_name + middle_name + last_name ;

  std::string complete_line = line.append(" and I am a programmer");
  std::cout << complete_line ;
  return 0;
}
```

C++ uses the + operator for both addition and concatenation.

## Numbers and Strings

Numbers are added. Strings are concatenated.

```cpp
#include<iostream>
#include<string>


int main(){
    std::string string_one = "10";
    std::string string_two = "20";
    std::cout << string_one + string_two;
    return 0;
}
```

## String Length

To get the length of a string, use the length() function:

```cpp
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
```

## Special Characters

| Escape character | Result | Description  |
| ---------------- | ------ | ------------ |
| \\'              | '      | Single quote |
| \\"              | "      | Double quote |
| \\\\"            | \\     | Backslash    |

```cpp
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
```

## User Input Strings

- The cin function can only store a single word.
- we often use the getline() function to read a line of text.

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string fullName;
    std::cout << "Type your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Your name is: " << fullName;
    return 0;
}

```

## C-Style Strings

- C-style strings are created with the char type instead of string.
- one reason some users continue to use C-style strings is that they have access to functions from the `C standard library`.
