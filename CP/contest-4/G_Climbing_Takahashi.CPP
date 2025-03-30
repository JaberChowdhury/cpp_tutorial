#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, last_plaform;
    cin >> n;
    vector<int> platforms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        platforms.push_back(x);
    }
    last_plaform = platforms[0];
    for (int i = 1; i <= n; i++)
    {
        if (platforms[i] > last_plaform)
        {
            last_plaform = platforms[i];
        }
        else
        {
            break;
        }
    }

    cout << last_plaform << endl;
    return 0;
}