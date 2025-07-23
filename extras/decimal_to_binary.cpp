#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> binarys;

    int decimal = 0;
    if (decimal != 0) {
        while (decimal != 0) {
            int x = decimal % 2;
            decimal /= 2;
            binarys.push_back(x);
        }
    } else {
        binarys.push_back(0);
    }

    cout << "result :: ";
    for (int i = binarys.size() - 1; i >= 0; i--) {
        cout << binarys[i];
    }
    cout << endl;
    return 0;
}
