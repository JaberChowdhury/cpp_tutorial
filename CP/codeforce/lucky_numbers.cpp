// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <iostream>
#include <vector>
using namespace std;

bool is_lucky(int digit)
{
  bool is_lucky_digit = true;
  string digit_as_string = to_string(digit);
  for (char x : digit_as_string)
  {
    int num = x - '0';
    if (num != 4 && num != 7)
    {
      is_lucky_digit = false;
      break;
    }
  }
  return is_lucky_digit;
}

int main()
{
  int a, b;
  vector<int> lucky;
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if (is_lucky(i))
    {
      lucky.push_back(i);
    }
  }
  if (!lucky.empty())
  {
    for (int x : lucky)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  else
  {
    cout << -1 << endl;
  }
  is_lucky(4456);
  return 0;
}