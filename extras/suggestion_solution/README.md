<h1 align="center"> CPP Practice Problem </h1>

<h2 align="center">  Variables, Data Type, Operator </h2>

# 1. Define Variable and write the rules of define a variable.

### **Definition of Variable**

A **variable** is a named storage location in a computer's memory that holds a value which can be changed during program execution. Variables are used to store data such as numbers, characters, or strings, which can be manipulated by the program.

### **Rules for Defining a Variable**

When defining a variable in programming, the following rules must be followed:

1. **Valid Name**:
   - Variable names can contain letters (`A-Z, a-z`), digits (`0-9`), and underscores (`_`).
   - They **must begin with a letter or an underscore** (not a digit).
   - Example: `age`, `_count`, `totalAmount` (Valid); `1var`, `@value` (Invalid).

2. **Case Sensitivity**:
   - Variable names are **case-sensitive** in most programming languages (e.g., `Age` and `age` are different variables).

3. **No Reserved Keywords**:
   - A variable name **cannot be a reserved keyword** (e.g., `if`, `for`, `while`, `int`, `return`).

4. **Meaningful & Descriptive**:
   - Variable names should be meaningful (e.g., `studentName` instead of `sn`).

5. **No Special Characters**:
   - Avoid using spaces or special symbols like `!`, `@`, `#`, `$`, `%`, etc. (except underscore `_`).

6. **Length Consideration**:
   - Some languages impose a limit on variable name length, but generally, it should be reasonable.

7. **Initialization (Optional but Recommended)**:
   - Variables can be declared without a value, but initializing them is good practice (e.g., `int x = 0;`).

### **Examples of Valid and Invalid Variable Names**

| **Valid**     | **Invalid**  | **Reason**          |
| ------------- | ------------ | ------------------- |
| `age`         | `1age`       | Starts with a digit |
| `_salary`     | `first-name` | Hyphen not allowed  |
| `totalAmount` | `float`      | Reserved keyword    |
| `userName`    | `user name`  | Contains space      |

# 2. Define Datatypes.

A datatype (or data type) defines the type of data that a variable can hold, the operations that can be performed on it, and the way it is stored in memory. Datatypes help the compiler/interpreter allocate the correct memory size and enforce rules for data manipulation.

# 3. Describe the different types of operators in CPP.

### **Types of Operators in C++**

#### **1. Arithmetic Operators**

Perform mathematical operations.
**Example:**

```cpp
int a = 10, b = 3;
cout << a + b;  // 13 (Addition)
cout << a % b;  // 1 (Remainder)
```

#### **2. Assignment Operators**

Assign values to variables.
**Example:**

```cpp
int x = 5;
x += 3;  // x = x + 3 → 8
```

#### **3. Relational Operators**

Compare two values.
**Example:**

```cpp
cout << (5 > 3);  // 1 (true)
```

#### **4. Logical Operators**

Combine conditions (`&&`, `||`, `!`).
**Example:**

```cpp
bool ans = (5 > 3) && (2 < 4);  // true
```

#### **5. Bitwise Operators**

Work on binary bits (`&`, `|`, `^`, `~`, `<<`, `>>`).
**Example:**

```cpp
cout << (5 & 3);  // 1 (Bitwise AND)
```

#### **6. Ternary Operator**

Short `if-else` statement.
**Example:**

```cpp
int res = (5 > 3) ? 1 : 0;  // res = 1
```

#### **7. Other Operators**

- **`sizeof()`** → Returns variable size.
- **`::`** → Scope resolution.
- **`.` & `->`** → Access class members.

**Example:**

```cpp
cout << sizeof(int);  // 4 (bytes)
```

<!--
# 4. Find out the output of some basic problem.

### answer comming soon -->

# 5. Write a C++ program to calculate the area of Triangle/ Circle/ Square.

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

# 6. Write a C++ program to calculate Celsius temperature from Fahrenheit temperature.

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

# 7. Write a C++ program to calculate Fahrenheit temperature from Celsius temperature.

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

# 1. Define conditional operator.

The **conditional operator** (`?:`) is a shorthand for an **if-else** statement. It is also called the **ternary operator** because it takes **three operands**.

### **Syntax:**

```cpp
condition ? expression1 : expression2;
```

### **How it works:**

- If the **condition** is **true**, `expression1` is executed.
- If the **condition** is **false**, `expression2` is executed.

### **Example:**

```cpp
int a = 5, b = 10;
int max = (a > b) ? a : b;  // If a > b, max = a; else max = b
```

Here, since `5 > 10` is false, `max` becomes `10`.

# 2. Write a C++ program to find either a given number is even or odd.

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

# 3. Write a C++ program to find either a given number is leap year or not.

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

