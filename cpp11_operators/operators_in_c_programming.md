### C divides the operators into the following groups:

- Arithmetic operators
- Assignment operators
- Comparison operators
- Logical operators
- Bitwise operators

## Arithmetic operator

| Operator | Name           | Description                            | Example |              code               |
| :------: | :------------- | :------------------------------------- | :-----: | :-----------------------------: |
|    +     | Addition       | Adds together two values               |  x + y  |     `printf("%d", 19 + 89)`     |
|    -     | Subtraction    | Subtracts one value from another       |  x - y  |     `printf("%d", 19 - 8)`      |
|    \*    | Multiplication | Multiplies two values                  | x \* y  |     `printf("%d", 19 * 89)`     |
|    /     | Division       | Divides one value by another           |  x / y  |    `printf("%d", 100 / 10)`     |
|    %     | Modulus        | Returns the division remainder         |  x % y  |    `printf("%d", 2827 % 28)`    |
|    ++    | Increment      | Increases the value of a variable by 1 |   ++x   | `int x = 10 ;printf("%d", ++x)` |
|    --    | Decrement      | Decreases the value of a variable by 1 |   --x   | `int y = 5 ; printf("%d", --y)` |

## In C programming, both `x++` (post-increment) and `++x` (pre-increment) are acceptable and commonly used. However, there is a difference in their behavior:

1. **`x++` (Post-increment)**: 
   - The value of `x` is returned first, and then `x` is incremented by 1.
   - Example:
     ```c
     int x = 5;
     int y = x++; // y gets the value 5, then x becomes 6
     ```

2. **`++x` (Pre-increment)**:
   - `x` is incremented first, and then the new value of `x` is returned.
   - Example:
     ```c
     int x = 5;
     int y = ++x; // x becomes 6, then y gets the value 6
     ```

The key difference is whether the increment happens before or after the value of `x` is used in an expression.



## Assignment Operators

| Operator | Example | Same As    |
| :------: | ------- | ---------- |
|    =     | x = 5   | x = 5      |
|    +=    | x += 3  | x = x + 3  |
|    -=    | x -= 3  | x = x - 3  |
|   \*=    | x \*= 3 | x = x \* 3 |
|    /=    | x /= 3  | x = x / 3  |
|    %=    | x %= 3  | x = x % 3  |
|    &=    | x &= 3  | x = x & 3  |
|   \|=    | x \|= 3 | x = x \| 3 |
|    ^=    | x ^= 3  | x = x ^ 3  |
|   >>=    | x >>= 3 | x = x >> 3 |
|   <<=    | x <<= 3 | x = x << 3 |

### Explanation 

### 1. `%=` (Modulus Assignment Operator)

- **নাম:** মডুলাস অ্যাসাইনমেন্ট
- **অর্থ:** `%=` অপারেটরটি একটি বামপাশের ভেরিয়েবলের মানকে ডানপাশের ভেরিয়েবলের দ্বারা ভাগ করে এবং ভাগশেষকে (remainder) আবার বামপাশের ভেরিয়েবলে সংরক্ষণ করে।

### কাজের পদ্ধতি:
যখন আপনি `a %= b;` ব্যবহার করেন, এটি নিচের সমান:
```
a = a % b;
```
এখানে, `a % b` হল `a` কে `b` দ্বারা ভাগ করার পরে প্রাপ্ত ভাগশেষ।

### উদাহরণ:

```c
#include <stdio.h>

int main() {
    int a = 10;  // a এর প্রাথমিক মান 10
    int b = 3;   // b এর প্রাথমিক মান 3
    
    a %= b;      // a = a % b (অর্থাৎ 10 % 3)
    
    printf("a এর মান: %d\n", a); // এটি 1 প্রদর্শন করবে
    
    return 0;
}
```

### উদাহরণের বিশ্লেষণ:

