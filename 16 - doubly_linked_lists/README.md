
# Doubly Linked Lists

This repository contains implementations and exercises related to **doubly linked lists** in C, as part of the [Holberton School Low-Level Programming curriculum](https://github.com/Mollydayne/holbertonschool-low_level_programming).

## 📖 About

A **doubly linked list** is a data structure that consists of a sequence of nodes, where each node contains:
- Data (an integer, string, or any other data type).
- A pointer to the **next** node in the list.
- A pointer to the **previous** node in the list.

This directory contains implementations of fundamental operations for doubly linked lists, including:
- Adding nodes.
- Removing nodes.
- Traversing the list in both directions.
- Searching for nodes.

## 🚀 Files

| **File Name**           | **Description**                                                                 |
|--------------------------|---------------------------------------------------------------------------------|
| `0-print_dlistint.c`    | Prints all elements of a doubly linked list.                                    |
| `1-dlistint_len.c`      | Returns the number of elements in a doubly linked list.                         |
| `2-add_dnodeint.c`      | Adds a new node at the beginning of a doubly linked list.                       |
| `3-add_dnodeint_end.c`  | Adds a new node at the end of a doubly linked list.                             |
| `4-free_dlistint.c`     | Frees a doubly linked list.                                                     |
| `5-get_dnodeint.c`      | Retrieves the nth node of a doubly linked list.                                 |
| `6-sum_dlistint.c`      | Calculates the sum of all the data in a doubly linked list.                     |
| `7-insert_dnodeint.c`   | Inserts a new node at a specified position in a doubly linked list.             |
| `8-delete_dnodeint.c`   | Deletes the node at a specified index in a doubly linked list.                  |

## 🛠️ Compilation and Usage

All files can be compiled with the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output_file>
```

### Example:
To compile and test `0-print_dlistint.c`:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-print_dlistint.c -o print_list
./print_list
```

## 🌟 Key Concepts

- **Dynamic Memory Allocation:** Using `malloc` to allocate memory for nodes and `free` to deallocate.
- **Pointers:** Understanding and manipulating pointers for `next` and `prev` nodes.
- **Edge Cases:** Handling edge cases such as empty lists, lists with a single node, and invalid positions.

## 💡 How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/Mollydayne/holbertonschool-low_level_programming.git
   ```

2. Navigate to the directory:
   ```bash
   cd holbertonschool-low_level_programming/doubly_linked_lists
   ```

3. Compile and run the desired file.

## 📝 Author

-  :cherry_blossom: **Clarisse Perez** :cherry_blossom:

