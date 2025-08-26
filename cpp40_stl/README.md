# 📊 STL Containers – Direct Methods (Cheat Sheet)

| Method / Container | vector | list | queue | stack | set | map |
| ------------------ | ------ | ---- | ----- | ----- | --- | --- |
| `[]`, `at()`       | ✔      | ❌   | ❌    | ❌    | ❌  | ✔   |
| `push_back()`      | ✔      | ✔    | ❌    | ❌    | ❌  | ❌  |
| `push_front()`     | ❌     | ✔    | ❌    | ❌    | ❌  | ❌  |
| `push()`           | ❌     | ❌   | ✔     | ✔     | ❌  | ❌  |
| `insert()`         | ✔      | ✔    | ❌    | ❌    | ✔   | ✔   |
| `pop_back()`       | ✔      | ✔    | ❌    | ❌    | ❌  | ❌  |
| `pop_front()`      | ❌     | ✔    | ❌    | ❌    | ❌  | ❌  |
| `pop()`            | ❌     | ❌   | ✔     | ✔     | ❌  | ❌  |
| `erase()`          | ✔      | ✔    | ❌    | ❌    | ✔   | ✔   |
| `remove()`         | ❌     | ✔    | ❌    | ❌    | ❌  | ❌  |
| `clear()`          | ✔      | ✔    | ❌    | ❌    | ✔   | ✔   |
| `front()`          | ✔      | ✔    | ✔     | ❌    | ❌  | ❌  |
| `back()`           | ✔      | ✔    | ✔     | ❌    | ❌  | ❌  |
| `top()`            | ❌     | ❌   | ❌    | ✔     | ❌  | ❌  |
| `begin()/end()`    | ✔      | ✔    | ❌    | ❌    | ✔   | ✔   |
| `size()`           | ✔      | ✔    | ✔     | ✔     | ✔   | ✔   |
| `empty()`          | ✔      | ✔    | ✔     | ✔     | ✔   | ✔   |

---

### 🔑 Structure Types:

- **queue → FIFO**
- **stack → LIFO**
- **vector → Dynamic Array**
- **list → Doubly Linked List**
- **set → Balanced BST (sorted unique keys)**
- **map → Balanced BST (sorted key–value pairs)**

---
