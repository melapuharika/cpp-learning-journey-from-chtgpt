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


### topic 2

# Function Templates – Notes

## Definition

A Function Template is a generic function that can work with different data types.

## Syntax

template <typename T>
T functionName(T a, T b)
{
    // code
}

## Example

template <typename T>
T add(T a, T b)
{
    return a + b;
}

cout << add(10, 20);       // int
cout << add(2.5, 3.5);     // double

## How It Works

The compiler determines the required data type from the arguments.

add(10, 20) → T = int
add(2.5, 3.5) → T = double

## Advantages

- Code reusability
- Avoids duplicate functions
- Works with different data types
- Makes code flexible

## Important Point

The operations used inside the function must be valid for the selected data type.

## Key Point

Function Template = One Generic Function + Multiple Data Types

### topic 3

# Basic Templates – Notes

## Definition

Basic Template is a simple template that allows the same code to work with different data types.

## Syntax

template <typename T>
T functionName(T value)
{
    // code
}

## Example

template <typename T>
T square(T value)
{
    return value * value;
}

cout << square(5);       // int → 25
cout << square(2.5);     // double → 6.25

## How It Works

square(5)
→ T = int
→ Result = 25

square(2.5)
→ T = double
→ Result = 6.25

## Advantages

- Code reusability
- Avoids duplicate code
- Works with different data types
- Makes code flexible

## Key Point

Basic Template = Same Code + Different Data Types

### topic 4

# Multiple Template Parameters – Notes

## Definition

Multiple Template Parameters allow us to use more than one type parameter in a single template.

## Syntax

template <typename T, typename U>

## Example

template <typename T, typename U>
void display(T a, U b)
{
    cout << a << " " << b;
}

display(10, 2.5);

T = int
U = double

## Important Point

T and U can represent different data types.

Example:

T = int
U = double

## Advantages

- Supports multiple data types
- Allows different types in the same function
- Improves code reusability
- Makes templates more flexible

## Key Point

Multiple Template Parameters = One Template + Multiple Type Parameters


### topic 5

# Template Overloading – Notes

## Definition

Template Overloading means defining multiple function templates with the same function name but different parameters.

## Example

template <typename T>
void display(T value)
{
    cout << value;
}

template <typename T>
void display(T a, T b)
{
    cout << a << " " << b;
}

## Usage

display(10);        // 1 parameter
display(10, 20);    // 2 parameters

## How It Works

The compiler checks the arguments and selects the matching template.

## Advantages

- Same function name can be used
- Supports different parameter lists
- Improves code readability
- Provides code flexibility

## Key Point

Template Overloading = Same Function Name + Different Parameters


### topic 6

# Class Templates – Notes

## Definition

Class Template is used to create a generic class that can work with different data types.

## Syntax

template <typename T>
class ClassName
{
    T data;
};

## Example

template <typename T>
class Box
{
public:
    T value;

    Box(T v)
    {
        value = v;
    }
};

## Usage

Box<int> b1(10);
Box<double> b2(2.5);

T = int
T = double

## How It Works

Box<int>
→ T becomes int

Box<double>
→ T becomes double

## Advantages

- Code reusability
- Same class can work with different data types
- Reduces duplicate code
- Makes classes flexible

## Key Point

Class Template = One Generic Class + Different Data Types


### topic 7

Basic Class Templates

- A class template is a blueprint for creating classes that can work with different data types.

- It allows us to write the class code only once and use it with multiple data types.

- Syntax:

template <typename T>
class ClassName {
    T data;
};

- `template` → Used to define a template.
- `typename T` → T is a type parameter.
- `T` → Placeholder for a data type.

Example:

template <typename T>
class Box {
    T value;

public:
    Box(T v) {
        value = v;
    }

    void display() {
        cout << value << endl;
    }
};

Creating objects:

Box<int> b1(100);
Box<double> b2(25.5);
Box<string> b3("Hello");

Here:
- For b1, T = int
- For b2, T = double
- For b3, T = string

Advantages:
- Code reusability
- Avoids duplicate code
- Supports multiple data types
- Makes programs more flexible

Key Point:
One class template can be used to create classes for different data types.


### topic 8

Multiple Template Parameters

- Multiple template parameters allow a class template to work with two or more different data types.

- Syntax:

template <typename T, typename U>
class ClassName {
    T first;
    U second;
};

- `T` → First type parameter.
- `U` → Second type parameter.

Example:

template <typename T, typename U>
class Pair {
    T first;
    U second;
};

Creating objects:

Pair<int, string> p1(10, "Hello");
Pair<string, double> p2("Price", 99.5);

Here:
- For p1, T = int and U = string.
- For p2, T = string and U = double.

Advantages:
- Supports multiple data types.
- Improves code reusability.
- Avoids writing separate classes for different type combinations.
- Makes classes more flexible.

Key Point:
A class template can have multiple type parameters such as T, U, V, etc.

### topic 9

Advanced Templates

- Advanced templates are powerful features of C++ templates used to create more flexible, reusable, and generic code.

Important Advanced Template Concepts:

1. Template Specialization
   - Allows us to provide a special implementation for a specific data type.

2. Partial Specialization
   - Provides a specialized implementation for some template parameters.

3. Non-Type Template Parameters
   - Allows values such as integers or constants to be passed as template parameters.

4. Default Template Parameters
   - Provides default values for template parameters.

5. Variadic Templates
   - Allows a template to accept a variable number of parameters.

6. Template Template Parameters
   - Allows a template itself to be passed as a template parameter.

7. Type Traits
   - Used to obtain information or properties about data types at compile time.

8. `if constexpr`
   - Allows compile-time conditional logic inside templates.

9. Concepts and Constraints
   - Used to restrict which types can be used with a template.

