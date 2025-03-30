#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << endl;
    
    return 0;
}