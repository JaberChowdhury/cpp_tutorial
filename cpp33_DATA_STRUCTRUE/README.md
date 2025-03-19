# Data Structure

`Data structures are used to store and organize data`. An array is an example of a data structure, which allows multiple elements to be stored in a single variable.

C++ includes many other data structures as well, each is used to handle data in different ways.

These are part of the C++ STL, which stands for The **`Standard Template Library`**.

## Components of STL

The components of STL are the features provided by **`Standard Template Library`** (STL) in C++ that can be classified into 4 types:

1. Containers
2. Algorithms
3. Iterators
4. Functors

## C++ STL

STL is a library that consist of different data structures and algorithms to effectively store and manipulate data.

> Using the right data structure and algorithm makes your program run faster, especially when working with lots of data.

| Data Structure | Description                                                                                                                                                           |
| -------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Vector         | Stores elements like an `array` but can dynamically change in size. Adding and removing of elements are usually done at the end. `Elements can be accessed by index.` |
| List           | Stores elements sequentially, where each element is connected to the next. Adding and removing of elements can be done at both ends. `Not accessible by index.`       |
| Stack          | Stores elements in a specific order, called LIFO (Last In, First Out), where elements can only be added and removed from the top. `Not accessible by index.`          |
| Queue          | Stores elements in a specific order, called FIFO (First In, First Out), where elements are added at the end and removed from the front. `Not accessible by index.`    |
| Deque          | Stores elements in a double-ended queue, where elements can be added and removed from both ends. `Elements can be accessed by index.`                                 |
| Set            | Stores unique elements.`Not accessible by index.`                                                                                                                     |
| Map            | Stores elements in "key/value" pairs.`Accessible by keys (not by index).`                                                                                             |

```cpp
 // Include the vector library
#include <vector>
// Include the list library
#include <list>
// Include the set library
#include <set>
// Include the map library
#include <map>
// Include the stack library
#include <stack>
// Include the queue library
#include <queue>
```

## Key Concepts of the STL

The key components of the STL consist of containers, iterators, and algorithms, and the relationship betweem them:

1. `Containers` are data structures that provides a way to store data, like vectors, lists, etc.
2. `Iterators` are objects used to access elements of a data structure.
3. `Algorithms` include functions, like sort() and find(), that perform operations on data structures through iterators.

<br />
<br />

# vector

Vector is like Array.The difference between vector and array is that we have to specify the length of an array but in vector we dont have to do that.Vector is flexible .but we have to add this vector by adding a header.

```cpp
 #include <vector>
```

```cpp
// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print vector elements
for (string car : cars) {
  cout << car << "\n";
}
```

### Create a vector called cars that will store strings

```cpp
 vector<string> names = {"Jaber", "Tuhin", "Masum", "Sifat", "Soykot", "Yeasin", "Maruf", "Sabbir"};
```

### update a vector

```cpp
names[3] = "Sifat bro";
```

### Add Vector Elements

```cpp
names.push_back("Abrar");
names.push_back("Abrar");
```

### Remove Vector Elements

```cpp
names.pop_back();
```

### Vector Size

```cpp
cout << "Size of vector names " << names.size() << endl;
```

### Check if a Vector is Empty

```cpp
cout << "IS names vectis empty ? " << names.empty() << endl;
```

### Loop Through a Vector

```cpp
vector<double> weights = {322.43, 87346.3264, 845.273, 23326.876, 983247.9876};
```

### Loop Through a Vector

```cpp
for (int i = 0; i < weights.size(); i++)
{
  cout << "Your score is " << weights[i] << endl;
}
```

# List

A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.

However, two major differences between lists and vectors are:

1. You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

2. Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

## add header to use list data type

```cpp
#include <list>
```

## create a list

```cpp
list<string> pencil_variants={"2B","3B","4B","5B","6B","7B","8B","HB"};
```

## access a list

```cpp
pencil_variants.front();
pencil_variants.back();
```

## change a list elements

```cpp
pencil_variants.front()="haha";
pencil_variants.back()="nono";
```

## add list elements

```cpp
pencil_variants.push_back("16B");
pencil_variants.push_front("23B");
```

## list size

```cpp
pencil_variants.size();
```

## check if a list is empty

```cpp
pencil_variants.empty();
```

## loop through a list

```cpp
for(string pencil : pencil_variants){
  cout << pencil << endl;
}
```

## List vs Vector

| Method                 | `std::list`                                  | `std::vector`                                |
| ---------------------- | -------------------------------------------- | -------------------------------------------- |
| **Access Elements**    | ✅ `front()`, `back()`                       | ✅ `front()`, `back()`, `at()`, `operator[]` |
| **Modify Elements**    | ✅ `push_front()`, `push_back()`             | ✅ `push_back()`, `emplace_back()`           |
|                        | ✅ `pop_front()`, `pop_back()`               | ✅ `pop_back()`                              |
| **Insert**             | ✅ `insert()` (anywhere, O(1) with iterator) | ✅ `insert()` (shifts elements, O(n) worst)  |
| **Emplace**            | ✅ `emplace()` (efficient, anywhere)         | ✅ `emplace()` (efficient, anywhere)         |
|                        | ✅ `emplace_front()`, `emplace_back()`       | ✅ `emplace_back()`                          |
| **Erase**              | ✅ `erase()` (O(1) with iterator)            | ✅ `erase()` (O(n) due to shifting)          |
|                        | ✅ `remove()`, `remove_if()` (efficient)     | ❌ Not available                             |
| **Clear**              | ✅ `clear()`                                 | ✅ `clear()`                                 |
| **Resize**             | ❌ Not available                             | ✅ `resize()`                                |
| **Size & Capacity**    | ✅ `size()`                                  | ✅ `size()`, `capacity()`, `reserve()`       |
|                        | ❌ No `capacity()` or `reserve()`            | ✅ `shrink_to_fit()`                         |
| **Iteration**          | ✅ `begin()`, `end()`                        | ✅ `begin()`, `end()`                        |
|                        | ✅ `rbegin()`, `rend()`                      | ✅ `rbegin()`, `rend()`                      |
| **Splicing & Merging** | ✅ `splice()`, `merge()`                     | ❌ Not available                             |
| **Sorting**            | ✅ `sort()` (optimized for linked list)      | ❌ Not available (use `std::sort()`)         |
| **Reverse**            | ✅ `reverse()`                               | ❌ Not available (use `std::reverse()`)      |
| **Swapping**           | ✅ `swap()`                                  | ✅ `swap()`                                  |
| **Checking Empty**     | ✅ `empty()`                                 | ✅ `empty()`                                 |
| **Finding Elements**   | ✅ `find()` (manual iteration)               | ✅ `find()` (via `std::find()`)              |
