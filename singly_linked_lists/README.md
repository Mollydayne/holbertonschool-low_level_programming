
# **Singly Linked Lists**

This repository contains implementations and exercises related to **singly linked lists** in the C programming language. A singly linked list is a fundamental data structure where each node points to the next node in the sequence, with the last node pointing to `NULL`.

## **Project Structure**
This project is part of the [Holberton School's Low-Level Programming curriculum](https://github.com/Mollydayne/holbertonschool-low_level_programming). It explores the creation, manipulation, and freeing of singly linked lists.

### **Directory: singly_linked_lists**
Path: [holbertonschool-low_level_programming/singly_linked_lists](https://github.com/Mollydayne/holbertonschool-low_level_programming/tree/main/singly_linked_lists)

---

## **Learning Objectives**
By completing this project, you will learn:
- How to define and manipulate singly linked lists.
- The importance of dynamic memory allocation in linked list operations.
- Best practices for freeing memory and avoiding memory leaks.
- How to write functions to perform common operations on linked lists.

---

## **Files and Descriptions**

| File Name                | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| `0-print_list.c`         | Function that prints all the elements of a `list_t` list.                  |
| `1-list_len.c`           | Function that returns the number of elements in a `list_t` list.           |
| `2-add_node.c`           | Function that adds a new node at the beginning of a `list_t` list.         |
| `3-add_node_end.c`       | Function that adds a new node at the end of a `list_t` list.               |
| `4-free_list.c`          | Function that frees a `list_t` list.                                       |
| `lists.h`                | Header file containing the definition of the `list_t` struct and prototypes. |
| `main.c` (test files)    | Example test cases to demonstrate the functionality of the above functions.|

---

## **How to Use**

### **Compilation**
All programs are written in C and can be compiled using the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic <source_file.c> -o <output_file>
```
For example, to compile `0-print_list.c` with a test file:
```bash
gcc -Wall -Werror -Wextra -pedantic 0-print_list.c main.c -o print_list
```

### **Execution**
Run the compiled program as follows:
```bash
./print_list
```

---

## **Functions**

### `size_t print_list(const list_t *h);`
- **Description**: Prints all elements of a `list_t` list.
- **Return**: Number of nodes in the list.
- **Example**:
  ```
  [5] Hello
  [5] World
  ```

### `size_t list_len(const list_t *h);`
- **Description**: Returns the number of elements in a `list_t` list.
- **Return**: Total number of nodes.

### `list_t *add_node(list_t **head, const char *str);`
- **Description**: Adds a new node at the beginning of the list.
- **Return**: Address of the new element, or `NULL` on failure.

### `list_t *add_node_end(list_t **head, const char *str);`
- **Description**: Adds a new node at the end of the list.
- **Return**: Address of the new element, or `NULL` on failure.

### `void free_list(list_t *head);`
- **Description**: Frees all nodes of a `list_t` list.

---

## **Testing**
### Example Test Cases
Each function comes with test cases in `main.c`. To run them:
1. Compile the function with the corresponding test file.
2. Execute the binary.

#### Example:
```bash
gcc -Wall -Werror -Wextra -pedantic 0-print_list.c main.c -o print_list
./print_list
```

---

## **Checklist**
- [x] All functions handle edge cases (e.g., empty lists).
- [x] Memory allocation failures are handled gracefully.
- [x] Code conforms to the Betty coding style.
- [x] No memory leaks (verified with `valgrind`).

---

## **Resources**
- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))
- [Singly Linked List - GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/linked-list/singly-linked-list/)
- [Betty Style](https://github.com/holbertonschool/Betty)

---

## **Author**
Clarisse Perez
