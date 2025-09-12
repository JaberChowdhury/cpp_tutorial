#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> data;
    data.push_back(12);
    data.push_front(213);
    for (auto d : data) {
        cout << d << endl;
    }
    return 0;
}
