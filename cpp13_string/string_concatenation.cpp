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