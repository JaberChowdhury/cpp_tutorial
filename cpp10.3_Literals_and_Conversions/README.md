# Literals and Conversions

When we write an expression like 4.0 or "Goblin Warrior", we are using a literal. A literal is a way of expressing a fixed value in our code.

Like variables, literals also have a type. Rather than needing to explicitly state it, the compiler can infer the type of literal we’re using based on the exact syntax we use. For example,

- 6 is an int literal
- true and false are bool literals
- 4.0 is a double literal
- 4.0f (note the f suffix) is a float literal
- 'a' (straight single quotes) is a char literal - a single character
- "Goblin Warrior" (straight double quotes) is a char* literal. A char* is one of many ways to represent strings of characters.
- "Goblin Warrior"s (straight double quotes and s suffix) is a standard string literal, also known as a std::string literal.

```cpp
// Creating a float from a double literal
float MyNumber { 4.0 };

// Creating a string from a char* literal
string MyString { "Goblin Warrior" };
```

If preferred, we can add the f and s suffix to our floats and strings. The previous code could be written like this:

```cpp
float MyNumber { 4.0f };
string MyString { "Goblin Warrior"s };
```
