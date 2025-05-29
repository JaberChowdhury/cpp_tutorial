# Rectangle Cutting Problem

https://vjudge.net/contest/713884#problem/D

## Problem Description

Bob has a rectangle of size a×b. He wants to:

1. Cut the rectangle into two parts parallel to one of its sides
2. Form a new rectangle using these parts
3. The parts can be rotated and moved as needed

**Note:** Rectangles rotated by 90° are considered the same (e.g., 6×4 and 4×6 are identical)

### Example Scenarios

- **Possible Case**: A 2×6 rectangle

  - Can be cut into two 2×3 rectangles
  - These can form a 4×3 rectangle
  - Valid because 4×3 is different from 2×6

- **Impossible Case**: A 2×1 rectangle
  - Can only be cut into two 1×1 squares
  - Can only form 1×2 or 2×1 rectangles
  - Invalid because these are considered the same

## Input Format

```
t           // Number of test cases (1 ≤ t ≤ 10^4)
a b         // Rectangle dimensions (1 ≤ a,b ≤ 10^9)
```

## Output Format

For each test case, print:

- `"Yes"` if a different rectangle can be formed
- `"No"` if it's impossible

Note: Output is case-insensitive ("YES", "yes", "Yes" are all valid)

## Sample Cases

### Input

```
7
1 1
2 1
2 6
3 2
2 2
2 4
6 3
```

### Output

```
No
No
Yes
Yes
Yes
Yes
No
```

## Examples Explained

1. **Case 1×1**:

   - Cannot be cut into two rectangles
   - Result: No

2. **Case 3×2**:

   - Can be cut into two 3×1 rectangles
   - Can form a 1×6 rectangle
   - Result: Yes

3. **Case 2×2**:
   - Can be cut into two 1×2 rectangles
   - Can form a 1×4 rectangle
   - Result: Yes

---
