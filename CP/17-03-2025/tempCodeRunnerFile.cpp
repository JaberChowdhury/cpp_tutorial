#include <iostream>
#include <string>
#include <vector>
using namespace std;

void debug(const string &step, const vector<string> &messages)
{
  cout << "||||---------||| Step " << step << " |||---------|||||" << endl;
  for (const auto &msg : messages)
  {
    cout << msg << endl;
  }
  cout << endl;
}

int main()
{
  int k = 5, g = 300, m = 500, glass_now = 0, mug_now = 0;

  debug("Initial", {});
  for (int i = 0; i < k; i++)
  {
    debug("Loop " + to_string(i), {});
    if (glass_now == 0 && mug_now == 0)
    {
      mug_now = m;
      debug("1", {"mug_now: " + to_string(mug_now), "glass_now: " + to_string(glass_now)});
    }
    else if (glass_now == 0 && mug_now != 0)
    {
      if (glass_now < mug_now)
      {
        glass_now = g;
        mug_now -= g;
        debug("2.1", {"mug_now: " + to_string(mug_now), "glass_now: " + to_string(glass_now)});
      }
      else if (mug_now < g)
      {
        glass_now += mug_now;
        mug_now = 0;
        debug("2.2", {"mug_now: " + to_string(mug_now), "glass_now: " + to_string(glass_now)});
      }
    }
    else if (glass_now != 0 && mug_now != 0)
    {
      glass_now = 0;
      debug("3", {"mug_now: " + to_string(mug_now), "glass_now: " + to_string(glass_now)});
    }
    else if (glass_now != 0 && mug_now == 0)
    {
      mug_now = m;
      debug("4", {"mug_now: " + to_string(mug_now), "glass_now: " + to_string(glass_now)});
    }
  }

  cout << "glass_now: -------- " << glass_now << endl;
  cout << "mug_now: -------- " << mug_now << endl;
  return 0;
}
