# Arrays in C++

The position of array in cpp starts with 0 index

```cpp
#include <iostream>
using namespace std;
int x[0] = {6};
```

In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values:

```cpp
string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
```

string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements

```cpp
string cars[5];
cars[0] = "Volvo";
cars[1] = "BMW";
cars[2] = "Ford";
cars[3] = "Mazda";
cars[4] = "Tesla";
```

## Vectors

For operations that require adding and removing array elements, C++ provides vectors, which are `resizable arrays`.

The size of a vector is dynamic, meaning it can grow and shrink as needed.

Vectors are found in the `<vector>` library, and they come with many useful functions to add, remove and modify elements:

```cpp
#include <iostream>
#include <vector> // Including the vector library
using namespace std;

int main() {
  // A vector with 3 elements
  vector<string> cars = {"Volvo", "BMW", "Ford"};

  // Adding another element to the vector
  cars.push_back("Tesla");

  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
```

## Multi-Dimensional Arrays

A multi-dimensional array is an array of arrays.

```cpp
#include <iostream>
using namespace std;

int main() {
  string letters[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }
  return 0;
}
```

## game
```cpp
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
```
