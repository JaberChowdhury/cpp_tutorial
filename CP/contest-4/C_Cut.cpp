#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> cards;
  vector<int> last_cards;
  vector<int> result;
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (i < (n - k))
    {
      cards.push_back(x);
    }
    else if (i > (n - k) - 1)
    {

      last_cards.push_back(x);
    }
  }
  for (int x : last_cards)
  {
    result.push_back(x);
  }
  for (int x : cards)
  {
    result.push_back(x);
  }

  for (int x : result)
  {
    cout << x << " ";
  }
  return 0;
}
