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

## Topic 3: C vs C++

1. Introduction

C and C++ are general-purpose programming languages.

C++ evolved from C and was initially called "C with Classes."

- C → Mainly Procedural Programming
- C++ → Multi-Paradigm Programming

---

2. C

C is mainly a procedural programming language.

It focuses on:

- Functions
- Procedures
- Data

Example:

void greet()
{
    printf("Hello");
}

---

3. C++

C++ is a general-purpose, compiled, statically typed, multi-paradigm language.

It supports:

- Procedural Programming
- Object-Oriented Programming (OOP)
- Generic Programming

C++ also provides features like classes, objects, inheritance, polymorphism, templates, exception handling, and STL.

---

4. C vs C++

Feature| C| C++
Main approach| Procedural| Multi-Paradigm
Classes & Objects| ❌| ✅
Encapsulation| ❌| ✅
Inheritance| ❌| ✅
Polymorphism| ❌| ✅
Function Overloading| ❌| ✅
Templates| ❌| ✅
Exception Handling| ❌| ✅
STL| ❌| ✅
Pointers| ✅| ✅
Functions| ✅| ✅
High Performance| ✅| ✅

---

5. Major Features of C++

Classes & Objects

Classes are blueprints for creating objects.

class Car
{
public:
    void start()
    {
        cout << "Car Started";
    }
};

Car myCar;

Encapsulation

Combining data and related functions inside a class and controlling access to them.

Inheritance

One class can acquire properties and functions of another class.

Polymorphism

The same interface/name can have different behaviors.

Function Overloading

Same function name with different parameters.

int add(int a, int b);
int add(int a, int b, int c);

Templates

Used to write generic code that works with different data types.

Exception Handling

C++ provides "try", "catch", and "throw" for handling exceptions.

STL

Standard Template Library provides useful components such as:

"vector", "list", "stack", "queue", "map", "set", and algorithms.

STL is very important for DSA and coding interviews.

---

6. Memory Management

C

malloc()
calloc()
realloc()
free()

C++

new
delete

Modern C++ also provides smart pointers such as:

unique_ptr
shared_ptr

---

7. Input and Output

C

printf()
scanf()

C++

cout
cin

---

8. Performance

Both C and C++ can provide high performance.

They are commonly used in:

- Operating Systems
- Games
- Embedded Systems
- Automotive Software
- Scientific Computing
- Financial Systems

---

9. Important Point

C++ evolved from C, but C++ is a separate programming language with its own rules and features.

Not every valid C program is guaranteed to be valid C++.

---

Easy Shortcut

C
→ Mainly Procedural
→ Functions + Data

C++
→ Multi-Paradigm
→ Procedural + OOP + Generic Programming
→ Classes + Objects + Templates + STL

One-Line Difference

C mainly focuses on functions and procedural programming, while C++ supports procedural programming along with OOP, generic programming, and many additional features.

What I Learned

- C is mainly procedural.
- C++ evolved from C.
- C++ supports multiple programming paradigms.
- C++ provides OOP features like classes, objects, inheritance, encapsulation, and polymorphism.
- C++ supports templates, exception handling, and STL.
- Both C and C++ can provide high performance.


### 4 Features of C++

C++ is a powerful programming language with many useful features. These features make C++ suitable for software development, DSA, games, system programming, and many other applications.

1. Simple and Easy to Learn

C++ has a structured syntax and is based on many concepts from C, making the basic concepts easier to understand.

---

2. Fast and Efficient

C++ can produce high-performance programs because it is typically compiled into native machine code.

It is widely used where speed is important.

---

3. Object-Oriented Programming

C++ supports OOP concepts such as:

- Classes
- Objects
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction

OOP helps organize large and complex programs.

---

4. Multi-Paradigm Language

C++ supports different programming approaches, including:

- Procedural Programming
- Object-Oriented Programming
- Generic Programming

---

5. Portable

C++ source code can often be compiled on different operating systems such as Windows, Linux, and macOS.

However, platform-specific code may need modifications.

---

6. Rich Standard Library

C++ provides a large standard library containing ready-to-use classes, functions, and utilities.

This reduces the need to write everything from scratch.

---

7. Standard Template Library (STL)

STL provides useful containers and algorithms such as:

- "vector"
- "list"
- "stack"
- "queue"
- "map"
- "set"
- Sorting and searching algorithms

STL is very important for DSA and coding interviews.

---

8. Memory Management

C++ provides powerful control over memory.

It supports:

new
delete

Modern C++ also provides smart pointers such as:

unique_ptr
shared_ptr

---

9. Pointers

C++ supports pointers, which allow programmers to work with memory addresses directly.

