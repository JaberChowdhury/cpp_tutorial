#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n), sums;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    for (int x : nums)
    {
        int sum = 0;
        for (int y : nums)
        {
            if (y > x)
            {
                sum += y;
            }
        }
        sums.push_back(sum);
    }
    for (int x : sums)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}