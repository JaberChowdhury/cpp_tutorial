#include <iostream>
#include <vector>
using namespace std;

string check_square_posibility()
{
  int total_square, square_sum = 0;
  cin >> total_square;
  vector<int> squares(total_square);
  for (int i = 0; i < total_square; i++)
  {
    cin >> squares[i];
    square_sum += squares[i];
  }

  int natural_sqrt = sqrt(square_sum);

  return (sqrt(square_sum) - natural_sqrt) > 0 ? "Yes" : "No";
}

int main()
{

  int t;
  cin >> t;
  vector<string> result(t);
  for (int i = 0; i < t; i++)
  {
    string x = check_square_posibility();
    result[i] = x;
  }
  for (string y : result)
  {
    cout << y << endl;
  }
  return 0;
}
