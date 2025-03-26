#include <iostream>

using namespace std;

int main()
{
  int k, g, m, glass_now = 0, mug_now = 0;
  cin >> k >> g >> m;
  for (int i = 0; i < k; i++)
  {
    if (glass_now == g)
    {
      glass_now = 0;
    }
    else if (mug_now == 0)
    {
      mug_now = m;
    }
    else
    {
      int transfer_amount = (g - glass_now < mug_now) ? (g - glass_now) : mug_now;
      glass_now += transfer_amount;
      mug_now -= transfer_amount;
    }
  }

  cout << glass_now << " " << mug_now << endl;
  return 0;
}
