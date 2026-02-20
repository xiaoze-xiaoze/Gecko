# Gecko

[English](#english) | [中文](#chinese)

<a name="english"></a>
## 🦎 Gecko

Gecko is an educational data structure library written in modern C++23. It aims to provide clear, generic implementations of common data structures while leveraging recent C++ features like `std::expected` for error handling.

### Features

- **Modern C++**: Built with C++23 standards.
- **Header-only**: Easy to integrate, just include the headers.
- **Type-safe**: Extensive use of templates and strong typing.
- **Error Handling**: Uses `std::expected` for robust error management without exceptions.

### Requirements

- A C++ compiler supporting C++23 (e.g., GCC 13+, Clang 16+, MSVC 19.36+).
- CMake 3.16 or higher (for building tests/examples).

### Project Structure

```
Gecko
├── CMakeLists.txt
├── README.md
├── src
│   ├── Error
│   │   └── Error.hpp
│   ├── Graph
│   │   └── AdjacencyMatrixGraph.hpp
│   ├── Hash
│   │   └── Hash.hpp
│   ├── Heap
│   │   └── Heap.hpp
│   ├── LinearList
│   │   ├── CircularDoubleLinkedList.hpp
│   │   ├── CircularLinkedList.hpp
│   │   ├── DoubleLinkedList.hpp
│   │   ├── LinkedList.hpp
│   │   ├── SequentialList.hpp
│   │   └── StaticLinkedList.hpp
│   ├── Queue
│   │   ├── CircularDequeue.hpp
│   │   ├── CircularQueue.hpp
│   │   ├── ListDequeue.hpp
│   │   └── ListQueue.hpp
│   ├── Random
│   │   └── Random.hpp
│   ├── SelectionAlgorithms
│   │   └── Selection.hpp
│   ├── Set
│   │   └── UnionFindSet.hpp
│   ├── SortingAlgorithms
│   │   └── Sorting.hpp
│   ├── Stack
│   │   ├── ListStack.hpp
│   │   └── VectorStack.hpp
│   ├── String
│   │   └── String.hpp
│   ├── Tree
│   │   ├── AVLTree.hpp
│   │   ├── BinarySearchTree.hpp
│   │   ├── BinaryTree.hpp
│   │   └── RedBlackTree.hpp
│   └── main.cpp
└── build/
```

### Usage

Since Gecko is a header-only library, you can simply include the relevant header files in your project.

```cpp
#include "LinearList/LinkedList.hpp"
#include "Error/Error.hpp"
#include <iostream>

int main() {
    LinkList<int> list;
    
    // Add elements
    list.pushBack(10);
    list.pushBack(20);

    // Using C++23 std::expected for error handling
    auto result = list.get(0);
    if (result) {
        std::cout << "Element at index 0: " << *result << std::endl;
    } else {
        std::cerr << "Error: " << error_message(result.error()) << std::endl;
    }
    
    return 0;
}
```

### Build

To build the project and run tests:

```bash
git clone https://github.com/xiaoze-xiaoze/Gecko.git
cd Gecko
mkdir build && cd build
cmake ..
cmake --build .
```

---

<a name="chinese"></a>
## 🦎 Gecko (中文)

Gecko 是一个使用现代 C++23 编写的教学用数据结构库。它的目标是在学习数据结构的同时，探索和实践现代 C++ 的新特性（如 `std::expected`），提供清晰、泛型的实现。

### 特性

- **现代 C++**: 基于 C++23 标准构建。
- **Header-only**: 仅需包含头文件即可使用，无需编译库文件。
- **类型安全**: 广泛使用模板和强类型系统。
- **错误处理**: 使用 `std::expected` 进行健壮的错误管理，避免滥用异常。

### 环境要求

- 支持 C++23 的编译器 (如 GCC 13+, Clang 16+, MSVC 19.36+)。
- CMake 3.16 或更高版本。

### 项目结构

```
Gecko
├── CMakeLists.txt
├── README.md
├── src
│   ├── Error
│   │   └── Error.hpp
│   ├── Graph
│   │   └── AdjacencyMatrixGraph.hpp
│   ├── Hash
│   │   └── Hash.hpp
│   ├── Heap
│   │   └── Heap.hpp
│   ├── LinearList
│   │   ├── CircularDoubleLinkedList.hpp
│   │   ├── CircularLinkedList.hpp
│   │   ├── DoubleLinkedList.hpp
│   │   ├── LinkedList.hpp
│   │   ├── SequentialList.hpp
│   │   └── StaticLinkedList.hpp
│   ├── Queue
│   │   ├── CircularDequeue.hpp
│   │   ├── CircularQueue.hpp
│   │   ├── ListDequeue.hpp
│   │   └── ListQueue.hpp
│   ├── Random
│   │   └── Random.hpp
│   ├── SelectionAlgorithms
│   │   └── Selection.hpp
│   ├── Set
│   │   └── UnionFindSet.hpp
│   ├── SortingAlgorithms
│   │   └── Sorting.hpp
│   ├── Stack
│   │   ├── ListStack.hpp
│   │   └── VectorStack.hpp
│   ├── String
│   │   └── String.hpp
│   ├── Tree
│   │   ├── AVLTree.hpp
│   │   ├── BinarySearchTree.hpp
│   │   ├── BinaryTree.hpp
│   │   └── RedBlackTree.hpp
│   └── main.cpp
└── build/
```

### 使用方法

Gecko 是一个 Header-only 库，您只需将 `src` 目录下的头文件包含到您的项目中即可。

```cpp
#include "LinearList/LinkedList.hpp"
#include "Error/Error.hpp"
#include <iostream>

int main() {
    LinkList<int> list;
    
    // 添加元素
    list.pushBack(10);
    list.pushBack(20);

    // 使用 C++23 std::expected 进行错误处理
    auto result = list.get(0);
    if (result) {
        std::cout << "Element at index 0: " << *result << std::endl;
    } else {
        std::cerr << "Error: " << error_message(result.error()) << std::endl;
    }
    
    return 0;
}
```

### 构建

构建项目及运行测试：

```bash
git clone https://github.com/xiaoze-xiaoze/Gecko.git
cd Gecko
mkdir build && cd build
cmake ..
cmake --build .
```