# 4. Write a C++ program to find the biggest number of 3 numbers.

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

# 5. Write a C++ program to find the smallest number of 3 numbers.

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

# 6. Write a C++ program to print the grade of the given marks of a student.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    float marks;
>    cin >> marks;
>    if (marks >= 80)
>        cout << "A+" << endl;
>    else if (marks >= 70)
>        cout << "A" << endl;
>    else if (marks >= 60)
>        cout << "B" << endl;
>    else if (marks >= 50)
>        cout << "C" << endl;
>    else if (marks >= 40)
>        cout << "D" << endl;
>    else
>        cout << "F" << endl;
>    return 0;
> }
> ```

# 7. Write a C++ program to find given character is either vowel or consonant.

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

# 1. Different types of Loop.

**loops** are used to **repeat a block of code** multiple times. There are **three main types** of loops:

### **1. `for` Loop**

➡ **Best when** the number of iterations is known.

#### **Syntax:**

```cpp
for (initialization; condition; update) {
    // Code to repeat
}
```

#### **Example:**

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";  // Output: 1 2 3 4 5
}
```

### **2. `while` Loop**

➡ **Best when** the number of iterations is **not known** beforehand.

#### **Syntax:**

```cpp
while (condition) {
    // Code to repeat
}
```

#### **Example:**

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";  // Output: 1 2 3 4 5
    i++;
}
```

### **3. `do-while` Loop**

➡ **Best when** the loop must run **at least once** (condition checked after execution).

#### **Syntax:**

```cpp
do {
    // Code to repeat
} while (condition);
```

#### **Example:**

```cpp
int i = 1;
do {
    cout << i << " ";  // Output: 1 2 3 4 5
    i++;
} while (i <= 5);
```

### **Key Differences:**

| Loop Type  | When to Use        | Executes at Least Once? |
| ---------- | ------------------ | ----------------------- |
| `for`      | Known iterations   | ❌ No                   |
| `while`    | Unknown iterations | ❌ No                   |
| `do-while` | Must run once      | ✔ Yes                  |

# 2. Distinguish between while loop and do while.

Both `while` and `do-while` loops execute code repeatedly **until a condition becomes false**, but they differ in **when the condition is checked**.

| Feature                     | **`while` Loop**                     | **`do-while` Loop**                      |
| --------------------------- | ------------------------------------ | ---------------------------------------- |
| **Condition Check**         | **Before** execution                 | **After** execution                      |
| **Executes at Least Once?** | ❌ No                                | ✔ Yes                                   |
| **Syntax**                  | `while (condition) { ... }`          | `do { ... } while (condition);`          |
| **Best Used When**          | When the loop may **not run at all** | When the loop **must run at least once** |

# 3. Write a C++ code to find the factorial number of a given integer.

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

# 4. Write a C++ program to find out the GCD and LCM of two numbers.

### answer comming soon

# 5. Write a C++ program to print the prime number up to given N integer Number.

> ````cpp
> #include <cmath>
> #include <iostream>
> using namespace std;
>
> bool isPrime(int num) {
>    if (num <= 1)
>        return false; // 0 and 1 are not prime
>    if (num == 2)
>        return true; // 2 is the only even prime
>    if (num % 2 == 0)
>        return false; // eliminate even numbers
>
>    // Check only odd divisors up to sqrt(num)
>    for (int i = 3; i <= sqrt(num); i += 2) {
>        if (num % i == 0) {
>            return false;
>        }
>    }
>    return true;
> }
>
> int main() {
>    int limit;
>    cout << "Enter a number: ";
>    cin >> limit;
>
>    cout << "Prime numbers between 1 and " << limit << " are:\n";
>    for (int i = 2; i <= limit; i++) {
>        if (isPrime(i)) {
>            cout << i << " ";
>        }
>    }
>    cout << endl;
>
>    return 0;
> }
> ```
> ````

# 6. Write a C++ program either a given number N is prime or not prime.

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

# 7. Write a C++ program to build Multiplication Table for a Given Integer.

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

# 8. Write a C++ program to find out a given string is palindrome or not.

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

# 9. Write a C++ program to find out a given number is palindrome or not.

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

# 10. Write C++ Code to print the following pattern:

### answer comming soon

<br />

<h2 align="center"> Array </h2>

# 1. Define the Array and write down the necessity of using an array.

An **array** is a **fixed-size collection** of elements of the **same data type**, stored in **contiguous memory locations**.

#### **Syntax:**

```cpp
data_type array_name[size];
```

**Example:**

```cpp
int numbers[5] = {10, 20, 30, 40, 50};  // Integer array of size 5
```

---

### **Necessity of Using Arrays**