Key Point:
Advanced templates provide more control and flexibility when writing generic C++ programs.


## topic 10

Template Specialization

- Template specialization allows us to provide a special implementation for a specific data type.

- The general template works for all data types.

- A specialized template works differently for a particular data type.

General Template:

template <typename T>
class Box {
public:
    void display() {
        cout << "General Box" << endl;
    }
};

Specialized Template:

template <>
class Box<int> {
public:
    void display() {
        cout << "Integer Box" << endl;
    }
};

Here:
- `template <>` indicates full specialization.
- `Box<int>` means the specialization is specifically for `int`.
- Other data types continue to use the general template.

Example:

Box<double> b1;
Box<int> b2;

b1.display();
b2.display();

Output:

General Box
Integer Box

Advantages:
- Allows special behavior for specific data types.
- Keeps the general template unchanged.
- Provides flexibility in generic programming.

Key Point:
Template specialization = General template + Special implementation for a specific type.

### topic 11

Partial Template Specialization

- Partial specialization means specializing only some template parameters while keeping the remaining parameters generic.

Example:

template <typename T, typename U>
class Pair {
public:
    void display() {
        cout << "General Pair" << endl;
    }
};

Partial Specialization:

template <typename T>
class Pair<T, int> {
public:
    void display() {
        cout << "Second type is int" << endl;
    }
};

Here:
- `U` is specialized as `int`.
- `T` remains generic and can be any data type.
- `Pair<T, int>` is a partial specialization.

Example:

Pair<double, string> p1;
Pair<double, int> p2;

p1 → Uses the general template.
p2 → Uses the partial specialization.

Difference:

Full Specialization:
- All template parameters are fixed.

Partial Specialization:
- Only some template parameters are fixed.
- Remaining parameters stay generic.

Key Point:
Partial specialization = Specialize some parameters + Keep the remaining parameters generic.


### topic 12

Non-Type Template Parameters

- Non-Type Template Parameters (NTTPs) allow values to be passed as template parameters instead of data types.

Example:

template <typename T, int size>
class Array {
    T data[size];

public:
    void display() {
        cout << "Array size: " << size << endl;
    }
};

Creating objects:

Array<int, 5> a1;
Array<double, 10> a2;

Here:
- `T` → Type template parameter.
- `size` → Non-type template parameter.
- `int` and `double` are data types.
- `5` and `10` are values.

For:

Array<int, 5>

T = int
size = 5

Key Points:
- NTTPs pass values to templates.
- The value is generally known at compile time.
- They are useful for fixed-size arrays and compile-time configurations.

Key Point:
Type parameter → represents a data type.
Non-type parameter → represents a compile-time value.


### topic 13

Variadic Templates

- Variadic templates allow a function or class template to accept a variable number of parameters.

- They are useful when we do not know in advance how many arguments will be passed.

Syntax:

template <typename... Args>
void print(Args... args) {
    // code
}

- `Args...` → Represents multiple template parameters.
- `args...` → Represents multiple function arguments.

Example:

print(10);
print(10, 20);
print(10, 20, 30, 40);

Here, different numbers of arguments can be passed.

Advantages:
- Supports a variable number of arguments.
- Provides flexible and reusable code.
- Useful for generic functions and libraries.

Key Point:
Variadic templates = Templates that can accept a variable number of parameters.


### topic 14

Parameter Packs

- A parameter pack represents zero or more parameters as a group.

- Parameter packs are mainly used with variadic templates.

Syntax:

template <typename... Args>
void print(Args... args) {
}

- `Args...` → Template parameter pack.
- `args...` → Function parameter pack.
- `...` → Indicates a parameter pack.

Example:

template <typename... Args>
void print(Args... args) {
    cout << sizeof...(args) << endl;
}

Usage:

print(10);
print(10, 20, 30);
print(10, 20, 30, 40, 50);

Output:

1
3
5

- `sizeof...(args)` gives the number of parameters in the pack.

Key Points:
- A parameter pack can contain zero or more parameters.
- It allows functions/templates to handle a variable number of arguments.
- It is an important part of variadic templates.

Key Point:
Parameter pack = A group of zero or more template/function parameters.


### topic 15

Fold Expressions

- Fold expressions are used to process or combine multiple values in a parameter pack using an operator.

- They were introduced in C++17.

- They are mainly used with variadic templates.

Example:

template <typename... Args>
int sum(Args... args) {
    return (args + ...);
}

Usage:

cout << sum(10, 20, 30, 40);

Output:

100

Here:

(args + ...)

means:

10 + 20 + 30 + 40

Fold expressions can use operators such as:
- +
- *
- &&
- ||
- <<
- -

Example:

return (args * ...);

For:

2, 3, 4

Result:

2 * 3 * 4 = 24

Key Points:
- Fold expressions work with parameter packs.
- They simplify operations on multiple arguments.
- They were introduced in C++17.
- They can use many C++ operators.

Key Point:
Fold expression = Parameter pack + Operator → Combined result.


### topic 16

Template Argument Deduction

- Template argument deduction means the compiler automatically determines the template parameter type from the function arguments.

- We do not always need to explicitly specify the template type.

Example:

template <typename T>
T add(T a, T b) {
    return a + b;
}

Function call:

add(10, 20);

Here:
T = int

The compiler automatically deduces T as int.

Another example:

add(10.5, 20.5);

Here:
T = double

This:

add(10, 20);

is similar to:

add<int>(10, 20);

Important Point:

add(10, 20.5);

may fail with a simple single-type template because the arguments have different types.

Advantages:
- Reduces code.
- No need to specify template types manually.
- Makes function calls shorter and easier to use.

Key Point:
Template argument deduction = Compiler automatically determines template arguments from function arguments.
