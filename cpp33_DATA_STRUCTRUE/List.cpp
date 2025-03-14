#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> nums = {100002, 234, 54, 665, 6578};
  for (int num : nums)
  {
    cout << num << endl;
  }

  // access a list
  cout << nums.front() << endl;
  cout << nums.back() << endl;

  // change a list element

  nums.back() = 000;
  nums.front() == 232;

  // Add List Elements
  nums.push_front(11111);
  nums.push_back(8888);

  // Remove List element
  nums.pop_front();
  nums.pop_back();

  // List Size

  cout << nums.size() << endl;

  // Check if a List is Empty
  list<string> cars;
  cout << cars.empty() << endl;

  // Loop Through a List

  list<string> some_cars = {"Volvo", "BMW", "Ford", "Mazda"};

  for (string car : some_cars)
  {
    cout << car << "\n";
  }

  return 0;
}
