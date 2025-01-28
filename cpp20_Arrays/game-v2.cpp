#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate a 6x6 map with random 0s and 1s
void generateMap(int map[6][6])
{
    srand(time(0)); // Seed the random number generator

    // Generate random 0s and 1s for the map
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            map[i][j] = rand() % 2; // Randomly assign 0 or 1
        }
    }
}

// Function to print the 6x6 map
void printMap(int map[6][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // State of the game
    int map[6][6]; // Declare a 6x6 array
    // Generate the random map
    generateMap(map);

    int total_hit = 5;
    int total_hit_count = 0;
    int total_hit_matched = 0;
    int row_input, col_input;

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

    printMap(map);
    cout << "Total hit matched: " << total_hit_matched << " 📅" << endl;
    return 0;
}
