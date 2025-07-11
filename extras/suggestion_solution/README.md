<h1 align="center"> CPP Practice Problem </h1>

<h2 align="center">  Variables, Data Type, Operator </h2>

1. Define Variable and write the rules of define a variable.

### answer comming soon

2. Define Datatypes.

### answer comming soon

3. Describe the different types of operators in CPP.

### answer comming soon

4. Find out the output of some basic problem.

### answer comming soon

5. Write a C++ program to calculate the area of Triangle/ Circle/ Square.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // for triangle
>    float base, height, result_triangle;
>    cout << "Enter base and height for triangle: ";
>    cin >> base >> height;
>    result_triangle = 0.5 * base * height;
>
>    // for circle
>    float radius, result_circle;
>    cout << "Enter radius for circle: ";
>    cin >> radius;
>    result_circle = 3.14159 * radius * radius;
>
>    // for square
>    float side, result_square;
>    cout << "Enter side for square: ";
>    cin >> side;
>    result_square = side * side;
>
>    cout << "Triangle Area: " << result_triangle << endl;
>    cout << "Circle Area: " << result_circle << endl;
>    cout << "Square Area: " << result_square << endl;
>    return 0;
> }
> ```

6. Write a C++ program to calculate Celsius temperature from Fahrenheit temperature.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // fahrenheit to celsius
>    // formula => (f-32)*(5/9)
>
>    double fahrenheit;
>    cin >> fahrenheit;
>    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
>
>    cout << "Fahrenheit: " << fahrenheit << endl;
>    cout << "Celsius: " << celsius << endl;
>
>    return 0;
> }
> ```

7. Write a C++ program to calculate Fahrenheit temperature from Celsius temperature.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // celsius to fahrenheit
>    // formula: F = (C * 9/5) + 32
>
>    double celsius;
>    cin >> celsius;
>    double fahrenheit = (celsius * 9 / 5) + 32;
>
>    cout << "Celsius: " << celsius << endl;
>    cout << "Fahrenheit: " << fahrenheit << endl;
>
>    return 0;
> }
> ```

<br />

<h2 align="center"> If else </h2>

1. Define conditional operator.

### answer comming soon

2. Write a C++ program to find either a given number is even or odd.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // even or odd
>
>    int num;
>    cin >> num;
>
>    if (num % 2 == 0) {
>        cout << "Even" << endl;
>    } else {
>        cout << "Odd" << endl;
>    }
>    return 0;
> }
> ```

3. Write a C++ program to find either a given number is leap year or not.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    int year;
>    cin >> year;
>    if (year % 4 == 0) {
>        if (year % 100 == 0) {
>            if (year % 400 == 0) {
>                cout << "Leap year" << endl;
>            } else {
>                cout << "Not a leap year" << endl;
>            }
>        } else {
>            cout << "Leap year" << endl;
>        }
>    } else {
>        cout << "Not a leap year" << endl;
>    }
>    return 0;
> }
> ```

> ### Simple version

> ```cpp
> #include <iostream>
> using namespace std;
>
> // simple version
> int main() {
>    int year;
>    cin >> year;
>    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
>        cout << "Leap year" << endl;
>    } else {
>        cout << "Not a leap year" << endl;
>    }
>    return 0;
> }
> ```

4. Write a C++ program to find the biggest number of 3 numbers.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    int nums[3];
>    cin >> nums[0] >> nums[1] >> nums[2];
>
>    int big_num = nums[0];
>    for (int i = 0; i < 3; i++) {
>        if (nums[i] > big_num) {
>            big_num = nums[i];
>        }
>    }
>
>    cout << big_num << endl;
>    return 0;
> }
> ```

5. Write a C++ program to find the smallest number of 3 numbers.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // smallest number
>    int nums[3];
>    cin >> nums[0] >> nums[1] >> nums[2];
>
>    int small_num = nums[0];
>    for (int i = 0; i < 3; i++) {
>        if (nums[i] < small_num) {
>            small_num = nums[i];
>        }
>    }
>
>    cout << small_num << endl;
>    return 0;
> }
> ```

6. Write a C++ program to print the grade of the given marks of a student.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    float marks;
>    cin >> marks;
>    if (marks >= 80)
>        cout << "A+" << endl;
>    else if (marks >= 80)
>        cout << "A" << endl;
>    else if (marks >= 70)
>        cout << "B" << endl;
>    else if (marks >= 60)
>        cout << "C" << endl;
>    else if (marks >= 50)
>        cout << "D" << endl;
>    else if (marks >= 40)
>        cout << "E" << endl;
>    else
>        cout << "F" << endl;
>    return 0;
> }
> ```

