#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> get_posibility(int position)
{
  // int posibility_two = (to_string(position) + to_string(position)) - 0;
  int posibility_two = 11 * position;
  vector<int> x = {position, posibility_two};
  return x;
}

int main()
{
  int n;
  cin >> n;
  vector<int> days(n);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    days.push_back(x);
  }

  vector<int> result;
  for (int i = 0; i < n; i++)
  {
    vector<int> posibilities = get_posibility(i + 1);
    for (int k = 1; k <= days[i]; k++)
    {
      if (k == posibilities[0] && k == posibilities[1])
      {
        result.push_back(k);
      }
    }
  }
  cout << result.size() << endl;
  return 0;
}

// not solved yet