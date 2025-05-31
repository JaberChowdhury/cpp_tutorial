#include <iostream>
static int x = 899;
using namespace std;
void hello() {
    cout << x << endl;
}
int main() {

    hello();
    cout << "hello" << endl;
    cout << x << endl;
    return 0;
}
