Lesson 01 — C++ Introduction

This lesson covers the fundamentals of C++ and how a C++ program is compiled and executed.

Topics Covered

1. Introduction to C++
2. What is C++?
3. C vs C++
4. Features of C++
5. Applications of C++
6. C++ Standards
   - C++11
   - C++14
   - C++17
   - C++20
   - C++23
7. What is a Compiler?
8. GCC
9. Clang
10. MSVC
11. IDEs and Compilers
12. Program Compilation Process

Learning Goal

By the end of this lesson, I will understand what C++ is, why it is used, the major C++ standards, what a compiler does, and how a C++ program is converted from source code into an executable program.

## 1. Introduction to C++

C++ is a general-purpose, compiled, statically typed, multi-paradigm programming language designed for high performance and providing significant control over system resources.

### Key Points

- C++ is a general-purpose programming language.
- It was developed by Bjarne Stroustrup at Bell Labs.
- C++ evolved from the C programming language.
- C++ supports procedural, object-oriented, and generic programming.
- C++ provides high performance and low-level capabilities.
- C++ is widely used in performance-critical applications.

### What I Learned

I learned what C++ is, why it is used, its major characteristics, and how a basic C++ program works.

## 2. What is C++?

C++ is a general-purpose, compiled, statically typed, multi-paradigm programming language designed to provide high performance and significant control over system resources.

C++ was developed by Bjarne Stroustrup at Bell Labs. It evolved from the C programming language and was originally known as "C with Classes."

2.1 General-Purpose Language

C++ is called a general-purpose language because it can be used to develop many different types of software and applications.

Some examples include:

- Game development
- Operating-system and system software
- Desktop applications
- Embedded systems
- Automotive software
- Browsers
- Financial applications
- Scientific and engineering applications
- Performance-critical software

Key idea:
General-purpose means C++ is not restricted to one particular type of application.

---

2.2 Compiled Language

C++ is a compiled language. The C++ source code written by a programmer is processed by a compiler before it can be executed by the computer.

The basic idea is:

C++ Source Code
       ↓
    Compiler
       ↓
Machine/Native Code
       ↓
      CPU
       ↓
   Execution

For example:

#include <iostream>

int main()
{
    std::cout << "Hello World";
    return 0;
}

The compiler translates this source code into a form that the computer can execute.

The detailed compilation process includes stages such as preprocessing, compilation, assembly, and linking.

---

2.3 Statically Typed Language

C++ is a statically typed language. This means that variables have specific data types, and the compiler performs type checking during compilation.

Example:

int age = 23;

Here:

- "int" → data type
- "age" → variable name
- "23" → value

The variable "age" is declared as an integer.

C++ provides several built-in data types, such as:

- "int"
- "float"
- "double"
- "char"
- "bool"

Example:

int age = 23;
double price = 99.50;
char grade = 'A';
bool passed = true;

If we try to use a value that is incompatible with the declared type, the compiler can report a type-related error.

Key idea:
Static typing helps the compiler detect many type-related mistakes before the program runs.

---

2.4 Multi-Paradigm Language

A programming paradigm is a style or approach used to write programs.

C++ is called a multi-paradigm language because it supports multiple programming approaches.

Procedural Programming

Programs can be organized around functions and procedures.

int add(int a, int b)
{
    return a + b;
}

Object-Oriented Programming

C++ supports classes and objects.

class Student
{
};

Object-oriented programming allows us to model real-world entities using concepts such as:

- Classes
- Objects
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction

Generic Programming

C++ also supports generic programming using templates.

template <typename T>
T add(T a, T b)
{
    return a + b;
}

Key idea:
C++ does not force programmers to use only one programming style.

---

2.5 High-Level Language with Low-Level Capabilities

C++ provides high-level programming features such as:

- Classes
- Objects
- Functions
- Templates
- Standard Library
- STL

At the same time, it provides low-level capabilities such as:

- Pointers
- References
- Direct memory manipulation
- Bitwise operations
- Manual and dynamic memory management
- Interaction with system resources

Because of this combination, C++ can provide both abstraction and fine-grained control.

C++ is sometimes called a middle-level language, but this is an informal classification.

A more precise description is:

«C++ is a high-level programming language with low-level capabilities.»

---

2.6 Performance

One of the major strengths of C++ is performance.

C++ programs can be compiled into efficient native code, and the language provides programmers with considerable control over memory and other resources.

Because of this, C++ is widely used in applications where performance is important.

Examples include:

- Game engines
- Operating-system components
- Real-time systems
- Financial systems
- Embedded systems
- High-performance computing

However, performance depends not only on the language but also on the algorithms, data structures, compiler, hardware, and how the program is written.

---

2.7 Memory and Resource Control

C++ gives programmers powerful tools for managing memory and other resources.

For example:

int x = 10;
int* p = &x;

Here, "p" is a pointer that stores the memory address of "x".

C++ also provides mechanisms for dynamic memory management and resource lifetime management.

These concepts become very important when learning:

- Pointers
- References
- Stack
- Heap
- Dynamic memory
- Constructors and destructors
- Smart pointers
- RAII

These topics will be studied in detail in later lessons.

---

2.8 Portability

C++ programs can be compiled for different operating systems and hardware platforms when suitable compilers and libraries are available.

For example:

        C++ Source Code
              ↓
       ┌──────┼──────┐
       ↓      ↓      ↓
   Windows   Linux   macOS
       ↓      ↓      ↓
  Executable Executable Executable

However, portability is not always automatic. Platform-specific code, libraries, or operating-system features may require changes.

---

Summary

Property| Meaning
General-purpose| Used for many types of applications
Compiled| Source code is translated before execution
Statically typed| Variables have defined types and type checking occurs during compilation
Multi-paradigm| Supports multiple programming approaches
High-performance| Can produce efficient native programs
Low-level capable| Provides strong control over memory and system resources
Portable| Can be compiled for different platforms

---

One-Line Definition

«C++ is a general-purpose, compiled, statically typed, multi-paradigm programming language that combines high-level abstractions with low-level capabilities and is widely used for high-performance software.»

---

What I Learned

In this topic, I learned:

- What C++ is
- Why C++ is called a general-purpose language
- What a compiled language means
- What static typing means
- What a multi-paradigm language means
- Why C++ provides high performance
- How C++ provides control over memory and system resources
- What portability means in C++