int x = 10;
int* p = &x;

Pointers are useful in data structures, memory management, and system programming.

---

10. Function Overloading

C++ allows multiple functions to have the same name with different parameters.

int add(int a, int b);
int add(int a, int b, int c);

---

11. Operator Overloading

C++ allows operators to be given special behavior for user-defined types.

For example, "+" can be overloaded for a class.

---

12. Inheritance

Inheritance allows a new class to reuse properties and functions of an existing class.

It improves code reusability.

---

13. Polymorphism

Polymorphism means one interface, different behaviors.

It allows the same function/interface to behave differently in different situations.

---

14. Generic Programming

C++ supports templates, which allow the same code to work with different data types.

template <typename T>
T add(T a, T b)
{
    return a + b;
}

---

15. Exception Handling

C++ provides:

try
catch
throw

These are used to handle exceptions in programs.

---

16. Low-Level Capabilities

Although C++ provides high-level features like classes and templates, it also gives low-level control through:

- Pointers
- References
- Memory management
- Bitwise operations
- System-level programming

---

Quick Revision

C++ Features
│
├── Simple & Structured
├── Fast & Efficient
├── Object-Oriented
├── Multi-Paradigm
├── Portable
├── Rich Standard Library
├── STL
├── Memory Management
├── Pointers
├── Function Overloading
├── Operator Overloading
├── Inheritance
├── Polymorphism
├── Templates
├── Exception Handling
└── Low-Level Capabilities

One-Line Summary

C++ is a fast, powerful, portable, multi-paradigm language that provides OOP, templates, STL, memory control, and many other features for developing efficient software.

What I Learned

- C++ is fast and efficient.
- C++ supports OOP and multiple programming paradigms.
- C++ provides STL and a rich standard library.
- C++ gives programmers control over memory using pointers and memory-management features.
- Features like inheritance, polymorphism, overloading, and templates make C++ powerful and reusable.
- C++ can be used for both high-level application development and low-level system programming.

### Topic 5: Applications of C++

C++ is widely used in areas where high performance, speed, and control over system resources are important.

1. Game Development 🎮

C++ is widely used in game engines and game development because of its high performance.

Examples: Game engines, graphics, physics systems.

---

2. Operating Systems 💻

C++ is used to develop system software and performance-critical components of operating systems.

---

3. Web Browsers 🌐

C++ is used in important browser components such as browser engines, where speed and performance are important.

---

4. Automotive Software 🚗

C++ is used in modern vehicles for:

- Infotainment systems
- Control systems
- Vehicle software

---

5. Embedded Systems 🤖

C++ is used in devices with limited resources, such as:

- IoT devices
- Electronics
- Industrial machines
- Smart devices

---

6. Desktop Applications 🖥️

C++ can be used to build high-performance desktop applications for Windows, Linux, and other platforms.

---

7. Finance and Trading 💰

C++ is used in financial systems and trading applications where low latency and high performance are important.

---

8. Scientific and Engineering Applications 🔬

C++ is used for:

- Simulations
- Numerical computing
- Engineering software
- High-Performance Computing (HPC)

---

9. Databases 🗄️

C++ is used to build performance-critical parts of database systems and database engines.

---

10. AI, Machine Learning and Computer Vision 🧠

C++ is used in performance-critical libraries and applications related to:

- AI
- Machine Learning
- Computer Vision
- Image Processing

---

11. Networking and Telecommunications 📡

C++ is used to develop high-performance networking and communication software.

---

12. Compilers and Developer Tools ⚙️

C++ is used to build compilers, toolchains, and other developer tools.

---

Quick Revision

Applications of C++
│
├── Game Development
├── Operating Systems
├── Web Browsers
├── Automotive
├── Embedded Systems
├── Desktop Applications
├── Finance & Trading
├── Scientific & Engineering
├── Databases
├── AI/ML & Computer Vision
├── Networking & Telecom
└── Compilers & Developer Tools

Why is C++ used in these areas?

Main reasons:

- ⚡ High Performance
- 🚀 Speed
- 🧠 Memory Control
- 💪 Powerful Features
- 🔧 Suitable for System-Level Programming

One-Line Summary

C++ is mainly used in applications where speed, performance, efficiency, and control over system resources are important.


### Topic 6: C++ Standards

1. What is a C++ Standard?

A C++ Standard is an official specification that defines the rules, features, and behavior of the C++ language and its standard library.

New standards are released to improve and modernize C++.

Main versions covered:

C++11 → C++14 → C++17 → C++20 → C++23

---

2. C++11

C++11 was a major update that introduced many modern C++ features.

Important Features

