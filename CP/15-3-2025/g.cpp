#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Write C++ code here
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    int len = sizeof(nums) / sizeof(nums[0]);

    sort(nums, nums + len);
    for (int i = 0; i < len; i++)
    {
        string ff = i == 2 ? "" : " ";
        cout << nums[i] << ff;
    }
    cout << endl;
    return 0;
}