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
