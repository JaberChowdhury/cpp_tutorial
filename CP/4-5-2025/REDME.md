# A - Full Moon

Takahashi likes full moons.

Let today be **day 1**. The first day on or after today on which he can see a full moon is **day `M`**. After that, he can see a full moon every **`P`** days — that is, on day `M`, `M + P`, `M + 2P`, and so on.

Your task is to find the number of days **from day 1 to day `N`, inclusive**, on which Takahashi can see a full moon.

---

### Constraints

- $1 \leq N \leq 2 \times 10^5$
- $1 \leq M \leq P \leq 2 \times 10^5$
- All input values are integers.

---

### Input

The input is given in the following format:

```
N M P
```

---

### Output

Print the number of days **from day 1 to day `N`**, inclusive, on which Takahashi can see a full moon.

---

### Sample 1

**Input**

```
13 3 5
```

**Output**

```
3
```

**Explanation**

Takahashi can see a full moon on:

- Day 3
- Day 8
- Day 13
- (Day 18 is after day 13, so not counted)

So the answer is `3`.

---

### Sample 2

**Input**

```
5 6 6
```

**Output**

```
0
```

**Explanation**

There is no full moon between day 1 and day 5, inclusive.

---

### Sample 3

**Input**

```
200000 314 318
```

**Output**

```
628
```

---

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m, p, x = 0;
    cin >> n >> m >> p;

    for (int i = m; i <= n; i += p) {
        x++;
    }

    cout << x << endl;
    return 0;
}
```

# B - Square

A square of **positive** (strictly greater than 0) area is located on the coordinate plane, with sides **parallel to the coordinate axes**. You are given the coordinates of its corners, in random order. Your task is to find the **area** of the square.

---

### Input

Each test consists of several test cases. The first line contains one integer `t` — the number of test cases.

- $1 \leq t \leq 100$

Each test case contains four lines. Each line contains two integers `x_i`, `y_i`:

- $-1000 \leq x_i, y_i \leq 1000$

It is guaranteed that the four given points form a square with:

- sides parallel to the coordinate axes,
- strictly positive area.

---

### Output

For each test case, print a single integer — the area of the square.

---

### Example

**Input**

```
3
1 2
4 5
1 5
4 2
-1 1
1 -1
1 1
-1 -1
45 11
45 39
17 11
17 39
```

**Output**

```
9
4
784
```

---

### Explanation

- **Test case 1**: The square has side length 3 (from x=1 to x=4 or y=2 to y=5), so area = 3×3 = 9.
- **Test case 2**: Side length = 2, so area = 4.
- **Test case 3**: Side length = 28, so area = 784.

---