7. Write a C++ program to find given character is either vowel or consonant.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
>    char letter;
>    cin >> letter;
>    bool isVowel = false;
>    for (int i = 0; i < 10; i++) {
>        if (letter == vowels[i]) {
>            cout << "Its a vowel" << endl;
>            isVowel = true;
>            break;
>        }
>    }
>    if (!isVowel) {
>        cout << "Its a consonant" << endl;
>    }
>    return 0;
> }
>
> ```

> ### Another solution

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    string vowels = "aeiouAEIOU";
>    char   letter;
>    cin >> letter;
>    bool isVowel = false;
>    for (int i = 0; i < 10; i++) {
>        if (letter == vowels[i]) {
>            cout << "Its a vowel" << endl;
>            isVowel = true;
>            break;
>        }
>    }
>    if (!isVowel) {
>        cout << "Its a consonant" << endl;
>    }
>    return 0;
> }
> ```

<br />

<h2 align="center"> Loop </h2>

1. Different types of Loop.

### answer comming soon

2. Distinguish between while loop and do while.

### answer comming soon

3. Write a C++ code to find the factorial number of a given integer.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // factorial
>    int num, result = 1;
>    cin >> num;
>    for (int i = 1; i <= num; i++) {
>        result *= i;
>    }
>    cout << "Factorial of " << num << " is " << result << endl;
>    return 0;
> }
> ```

4. Write a C++ program to find out the GCD and LCM of two numbers.

### answer comming soon

5. Write a C++ program to print the prime number up to given N integer Number.

> ```cpp
> #include <iostream>
> using namespace std;
>
>
> bool isPrime(int num) {
>    bool ans  = true;
>    int  flag = 2;
>    while (flag <= num) {
>        if (num % flag != 0) {
>            flag++;
>        } else {
>            ans = false;
>            break;
>        }
>    }
>    return ans;
> }
>
> int main() {
>    int limit;
>    cin >> limit;
>    for (int i = 1; i <= limit + 1; i++) {
>        bool ans = isPrime(i);
>        if (ans) {
>            cout << i << endl;
>        }
>    }
>    return 0;
> }
> ```

> ### Another solution

> ```cpp
> #include <cmath>
> #include <iostream>
> using namespace std;
>
> bool isPrime(int num) {
>    bool ans  = true;
>    int  flag = 2;
>    while (flag <= sqrt(num)) {
>        if (num % flag != 0) {
>            flag++;
>        } else {
>            ans = false;
>            break;
>        }
>    }
>    return ans;
> }
>
> int main() {
>    int limit;
>    cin >> limit;
>    for (int i = 1; i <= limit + 1; i++) {
>        bool ans = isPrime(i);
>        if (ans) {
>            cout << i << endl;
>        }
>    }
>    return 0;
> }
> ```

6. Write a C++ program either a given number N is prime or not prime.

> ```cpp
> #include <cmath>
> #include <iostream>
> using namespace std;
>
> int main() {
>    int num;
>    cin >> num;
>    bool isPrime = true;
>    for (int i = 2; i <= sqrt(num); i++) {
>        if (num % i == 0) {
>            isPrime = false;
>            break;
>        }
>    }
>    if (isPrime) {
>        cout << "This is  a prime number " << endl;
>    } else {
>        cout << "This is not a prime number " << endl;
>    }
>    return 0;
> }
> ```

7. Write a C++ program to build Multiplication Table for a Given Integer.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    int num;
>    cin >> num;
>
>    for (int i = 1; i <= 10; i++) {
>        cout << num << " x " << i << " = " << num * i << endl;
>    }
>    return 0;
> }
> ```

8. Write a C++ program to find out a given string is palindrome or not.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    string text = "jaber", rev_text = "";
>    cin >> text;
>
>    for (int i = text.size() - 1; i >= 0; i--) {
>        rev_text += text[i];
>    }
>    if (rev_text == text) {
>        cout << "The text is a palindrome" << endl;
>    } else {
>        cout << "The text is not a palindrome" << endl;
>    }
>    return 0;
> }
> ```

9. Write a C++ program to find out a given number is palindrome or not.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    string text = "jaber", rev_text = "";
>    cin >> text;
>
>    for (int i = text.size() - 1; i >= 0; i--) {
>        rev_text += text[i];
>    }
>    if (rev_text == text) {
>        cout << "The text is a palindrome" << endl;
>    } else {
>        cout << "The text is not a palindrome" << endl;
>    }
>    return 0;
> }
> ```

10. Write C++ Code to print the following pattern:

### answer comming soon

<br />

<h2 align="center"> Array </h2>

1. Define the Array and write down the necessity of using an array.

### answer comming soon

2. Types of Array and Syntex of different types of array.

### answer comming soon

3. Find the largest element of a given array of integers.

### answer comming soon

4. Write a C++ program to find the second largest element in an array of integers.

### answer comming soon

5. Find the smallest element of a given array of integers.

### answer comming soon

6. Write a C++ program to find the second smallest elements in a given array of integers.

### answer comming soon

7. Write a C++ program of Linear search.

### answer comming soon

8. Write a C++ program Binary search.

### answer comming soon

9. Write a C++ code to Addition, Subtraction, Multiplication of two matrices?

### answer comming soon
