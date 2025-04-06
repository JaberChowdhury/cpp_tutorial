#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> a, b;

    for (int i = p - 1; i <= q - 1; i++)
    {
        a.push_back(nums[i]);
    }
    for (int i = r - 1; i <= s - 1; i++)
    {
        b.push_back(nums[i]);
    }

    vector<int> result;
    int a_idx = 0, b_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (i >= p - 1 && i <= q - 1)
        {
            result.push_back(b[b_idx++]);
        }
        else if (i >= r - 1 && i <= s - 1)
        {
            result.push_back(a[a_idx++]);
        }
        else
        {
            result.push_back(nums[i]);
        }
    }

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}