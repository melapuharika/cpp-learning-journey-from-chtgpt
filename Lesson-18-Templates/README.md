# Lesson 18 – Templates

## Function Templates
1. Templates
2. Function Templates
3. Basic Templates
4. Multiple Template Parameters
5. Template Overloading

## Class Templates
6. Class Templates
7. Basic Class Template
8. Multiple Template Parameters

## Advanced Templates
9. Template Specialization
10. Partial Specialization
11. Non-Type Template Parameters
12. Variadic Templates
13. Parameter Packs
14. Fold Expressions
15. Template Argument Deduction
16. typename
17. Dependent Names
18. Modern Concepts
19. requires
20. Constraints


### topic 1

# Templates – Short Notes

## Definition

Template is a C++ feature used to write generic and reusable code that works with different data types.

## Syntax

template <typename T>

Here:
- template → C++ keyword
- typename → specifies a type parameter
- T → type placeholder

## Example

template <typename T>
T add(T a, T b)
{
    return a + b;
}

cout << add(10, 20);      // int
cout << add(2.5, 3.5);    // double

## Advantages

- Code reusability
- Reduces code duplication
- Works with different data types
- Makes code flexible and maintainable

## Template Instantiation

Creating a specific version of a template for a particular data type.

Example:

add(10, 20) → T becomes int
add(2.5, 3.5) → T becomes double

## Important Point

The operations used inside a template must be valid for the selected data type.

## Key Point

Template = Generic Code + Different Data Types
