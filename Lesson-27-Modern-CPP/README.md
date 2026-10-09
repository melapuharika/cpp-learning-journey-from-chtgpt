Lesson 27 – Modern C++

C++11

- C++11 Features
- auto Keyword
- nullptr
- Range-Based For Loop
- Lambda Expressions
- Move Semantics
- Smart Pointers
- constexpr
- enum class

C++14

- C++14 Features
- Generic Lambda
- Return Type Deduction

C++17

- C++17 Features
- Structured Bindings
- if constexpr
- std::optional
- std::variant
- std::any
- Filesystem Library
- Fold Expressions

C++20

- C++20 Features
- Concepts
- Ranges
- Coroutines
- Modules
- Three-Way Comparison ( <=> )
- consteval
- constinit
- std::span

C++23

- C++23 Features
- std::expected
- std::print
- std::generator
- More C++23 Features


### topic 1

Lesson 27 – Topic 1: C++11 Features

1. Introduction

C++11 is a major version of the C++ programming language introduced in 2011.

It introduced several new features that make C++ programming easier, safer, and more efficient.

C++11 is also known as Modern C++'s first major standard update.

2. Why Was C++11 Introduced?

C++11 was introduced to:

- Make code easier to write and understand.
- Reduce unnecessary code.
- Improve memory management.
- Support modern programming techniques.
- Improve performance and type safety.
- Provide new features for efficient software development.

3. Important Features of C++11

3.1 auto Keyword

The "auto" keyword allows the compiler to automatically determine a variable's type from its initializer.

Example:

auto age = 19;
auto price = 99.5;

Here, "age" is an "int", and "price" is a "double".

3.2 nullptr

"nullptr" represents a null pointer. It was introduced to provide a type-safe alternative to "NULL" and "0" when representing null pointers.

Example:

int* ptr = nullptr;

3.3 Range-Based For Loop

A range-based "for" loop makes it easy to access every element in an array or collection.

Example:

int numbers[] = {10, 20, 30};

for (int n : numbers) {
    cout << n << " ";
}

Output:

10 20 30

3.4 Lambda Expressions

Lambda expressions allow us to create small anonymous functions directly where they are needed.

Example:

auto add = [](int a, int b) {
    return a + b;
};

cout << add(5, 3);

Output:

8

3.5 Move Semantics

Move semantics allows certain resources to be transferred from one object to another instead of unnecessarily copying them.

It can improve performance, especially when working with large objects and dynamically allocated resources.

3.6 Smart Pointers

Smart pointers help manage dynamically allocated memory automatically according to ownership rules.

Important smart pointers:

- "std::unique_ptr"
- "std::shared_ptr"
- "std::weak_ptr"

They are available through the "<memory>" header.

3.7 constexpr

The "constexpr" keyword allows functions and variables to participate in compile-time evaluation when the required conditions are satisfied.

Example:

constexpr int square(int n) {
    return n * n;
}

constexpr int result = square(5);

Here, "result" is initialized to "25" at compile time.

3.8 enum class

"enum class" provides scoped, strongly typed enumerations.

Example:

enum class Color {
    Red,
    Green,
    Blue
};

Color c = Color::Red;

It helps avoid naming conflicts and unintended conversions between enumeration values and integers.

4. Complete C++11 Example

#include <iostream>
using namespace std;

int main() {
    auto age = 19;
    int numbers[] = {10, 20, 30};

    cout << "Age: " << age << endl;

    cout << "Numbers: ";
    for (int n : numbers) {
        cout << n << " ";
    }

    return 0;
}

Output:

Age: 19
Numbers: 10 20 30

5. Advantages of C++11

- Improves code readability.
- Reduces repetitive code.
- Supports safer memory management.
- Introduces useful modern programming techniques.
- Can improve performance through move semantics.
- Makes many common programming tasks simpler.

6. Summary

C++11 introduced many important features that form the foundation of Modern C++.

The major features include "auto", "nullptr", range-based for loops, lambda expressions, move semantics, smart pointers, "constexpr", and "enum class".

Understanding these features helps programmers write cleaner, safer, and more efficient C++ programs.

7. Practice Questions

1. What is C++11?
2. Why was C++11 introduced?
3. What is the purpose of the "auto" keyword?
4. What is "nullptr"?
5. What is a range-based for loop?
6. What are lambda expressions?
7. What is move semantics?
8. What are smart pointers?
9. What is the purpose of "constexpr"?
10. What is the difference between "enum" and "enum class"?
