## Structures

Structures (also called structs) are `a way` to group several related variables into one place. Each variable in the structure is known as a member of the structure

```cpp
struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable
```

## Named Structures

By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

```cpp
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```
