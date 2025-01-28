#include <iostream>
using namespace std;

int main()
{
  int awesomeNumbers[10] = {12, 43, 67, 43, 79, 54, 23, 56, 88, 43};
  for (int i : awesomeNumbers)
  {
    cout << i << endl;
  }
  return 0;
}
