# 📊 STL Containers – Direct Methods (Cheat Sheet)

| **Method / Container** | **vector** | **list** | **queue** | **stack** | **set** | **map** | **Description**                           | **Example** **Code**                                           |
| ---------------------- | ---------- | -------- | --------- | --------- | ------- | ------- | ----------------------------------------- | -------------------------------------------------------------- |
| `[]`, `at()`           | ✔          | ❌       | ❌        | ❌        | ❌      | ✔       | Access element at a specific index or key | `v[0]; v.at(1); m["key"];`                                     |
| `push_back()`          | ✔          | ✔        | ❌        | ❌        | ❌      | ❌      | Add element to the **end**                | `v.push_back(10); l.push_back(20);`                            |
| `push_front()`         | ❌         | ✔        | ❌        | ❌        | ❌      | ❌      | Add element to the **front**              | `l.push_front(5);`                                             |
| `push()`               | ❌         | ❌       | ✔         | ✔         | ❌      | ❌      | Add element (queue: back, stack: top)     | `q.push(30); s.push(40);`                                      |
| `insert()`             | ✔          | ✔        | ❌        | ❌        | ✔       | ✔       | Insert element at position or key         | `v.insert(v.begin()+1,5); st.insert(10); m.insert({1,100});`   |
| `pop_back()`           | ✔          | ✔        | ❌        | ❌        | ❌      | ❌      | Remove the **last element**               | `v.pop_back(); l.pop_back();`                                  |
| `pop_front()`          | ❌         | ✔        | ❌        | ❌        | ❌      | ❌      | Remove the **first element**              | `l.pop_front();`                                               |
| `pop()`                | ❌         | ❌       | ✔         | ✔         | ❌      | ❌      | Remove element (queue: front, stack: top) | `q.pop(); s.pop();`                                            |
| `erase()`              | ✔          | ✔        | ❌        | ❌        | ✔       | ✔       | Remove element at position or key         | `v.erase(v.begin()+1); l.erase(it); st.erase(10); m.erase(1);` |
| `remove()`             | ❌         | ✔        | ❌        | ❌        | ❌      | ❌      | Remove all elements equal to a value      | `l.remove(2);`                                                 |
| `clear()`              | ✔          | ✔        | ❌        | ❌        | ✔       | ✔       | Remove **all elements**                   | `v.clear(); l.clear(); st.clear(); m.clear();`                 |
| `front()`              | ✔          | ✔        | ✔         | ❌        | ❌      | ❌      | Access the **first element**              | `v.front(); l.front(); q.front();`                             |
| `back()`               | ✔          | ✔        | ✔         | ❌        | ❌      | ❌      | Access the **last element**               | `v.back(); l.back(); q.back();`                                |
| `top()`                | ❌         | ❌       | ❌        | ✔         | ❌      | ❌      | Access the **top element** of the stack   | `s.top();`                                                     |
| `begin()/end()`        | ✔          | ✔        | ❌        | ❌        | ✔       | ✔       | Get **iterators** to start and end        | `for(auto it=v.begin(); it!=v.end(); ++it) {}`                 |
| `size()`               | ✔          | ✔        | ✔         | ✔         | ✔       | ✔       | Return number of elements                 | `v.size(); l.size(); q.size(); st.size(); m.size();`           |
| `empty()`              | ✔          | ✔        | ✔         | ✔         | ✔       | ✔       | Check if container has **no elements**    | `v.empty(); l.empty(); q.empty(); st.empty(); m.empty();`      |

---

### 🔑 Structure Types:

- **queue → FIFO**
- **stack → LIFO**
- **vector → Dynamic Array**
- **list → Doubly Linked List**
- **set → Balanced BST (sorted unique keys)**
- **map → Balanced BST (sorted key–value pairs)**

---
