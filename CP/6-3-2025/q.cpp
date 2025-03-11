

// #include <iostream>
// using namespace std;

// int main()
// {
//     long long x, y;
//     cin >> x >> y;

//     long long attacks = (x + y - 1) / y;

//     cout << attacks << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     long long x, y, attack;
//     cin >> x >> y;
//     attack = 0;
//     while (x > 0)
//     {
//         x -= y;
//         attack = attack + 1;
//     }
//     cout << attack << endl;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    long long stamina, punch, attack, xtras;
    cin >> stamina >> punch;
    attack = stamina / punch;
    xtras = stamina % punch;
    if (xtras != 0)
    {
        attack++;
        cout << attack << endl;
    }
    else
    {
        cout << attack << endl;
    }

    return 0;
}
