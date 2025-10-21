#include <iostream>
#include <sys/types.h>
using namespace std;

int main() {
    string x = "bangladesh";

    for (int i = 0; i < x.size(); i++) {
        for (int j = i; j < x.size(); j++) {
            for (int k = i; k <= j; k++) {
                cout << x[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
