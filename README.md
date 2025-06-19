# Stack Implementation Using Dynamic Array in C++

A lightweight, template-based stack class built on top of the `clsMyQueueArr` class, which in turn uses a custom dynamic array (`clsDynamicArray`). This class provides basic stack behavior (LIFO – Last In, First Out) by inserting new elements at the beginning of the internal array.

---

## 📦 Features

- LIFO stack behavior
- Uses custom queue and dynamic array as a base
- Supports viewing the top and bottom of the stack
- Easy integration and extensibility

---

## 🧪 Example Usage

```cpp
#include <iostream>
#include "clsMyStackArr.h"

int main() {
    clsMyStackArr<int> myStack;

    myStack.push(100);
    myStack.push(200);
    myStack.push(300);

    std::cout << "Top: " << myStack.Top() << std::endl;     // 300
    std::cout << "Bottom: " << myStack.Bottom() << std::endl; // 100

    // Since this extends clsMyQueueArr, you can also access other methods like:
    myStack.Print(); // Output: 300 200 100
}
````

---

## 🧰 Public Methods

| Method        | Description                                     |
| ------------- | ----------------------------------------------- |
| `push(value)` | Pushes a new item onto the top of the stack     |
| `Top()`       | Returns the item at the top of the stack        |
| `Bottom()`    | Returns the item at the bottom (oldest element) |
| `Print()`     | Inherited – prints all items in stack order     |
| `Size()`      | Inherited – returns number of items             |
| `IsEmpty()`   | Inherited – checks if stack is empty            |
| `Clear()`     | Inherited – clears all items                    |
| `Reverse()`   | Inherited – reverses the stack order            |

---

## 🧱 Inheritance Structure

```
clsDynamicArray<T>
       ↑
clsMyQueueArr<T>
       ↑
clsMyStackArr<T>
```

Each layer adds additional functionality:

* `clsDynamicArray` handles raw dynamic array operations.
* `clsMyQueueArr` implements queue logic using `clsDynamicArray`.
* `clsMyStackArr` overrides `push()` to behave like a stack.

---

## 📚 Use Case

Perfect for:

* Learning inheritance in C++
* Understanding how stacks and queues can be built on top of arrays
* Educational demos and exercises

---

## 🔧 Dependencies

* `clsDynamicArray.h`
* `clsMyQueueArr.h`

Include all related `.h` files and then import `clsMyStackArr.h` in your main project.

---

## 🧾 License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for full details.