1. **প্রাথমিক মান:**
   - `a` এর মান 10।
   - `b` এর মান 3।

2. **অপারেশন:**
   - `a %= b;` এর মানে `a = a % b;`।
   - এখানে `10 % 3` হচ্ছে 1 (কারণ 10 কে 3 দ্বারা ভাগ করলে 3, 3, 3... এভাবে 3 বার যায়, আর 10 - (3 * 3) = 1)।

3. **ফলাফল:**
   - শেষ পর্যন্ত, `a` এর নতুন মান হবে 1।

### ব্যবহারের ক্ষেত্রে:
`%=` অপারেটরটি মূলত তখন ব্যবহার করা হয় যখন আপনাকে একটি সংখ্যার মধ্যে নির্দিষ্ট সংখ্যার ভাগশেষ সংরক্ষণ করতে হয়। উদাহরণস্বরূপ, এটি সাধারণত চক্রের সংখ্যা (looping), সংখ্যার সমতা যাচাই বা সঠিক অবস্থান নির্ধারণের জন্য ব্যবহৃত হয়। 

উদাহরণস্বরূপ:
- **ডেটা পরিসীমা:** যদি আপনি নিশ্চিত করতে চান যে একটি সংখ্যা একটি নির্দিষ্ট পরিসরের মধ্যে থাকবে, তাহলে `%=` ব্যবহার করতে পারেন। 

```c
int n = 17;
n %= 10;  // n এখন হবে 7 (17 % 10 = 7)
```

এভাবে `%=` অপারেটরটি সংখ্যা এবং গাণিতিক কার্যক্রমের সাথে কাজ করার জন্য একটি সহজ এবং কার্যকরী উপায়।
### ২. `&=` (বিটওয়াইজ AND অ্যাসাইনমেন্ট)
- **নাম:** বিটওয়াইজ AND অ্যাসাইনমেন্ট
- **অর্থ:** এই অপারেটরটি বামপাশের এবং ডানপাশের ভেরিয়েবলগুলোর প্রতিটি বিটের জন্য বিটওয়াইজ AND অপারেশন করে এবং ফলাফল বামপাশের ভেরিয়েবলে সংরক্ষণ করে।
- **উদাহরণ:**
  ```c
  int a = 5;  // ৫ এর বাইনারি মান 0101
  a &= 3;     // ৩ এর বাইনারি মান 0011
  ```
  **বিবরণ:** 
  - বিটওয়াইজ AND অপারেশন: 
    - 0101 (5)
    - 0011 (3)
    - ------------------
    - 0001 (ফলাফল)
  - ফলে, `a` হবে 1 (কারণ 5 AND 3 এর ফলাফল 1)।

### ৩. `|=` (বিটওয়াইজ OR অ্যাসাইনমেন্ট)
- **নাম:** বিটওয়াইজ OR অ্যাসাইনমেন্ট
- **অর্থ:** এই অপারেটরটি বামপাশের এবং ডানপাশের ভেরিয়েবলগুলোর প্রতিটি বিটের জন্য বিটওয়াইজ OR অপারেশন করে এবং ফলাফল বামপাশের ভেরিয়েবলে সংরক্ষণ করে।
- **উদাহরণ:**
  ```c
  int a = 5;  // ৫ এর বাইনারি মান 0101
  a |= 3;     // ৩ এর বাইনারি মান 0011
  ```
  **বিবরণ:**
  - বিটওয়াইজ OR অপারেশন:
    - 0101 (5)
    - 0011 (3)
    - ------------------
    - 0111 (ফলাফল)
  - ফলে, `a` হবে 7 (কারণ 5 OR 3 এর ফলাফল 7)।