- "auto"
- "nullptr"
- Range-based "for" loop
- Lambda expressions
- Smart pointers
- Move semantics
- Multithreading support

Example:

auto age = 23;

for (int x : numbers)
{
    cout << x;
}

C++11 → Major modernization of C++.

---

3. C++14

C++14 mainly improved and simplified features introduced in C++11.

Important Features

- Generic lambdas
- Return type deduction
- Binary literals
- Digit separators

Example:

auto add = [](auto a, auto b)
{
    return a + b;
};

C++14 → Improvements to C++11.

---

4. C++17

C++17 introduced many useful modern language and library features.

Important Features

- Structured bindings
- "if constexpr"
- "std::optional"
- "std::variant"
- "std::string_view"
- "std::filesystem"
- "std::any"

Example:

auto [name, age] = student;

C++17 → Important modern C++ standard.

---

5. C++20

C++20 was another major upgrade to C++.

Important Features

- Concepts
- Ranges
- Coroutines
- Modules
- "std::span"
- Three-way comparison operator "<=>"

C++20 made generic programming and modern C++ development more powerful.

C++20 → Major language and library upgrade.

---

6. C++23

C++23 introduced further improvements to the language and standard library.

Important Features

- "std::expected"
- "std::print"
- "std::println"
- Improvements to ranges
- "std::mdspan"
- Many library improvements

Example:

std::println("Hello, C++23!");

C++23 → Further improvements to modern C++.

---

7. Quick Comparison

Standard| Main Focus
C++11| Major modernization
C++14| C++11 improvements
C++17| Modern language & library features
C++20| Concepts, Ranges, Coroutines, Modules
C++23| Further language & library improvements

---

Easy Memory Trick

C++11 → Modernization 🚀
C++14 → Improvements 🔧
C++17 → Modern Features ⭐
C++20 → Major Upgrade 🔥
C++23 → Further Improvements ✨

One-Line Summary

C++ standards are updated versions of the C++ language that introduce new features, improvements, and library capabilities while maintaining compatibility as much as possible.

What I Learned

- A C++ standard defines rules and features of C++.
- C++11 introduced many modern features.
- C++14 improved C++11.
- C++17 added many useful modern features.
- C++20 introduced major features such as Concepts, Ranges, and Coroutines.
- C++23 added further language and library improvements.

### Topic 7: Compiler

What is a Compiler?

A compiler is a software program that translates source code written in a programming language like C++ into a lower-level form that the computer can execute.

Computers cannot directly execute C++ source code, so the compiler processes it and converts it into compiled code.

Simple Flow

C++ Source Code
      ↓
   Compiler
      ↓
Compiled Code
      ↓
   Computer

What Does a Compiler Do?

A compiler mainly:

1. Processes the source code.
2. Checks the code for many syntax and type errors.
3. Translates the source code into compiled/object code.
4. Helps produce code that can be executed after the necessary linking steps.

Example

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello";
    return 0;
}

The compiler processes this C++ program and reports compilation errors if the code contains problems.

Example of an Error

int age = "Hello";

Here, "age" is an "int", but ""Hello"" is a string literal. The compiler can detect this type mismatch and report an error.

C++ Compilers

Some commonly used C++ compiler toolchains are:

- GCC / g++
- Clang
- MSVC

Easy Definition

Compiler = A translator that converts C++ source code into compiled code and checks the program for many errors during compilation.


### Topic 8: GCC, Clang & MSVC

C++ programs ni compile cheyyadaniki different compiler toolchains available unnayi. The most common ones are GCC, Clang, and MSVC.

1. GCC / g++

GCC stands for GNU Compiler Collection.

It is a collection of compilers developed by the GNU Project.

For compiling C++ programs, we commonly use g++.

Example:

g++ main.cpp -o main

GCC/g++ → GNU Project

---

2. Clang

Clang is a compiler for C and C++ that is part of the LLVM project.

It is known for:

- Fast compilation
- Helpful error messages
- Good developer tools

Clang → LLVM Project

---

3. MSVC

MSVC stands for Microsoft Visual C++.

It is Microsoft's C/C++ compiler toolchain and is commonly used for Windows development.

It is closely integrated with Visual Studio.

MSVC → Microsoft

---

4. Quick Comparison

Compiler| Organization / Project| Common Use
GCC / g++| GNU| Linux, Windows, cross-platform
Clang| LLVM| macOS, Linux, cross-platform
MSVC| Microsoft| Windows

Easy Memory Trick

GCC / g++ → GNU
Clang     → LLVM
MSVC      → Microsoft

One-Line Summary

GCC/g++, Clang, and MSVC are popular C++ compiler toolchains used to compile C++ programs on different platforms.
