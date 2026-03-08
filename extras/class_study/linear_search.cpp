#include <iostream>
using namespace std;

int main() {
    int size, search;
    cin >> size;
    int x[size];
    for (int i = 0; i < size; i++) {
        cin >> x[i];
    }

    cout << "Search number : ";
    cin >> search;
    for (int i = 0; i < size; i++) {
        if (x[i] == search) {
            cout << "Number found" << endl;
            break;
        } else {
            cout << "Number didnt found found" << endl;
            break;
        }
    }
    return 0;
}