### ৪. `^=` (বিটওয়াইজ XOR অ্যাসাইনমেন্ট)
- **নাম:** বিটওয়াইজ XOR অ্যাসাইনমেন্ট
- **অর্থ:** এই অপারেটরটি বামপাশের এবং ডানপাশের ভেরিয়েবলগুলোর প্রতিটি বিটের জন্য বিটওয়াইজ XOR অপারেশন করে এবং ফলাফল বামপাশের ভেরিয়েবলে সংরক্ষণ করে।
- **উদাহরণ:**
  ```c
  int a = 5;  // ৫ এর বাইনারি মান 0101
  a ^= 3;     // ৩ এর বাইনারি মান 0011
  ```
  **বিবরণ:**
  - বিটওয়াইজ XOR অপারেশন:
    - 0101 (5)
    - 0011 (3)
    - ------------------
    - 0110 (ফলাফল)
  - ফলে, `a` হবে 6 (কারণ 5 XOR 3 এর ফলাফল 6)।

### ৫. `>>=` (রাইট শিফট অ্যাসাইনমেন্ট)
- **নাম:** রাইট শিফট অ্যাসাইনমেন্ট
- **অর্থ:** এই অপারেটরটি বামপাশের ভেরিয়েবলের বিটগুলোকে ডানদিকে শিফট করে, এবং শিফট করার পর ডানপাশে শূন্য বিট যোগ করে এবং ফলাফল বামপাশের ভেরিয়েবলে সংরক্ষণ করে।
- **উদাহরণ:**
  ```c
  int a = 8;  // ৮ এর বাইনারি মান 1000
  a >>= 2;    // ২ বিট ডানদিকে শিফট
  ```
  **বিবরণ:**
  - 1000 (8)
  - ডানদিকে 2 বিট শিফট করলে হবে 0010 (ফলাফল)
  - ফলে, `a` হবে 2 (কারণ 8 ডানদিকে 2 বিট শিফট করা হলে 2 হবে)।

### ৬. `<<=` (লেফট শিফট অ্যাসাইনমেন্ট)
- **নাম:** লেফট শিফট অ্যাসাইনমেন্ট
- **অর্থ:** এই অপারেটরটি বামপাশের ভেরিয়েবলের বিটগুলোকে বামদিকে শিফট করে, এবং শিফট করার পর ডানপাশে শূন্য বিট যোগ করে এবং ফলাফল বামপাশের ভেরিয়েবলে সংরক্ষণ করে।
- **উদাহরণ:**
  ```c
  int a = 3;  // ৩ এর বাইনারি মান 0011
  a <<= 2;    // ২ বিট বামদিকে শিফট
  ```
  **বিবরণ:**
  - 0011 (3)
  - বামদিকে 2 বিট শিফট করলে হবে 1100 (ফলাফল)
  - ফলে, `a` হবে 12 (কারণ 3 বামদিকে 2 বিট শিফট করা হলে 12 হবে)।



### Comparison Operators
| Operator | Name                     | Example |                                                                 Description |
| :------: | ------------------------ | ------- | --------------------------------------------------------------------------: |
|    ==    | Equal to                 | x == y  |                                           Returns 1 if the values are equal |
|    !=    | Not equal                | x != y  |                                       Returns 1 if the values are not equal |
|    >     | Greater than             | x > y   |               Returns 1 if the first value is greater than the second value |
|    <     | Less than                | x < y   |                  Returns 1 if the first value is less than the second value |
|    >=    | Greater than or equal to | x >= y  | Returns 1 if the first value is greater than, or equal to, the second value |
|    <=    | Less than or equal to    | x <= y  |    Returns 1 if the first value is less than, or equal to, the second value |


## Logical Operator
| Operator | Name | Example            | Description                                      |
| :------: | ---- | ------------------ | ------------------------------------------------ |
|    &&    | AND  | x < 5 && x < 10    | Returns 1 if both statements are true            |
|   \|\|   | OR   | x < 5 \|\| x < 4   | Returns 1 if one of the statements is true       |
|    !     | NOT  | !(x < 5 && x < 10) | Reverse the result, returns 0 if the result is 1 |
