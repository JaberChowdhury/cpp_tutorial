// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long a, b, c, min, max;
    vector<long long> nums;
    cin >> a >> b >> c;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);

    sort(nums.begin(), nums.end());
    min = nums[0];
    max = nums[2];
    cout << min << " " << max;

    return 0;
}
