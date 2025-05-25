#include <iostream>
using namespace std;

class Vichel {
  public:
int a=0;
float b = 90.9001;
string c = "hi";
    void start() { cout << "Vichel is started" << endl; }
    void stop() { cout << "Vichel is stoped" << endl; }
    void repair() { cout << "car is repaired"<< endl; }
    void update_value() { a = 90; b = 89.975; c = "hi mom";}
    void show_state(){
        cout << "a = "<<a<<endl;
    }
  };

class Hiaxe : public Vichel {};

int main() {
    Hiaxe hi;
    hi.start();
    hi.update_value();
    return 0;
}
