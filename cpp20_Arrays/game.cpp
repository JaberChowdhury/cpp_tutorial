#include <iostream>
using namespace std;

int main()
{
    // State of the game
    int map[6][6] = {
        {0, 1, 0, 1, 0, 0},
        {1, 0, 1, 0, 1, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1},
    };

    int total_hit = 5;
    int total_hit_count = 0;
    int total_hit_matched = 0;
    int row_input, col_input;

    cout << " Map of the game [5x5] (example),\n"
         << "  {0, 0, 0, 0, 0, 0},\n"
         << "  {0, 0, 0, 0, 0, 0},\n"
         << "  {0, 0, 0, 0, 0, 0},\n"
         << "  {0, 0, 0, 0, 0, 0},\n"
         << "  {0, 0, 0, 0, 0, 0},\n"
         << endl;

    while (total_hit_count < total_hit)
    {
        cout << "Enter your row input: ";
        cin >> row_input;
        cout << "Enter your column input: ";
        cin >> col_input;
        total_hit_count++;
        if (map[row_input][col_input] == 1)
        {
            cout << "You hit the target! 🔥🔥🔥🔥" << endl;
            map[row_input][col_input] = 0;
            total_hit_matched++;
        }
        else
        {
            cout << "You missed the target! 🥚🥚🥚" << endl;
        }
        cout << "hit remaining: " << total_hit - total_hit_count << endl;
        cout << "   " << "\n";
    }

    if (total_hit_matched == total_hit)
    {
        cout << "You won the game! 🎉🎉🎉🎉" << endl;
    }
    else
    {
        cout << "You lost the game! 😭😭😭😭" << endl;
    }

    cout << "Total hit matched: " << total_hit_matched << " 📅" << endl;
    return 0;
}
