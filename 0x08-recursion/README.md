# Recursion in Programming

## Overview

Recursion is a programming concept where a function calls itself in its own
definition. It is a powerful technique used in various algorithms and
problem-solving strategies. 

Understanding recursion is fundamental for any programmer.

This repository provides examples and explanations to help you grasp the concept of recursion.

## Table of Contents

- [What is Recursion?](#what-is-recursion)
- [How Recursion Works](#how-recursion-works)
- [Base Case](#base-case)
- [Examples](#examples)
- [Benefits of Recursion](#benefits-of-recursion)
- [Challenges](#challenges)
- [Best Practices](#best-practices)
- [Contributing](#contributing)
- [License](#license)

## What is Recursion?

Recursion is a programming technique where a function calls itself in its
definition. It is a way of solving problems by breaking them down into smaller
subproblems. Each recursive call works on a smaller instance of the problem
until a base case is reached.

## How Recursion Works

1. **Base Case:**
   - Every recursive algorithm must have a base case that defines when
   the recursion should stop. Without a base case, the function would continue calling itself indefinitely.

2. **Recursive Call:**
   - The function calls itself with a modified input, typically moving towards the base case.

3. **Termination:**
   - The recursion continues until the base case is reached, and the function calls start to unwind.

## Base Case

The base case is a critical part of any recursive algorithm.
It defines the condition under which the recursion stops and prevents infinite loops.
Without a base case, the function would keep calling itself indefinitely.

Example:

```c
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

