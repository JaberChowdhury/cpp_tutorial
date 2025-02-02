#include <iostream>
using namespace std;

class Human
{
public:
    void run()
    {
        cout << "Running\n";
    }
    void walk();
};

void Human::walk()
{
    cout << "walking\n";
}

int main()
{
    Human Its_me;
    Its_me.run();
    Its_me.walk();
    return 0;
}