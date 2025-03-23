#include <iostream>
using namespace std;

int Health{100};
bool isDead{false};

int main()
{
    Health -= 10;
    isDead = Health <= 0;

    Health -= 200;
    isDead = Health <= 0
   return 0;
}
