#include <iostream>
using namespace std;



int main() {
  int weight_in_kg;
  double height_in_meter;
  
  cout << "Type your weight in 'kg' unit : ";
  cin >> weight_in_kg;
  
  cout << "Type your height in 'meter' unit : ";
  cin >> height_in_meter;
  
  double bmi = weight_in_kg / ( height_in_meter * height_in_meter );
  
  cout << "Your bmi is " << bmi ;
} 