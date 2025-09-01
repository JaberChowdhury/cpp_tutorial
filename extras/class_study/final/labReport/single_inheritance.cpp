#include <iostream>
using namespace std;

class Item {
  public:
    bool  isEatable = true;
    float rating    = 9.7;
};
class Sunglass : public Item {
  public:
    bool isAvailable = false;
    void print_info() {
        cout << "Eatable :: " << (this->isEatable ? "Yes" : "No") << endl;
        cout << "Rating :: " << this->rating << endl;
        cout << "Available  :: " << (this->isAvailable ? "Yes" : "No") << endl;
    }
};
int main() {
    Sunglass s1;
    s1.print_info();
    return 0;
}

/*
Single inheritance : A class is allowed to inherit from one class only or a base class can be inherited by only one
derived class.


[Base class] ----> [Derived class]
*/