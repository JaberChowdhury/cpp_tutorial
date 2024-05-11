#include <iostream>
using namespace std;

int calculate_numbers(int x , int y) {
  return x + y;
}

int main(){
  int first_input, second_input;
  int sum;
  
  cout << "Enter first number : ";
  cin >> first_input;
  
  cout << "Enter second number : ";
  cin >> second_input;
  
  sum = calculate_numbers(first_input,second_input);
  
  cout << "Total sum is " << sum ;
}