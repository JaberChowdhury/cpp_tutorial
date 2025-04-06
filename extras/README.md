# TODO

- sort an array(2 way)
- split an array
- filter an array
- reverse an array
- Number methods
- Pattern printing
- recursion
- Class and object
- oop
- Async. programming
- Worker based task

# Project

- Terminal Todo app
- Calculator app

| Feature       | **Pre-Increment (`++i`)**                                 | **Post-Increment (`i++`)**                                 |
| ------------- | --------------------------------------------------------- | ---------------------------------------------------------- |
| **Operation** | Increments `i` first, then returns the **updated** value. | Returns the **original** value first, then increments `i`. |
| **Speed**     | Generally faster (no temporary copy needed).              | Slightly slower (creates a temporary copy).                |
| **Example**   | `int a = ++i;` → `i` increases first, then `a = i`.       | `int a = i++;` → `a = i` first, then `i` increases.        |
| **Use Case**  | Preferred in loops when the old value isn’t needed.       | Used when the old value is needed before incrementing.     |

### Example Code:

```cpp
int i = 5;
int a = ++i; // a = 6, i = 6 (increment first, then assign)
int b = i++; // b = 6, i = 7 (assign first, then increment)
```

### Key Takeaway:

- Use `++i` when you don’t need the old value (more efficient).
- Use `i++` when you need the original value before incrementing.
