# DATA STRUCTURES AND ALGORITHMS

## Table of Contents
1. [Introduction](#introduction)
2. [LIFO and FIFO](#lifo-and-fifo)
3. [Stacks](#stacks)
    - [What is a Stack?](#what-is-a-stack)
    - [When to Use a Stack](#when-to-use-a-stack)
    - [Common Implementations](#common-implementations-of-stacks)
    - [Common Use Cases](#common-use-cases-of-stacks)
4. [Queues](#queues)
    - [What is a Queue?](#what-is-a-queue)
    - [When to Use a Queue](#when-to-use-a-queue)
    - [Common Implementations](#common-implementations-of-queues)
    - [Common Use Cases](#common-use-cases-of-queues)
5. [Global Variables](#global-variables)
    - [Proper Usage](#proper-usage-of-global-variables)
6. [Resources](#resources)

## Introduction
Welcome to the Monty Interpreter project! This readme provides essential information about the concepts of Last In, First Out (LIFO) and First In, First Out (FIFO), the use of stacks and queues, and guidelines on the proper usage of global variables in the context of this project.

## LIFO and FIFO

- **LIFO**: Last In, First Out. In a LIFO structure, the last element added is the first one to be removed.

- **FIFO**: First In, First Out. In a FIFO structure, the first element added is the first one to be removed.

## Stacks

### What is a Stack?
A stack is a data structure that follows the LIFO principle. Elements are added or removed from the top of the stack, resembling a collection of items stacked on top of each other.

### When to Use a Stack
Use a stack when the order of processing is critical, and the last item to be added needs to be the first one processed or removed.

### Common Implementations of Stacks
Common implementations include using arrays or linked lists to manage the stack structure in C.

### Common Use Cases of Stacks
- Function call management (call stack)
- Undo mechanisms in applications
- Expression evaluation in compilers

## Queues

### What is a Queue?
A queue is a data structure that follows the FIFO principle. Elements are added at the rear and removed from the front, resembling a line of people waiting.

### When to Use a Queue
Use a queue when order preservation is necessary, and the first item added needs to be the first one processed or removed.

### Common Implementations of Queues
Common implementations include using arrays, linked lists, or specialized queue data structures in C.

### Common Use Cases of Queues
- Print job scheduling in operating systems
- Task management in real-time systems
- Breadth-first search algorithms

## Global Variables

### Proper Usage of Global Variables
In the Monty Interpreter project, global variables should be used judiciously and only when necessary. Consider the following guidelines:
- Use global variables for settings or values shared across multiple modules.
- Avoid using global variables for temporary storage or local computations.
- Clearly document the purpose and scope of each global variable.
- Minimize the use of global variables to enhance code maintainability.


### Resources 

1. **Websites and Tutorials:**
   - [GeeksforGeeks - Data Structures in C](https://www.geeksforgeeks.org/data-structures/)
   - [TutorialsPoint - C Data Structures](https://www.tutorialspoint.com/data_structures_algorithms/index.htm)
   - [CProgramming.com - Data Structures in C](https://www.cprogramming.com/algorithms-and-data-structures.html)

2. **Practice Platform:**
   - [LeetCode - Data Structures](https://leetcode.com/problemset/algorithms/)

3. **YouTube Channel:**
   - [mycodeschool - Data Structures using C](https://www.youtube.com/user/mycodeschool)

_monty_
