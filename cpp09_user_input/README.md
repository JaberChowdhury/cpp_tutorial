with `cout` we print something in terminal with `<<`

```cpp
cout << "Hello " << name << "\n";
```


with `cin` we print something in terminal with `>>`

```cpp
int name;
cout << "What is your name ? :";
cin >> name;
cout << "Hello " << name ;
```


Good To Know
cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)


# Bmi calculator 
```cpp
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
```


# calculator project from w3 school
```cpp
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
```