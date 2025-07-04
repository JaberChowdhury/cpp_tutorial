// https://judge.beecrowd.com/en/problems/view/1173

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> answer = {x};

    for (int i = x + 1; i < x + 10; i++) {
        answer.push_back(answer.back() * 2);
    }
    // print answer
    for (int i = 0; i < answer.size(); i++) {
        cout << "N[" << i << "] = " << answer[i] << endl;
    }
    return 0;
}

// i have to submit it later
