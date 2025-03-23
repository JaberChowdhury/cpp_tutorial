#include <iostream>

using namespace std;

int main()
{
  int k, g, m, glass_now = 0, mug_now = 0;
  cin >> k >> g >> m;
  for (int i = 0; i < k; i++)
  {
    if (glass_now != 0)
    {
      glass_now = 0;
    }
    else if (mug_now == 0)
    {
      mug_now = m;
    }
    else
    {
      if (g - glass_now < mug_now)
      {
        glass_now += g - glass_now;
        mug_now -= g - glass_now;
      }
      else
      {
        glass_now = m;
        mug_now = m;
      }
    }
  }

  cout << glass_now << endl;
  cout << mug_now << endl;
  return 0;
}

// wrong answer