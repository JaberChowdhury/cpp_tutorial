#include <iostream>
#include <vector>
using namespace std;

bool is_lucky(int digit)
{
  string string_digit = to_string(digit);
  bool is_lucky_digit = true;
  for (char x : string_digit)
  {
    int z = x - '0';
    if (z != 4 || z != 7)
    {
      is_lucky_digit = false;
      break;
    }
    else
    {
      cout << x << endl;
    }
  }
  return is_lucky_digit;
}

int main()
{
  int a = 3, b = 49;
  // cin >> a >> b;
  vector<int> lucky;

  cout << is_lucky(447) << endl;
  //
  // for (int i = a; i <= b; i++)
  // {
  //   if (is_lucky(i))
  //   {
  //     cout << i << endl;
  //     lucky.push_back(i);
  //   }
  // }

  return 0;
}
