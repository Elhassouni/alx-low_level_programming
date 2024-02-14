# Memory Allocation in C: `malloc` and `free` 🧠

## Table of Contents
- [Difference between Automatic and Dynamic Allocation](#difference-between-automatic-and-dynamic-allocation)
- [What is `malloc` and `free` and How to Use Them](#what-is-malloc-and-free-and-how-to-use-them)
- [Why and When to Use `malloc`](#why-and-when-to-use-malloc)
- [How to Use Valgrind to Check for Memory Leaks](#how-to-use-valgrind-to-check-for-memory-leaks)

---

## Difference between Automatic and Dynamic Allocation 🔄

In C programming, memory allocation can occur in two main ways: automatic and dynamic.

- **Automatic Allocation:**
  - Memory is allocated at compile-time or runtime with a fixed, predetermined size.
  - Variables are typically stored in the stack memory.
  - The lifetime of these variables is limited to the scope in which they are defined.

- **Dynamic Allocation:**
  - Memory is allocated during runtime, and the size can vary.
  - Variables are stored in the heap memory.
  - The lifetime of dynamically allocated memory extends until explicitly deallocated by the programmer.

## What is `malloc` and `free` and How to Use Them 🚀

- **`malloc`:**
  - `malloc` stands for "memory allocation."
  - It is a standard library function in C used to dynamically allocate a specified amount of memory.
  - Syntax: `void *malloc(size_t size);`
  - Example:
    ```c
    char *str = (char *)malloc(10);
    ```

- **`free`:**
  - `free` is used to deallocate memory previously allocated by `malloc`.
  - Syntax: `void free(void *ptr);`
  - Example:
    ```c
    free(str);
    ```

## Why and When to Use `malloc` 🤔

- **Why Use `malloc`:**
  - Dynamic memory allocation is useful when you need memory that:
    - Persists beyond the scope of the current function.
    - Has a size determined during runtime.
    - Should be shared among different parts of the program.

- **When to Use `malloc`:**
  - Use `malloc` when you need to allocate memory dynamically and the size is not known until runtime.

## How to Use Valgrind to Check for Memory Leaks 🕵️‍♂️

- **Valgrind:**
  - Valgrind is a tool for detecting memory leaks, memory corruption, and other memory-related errors in C programs.
  - To use Valgrind, compile your program with debugging symbols (`-g` flag), and then run it with Valgrind:
    ```bash
    gcc -g your_program.c -o your_program
    valgrind ./your_program
    ```
  - Valgrind will provide information about memory leaks and other issues in your program.

---