Arrays are essential in programming because they:

1. **Store Multiple Values Efficiently**
   - Instead of declaring many individual variables (e.g., `num1`, `num2`, `num3`), an array groups them under one name.

2. **Enable Easy Access with Indexing**
   - Elements can be accessed directly using an index (e.g., `numbers[0]` gives the first element).

3. **Optimize Memory Usage**
   - All elements are stored in **adjacent memory locations**, making access faster than scattered variables.

4. **Simplify Looping & Operations**
   - Arrays work seamlessly with loops, allowing easy traversal and manipulation.
     **Example:**

   ```cpp
   for (int i = 0; i < 5; i++) {
       cout << numbers[i] << " ";  // Prints all elements
   }
   ```

5. **Support Mathematical & Sorting Operations**
   - Arrays are widely used in mathematical computations (e.g., matrices) and sorting algorithms (e.g., Bubble Sort, Quick Sort).

6. **Foundation for Advanced Data Structures**
   - Arrays serve as the base for **strings, stacks, queues, and matrices**.

---

### **When to Use an Array?**

✔ When you need a **fixed-size** collection.
✔ When you require **fast access** using indices.
✔ When working with **homogeneous data** (same data type).

---

# 2. Types of Array and Syntex of different types of array.

An **array** is a collection of **similar data types** stored at **contiguous memory locations** under a single variable name.
It helps store multiple values using a single variable.

---

## 🔵 **Types of Arrays in C++**

### 1. **One-Dimensional Array (1D Array)**

Used to store a list of values in a single row (like a line).

#### ✅ Syntax:

```cpp
datatype arrayName[size];
```

#### ✅ Example:

```cpp
int numbers[5];        // Stores 5 integers
float prices[3];       // Stores 3 floating point numbers
char vowels[5];        // Stores 5 characters
```

---

### 2. **Two-Dimensional Array (2D Array)**

Used to store data in the form of rows and columns (like a matrix or table).

#### ✅ Syntax:

```cpp
datatype arrayName[rowSize][colSize];
```

#### ✅ Example:

```cpp
int matrix[3][4];      // 3 rows and 4 columns
char board[8][8];      // Chessboard grid (8x8)
```

---

### 3. **Multi-Dimensional Array (3D or more)**

Used when data is in more than two dimensions (rarely used in basic level).

#### ✅ Syntax:

```cpp
datatype arrayName[size1][size2][size3];
```

#### ✅ Example:

```cpp
int cube[2][3][4];     // 3D array: 2 blocks of 3x4 matrices
```

# 3. Find the largest element of a given array of integers.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // given array
>    int nums[]  = {12, 23, 34, 32, 12, 8, 32, 78, 9, 5, 3, 2, 3, 5, 7};
>    int largest = 0;
>    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
>        if (nums[i] > largest) {
>            largest = nums[i];
>        }
>    }
>
>    cout << "largest number is " << largest << endl;
>    return 0;
> }
> ```

# 4. Write a C++ program to find the second largest element in an array of integers.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // given array
>    int nums[] = {21, 4, 4, 76, 8, 65, 431, 21, 23, 54, 65, 8769, 879, 234, 32, 654, 7568956, 8, 67, 9, 6, 4, 748};
>    int limit  = sizeof(nums) / sizeof(nums[0]);
>
>    // bubble sorting
>    // sorting nums from big to small
>    for (int i = 0; i < limit; i++) {
>        for (int j = 0; j < limit - i - 1; j++) {
>            if (nums[j] < nums[j + 1]) {
>                int temp    = nums[j];
>                nums[j]     = nums[j + 1];
>                nums[j + 1] = temp;
>            }
>        }
>    }
>
>    cout << "Second largest = " << nums[1] << endl;
>    return 0;
> }
> ```

### another solution

> ```cpp
> #include <iostream>
> #include <algorithm>
> using namespace std;
>
> int main() {
>   // given array
>   int nums[] = {21, 4, 4, 76, 8, 65, 431, 21, 23, 54, 65, 8769, 879, 234, 32, 654, 7568956, 8, 67, 9, 6, 4, 748};
>   int limit  = sizeof(nums) / sizeof(nums[0]);
>
>   sort(nums, nums + limit, greater<int>());
>
>   cout << "Second largest = " << nums[1] << endl;
>   return 0;
> }
> ```

# 5. Find the smallest element of a given array of integers.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // smallest element
>    // given array
>    int nums[] = {21, 43, 5634, 23, 766, 892, 9, 64, -1};
>
>    int smallest = nums[0], limit = sizeof(nums) / sizeof(nums[0]);
>    for (int i = 0; i < limit; i++) {
>        if (nums[i] < smallest) {
>            smallest = nums[i];
>        }
>    }
>
>    cout << "Smallest number is = " << smallest << endl;
>
>    return 0;
> }
> ```

# 6. Write a C++ program to find the second smallest elements in a given array of integers.

> ```cpp
> #include <iostream>
> using namespace std;
>
> int main() {
>    // given array
>    int nums[] = {21768342, 3478932, 43272, 65893, 90, 3};
>    int limit  = sizeof(nums) / sizeof(nums[0]);
>
>    // bubble sorting
>    // sorting nums from small to big
>    for (int i = 0; i < limit; i++) {
>        for (int j = 0; j < limit - i - 1; j++) {
>            if (nums[j] > nums[j + 1]) {
>                int temp    = nums[j];
>                nums[j]     = nums[j + 1];
>                nums[j + 1] = temp;
>            }
>        }
>    }
>
>    cout << "Second smallest = " << nums[1] << endl;
>    return 0;
> }
> ```

> ### another solution

> ```cpp
> #include <iostream>
> #include <algorithm>
> using namespace std;
>
> int main() {
>   // given array
>   int nums[] = {21, 4,-1};
>   int limit  = sizeof(nums) / sizeof(nums[0]);
>
>   sort(nums, nums + limit);
>
>   cout << "Second smallest = " << nums[1] << endl;
>   return 0;
> }
> ```

# 7. Write a C++ program of Linear search.

> ```cpp
> #include <iostream>
> #include <vector>
> using namespace std;
>
> // linear search
> int main() {
>    vector<int> nums;
>    int         limit, search, found_index = -1;
>    cout << "Enter the limit :: ";
>    cin >> limit;
>    for (int i = 0; i < limit; i++) {
>        int x;
>        cin >> x;
>        nums.push_back(x);
>    }
>    cout << "what number to find out ? :: ";
>    cin >> search;
>
>    for (int i = 0; i < limit; i++) {
>        if (search == nums[i]) {
>            found_index = i;
>            break;
>        }
>    }
>
>    if (found_index == -1) {
>        cout << "Number didnt found" << endl;
>    } else {
>        cout << "The number is found at index " << found_index << endl;
>    }
>    return 0;
> }
> ```

# 8. Write a C++ program Binary search.

> ```cpp
> // Binary search algorithm
> // 1. Get the array of numbers and the number to search.
> // 2. Sort the array in ascending order (if it's not already sorted).
> // 3. Find the middle index of the current search range.
> // 4. Check if the target number is at the middle index.
> // 5. If not, check whether the number is greater or smaller than the middle element.
> // 6. Update the search range (either left or right half of the array) and repeat.
> // 7. Repeat steps 3–6 until the number is found or range becomes invalid.
>
> #include <algorithm> // for the sort
> #include <iostream>
> using namespace std;
>
> int binary_search(int nums[], int limit, int search) {
>    int low = 0, high = limit - 1;
>
>    while (low <= high) {
>        int mid = (low + high) / 2;
>        if (nums[mid] == search) {
>            return mid;
>        } else if (nums[mid] < search) {
>            low = mid + 1;
>        } else {
>            high = mid - 1;
>        }
>    }
>    return -1;
> }
>
> int main() {
>    int nums[] = {23312743, 538732, 438972, 27294, 28754, 23, 543, 7, 5876, 24, 678, 69, 679};
>    int limit  = sizeof(nums) / sizeof(nums[0]);
>
>    int search = 23;
>    sort(nums, nums + limit); // from small to large sorting
>
>    int position = binary_search(nums, limit, search);
>
>    if (position != -1) {
>        cout << "The number is found" << endl;
>    } else {
>        cout << "The number is not found " << endl;
>    }
>
>    return 0;
> }
> ```

### In binary search take inputs from user

```cpp
#include <algorithm> // for the sort
#include <iostream>
using namespace std;

int binary_search(int nums[], int limit, int search) {
    int low = 0, high = limit - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == search) {
            return mid;
        } else if (nums[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int limit;
    cout << "Enter the number of elements :: ";
    cin >> limit;

    int nums[limit];
    cout << "Enter the elements :: ";
    for (int i = 0; i < limit; i++) {
        cin >> nums[i];
    }

    int search = 23;
    cout << "Enter the number to search :: ";
    cin >> search;

    sort(nums, nums + limit); // from small to large sorting

    int position = binary_search(nums, limit, search);

    if (position != -1) {
        cout << "The number is found" << endl;
    } else {
        cout << "The number is not found " << endl;
    }

    return 0;
}
```

# 9. Write a C++ code to Addition, Subtraction, Multiplication of two matrices?

### answer comming soon

```

```
