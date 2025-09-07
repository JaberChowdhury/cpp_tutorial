#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> nums;
    nums.push(21);
    nums.push(221);
    nums.push(231);

    nums.pop();

    cout << nums.size() << endl;
    return 0;
}

// fifo
