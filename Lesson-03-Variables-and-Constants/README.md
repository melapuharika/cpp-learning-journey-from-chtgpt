moon# Lesson 3: Variables and Constants

1. Variables and Constants
2. Variables
3. Constants
4. const
5. constexpr
6. static
7. extern
8. Scope
9. Lifetime
10. Storage Duration

## Topic 1: Variables

What is a Variable?

A variable is a named memory location used to store a value.

The value of a variable can be changed during program execution.

Example

int age = 22;

Here:

- "int" → Data type
- "age" → Variable name
- "22" → Value

The value can be changed:

age = 23;

Now "age" contains "23".

Variable Declaration

Declaration means creating a variable by specifying its data type and name.

int age;

Here, "age" is declared as an integer variable.

Variable Initialization

Initialization means giving a variable its initial value.

int age = 22;

Here, "age" is initialized with the value "22".

Common Variable Data Types

int age = 22;
float height = 5.5f;
double price = 99.99;
char grade = 'A';
bool isPassed = true;

Data Type| Example| Used For
"int"| "22"| Whole numbers
"float"| "5.5f"| Decimal numbers
"double"| "99.99"| Precise decimal numbers
"char"| "'A'"| Single character
"bool"| "true"| True/False values

Example Program

#include <iostream>

int main()
{
    int age = 22;

    std::cout << "Age: " << age << std::endl;

    age = 23;

    std::cout << "New Age: " << age << std::endl;

    return 0;
}

Output

Age: 22
New Age: 23

Important Points

- A variable has a name and a data type.
- A variable is used to store data.
- The value of a variable can be changed.
- The data type determines what kind of value can be stored.
- A variable should be declared before it is used.
- Initialization gives a variable its initial value.

Easy Definition

A variable is a named memory location used to store data whose value can change during program execution.


## Topic 2: Constants

What is a Constant?

A constant is a value that cannot be changed after it is initialized.

We use constants when a value should remain fixed throughout the program.

Real-Life Example

A week always has 7 days.

So we can store it as a constant:

const int DAYS = 7;

Now the value of "DAYS" cannot be changed.

DAYS = 10;   // Error

The compiler gives an error because "DAYS" is a constant.

Constant Syntax

const data_type constant_name = value;

Example

const int DAYS = 7;
const double PI = 3.14159;

Here:

- "const" → Makes the variable constant
- "int" / "double" → Data type
- "DAYS" / "PI" → Constant name
- "7" / "3.14159" → Value

Variable vs Constant

Variable| Constant
Value can be changed| Value cannot be changed
Example: "int age = 22;"| Example: "const int DAYS = 7;"
Flexible| Fixed

Example

int age = 22;
age = 23;          // Allowed

const int DAYS = 7;
DAYS = 10;         // Error

Why Do We Use Constants?

Constants are useful when a value should not change.

Examples:

- Number of days in a week
- Mathematical values such as PI
- Fixed limits
- Configuration values

Important Points

- A constant stores a fixed value.
- Its value cannot be changed after initialization.
- The "const" keyword is used to create a constant.
- A constant must normally be initialized when it is declared.
- Trying to modify a constant causes a compilation error.

Easy Definition

A constant is a value that remains fixed and cannot be changed after initialization.


## Topic 3: const

What is "const"?

"const" is a keyword in C++ used to make a variable constant.

Once a "const" variable is initialized, its value cannot be changed.

Syntax

const data_type variable_name = value;

Example

const int age = 22;

Here:

- "const" → Makes the variable constant
- "int" → Data type
- "age" → Variable name
- "22" → Initial value

The value cannot be changed:

age = 23;   // ❌ Error

Normal Variable vs "const" Variable

Normal Variable

int age = 22;
age = 23;       // ✅ Allowed

The value can be changed.

"const" Variable

const int age = 22;
age = 23;       // ❌ Error

The value cannot be changed.

Examples

const int DAYS = 7;
const double PI = 3.14159;
const int MAX_MARKS = 100;

These values should remain fixed.

Why Use "const"?

We use "const" when a value should not be modified accidentally.

Benefits:

- Prevents unwanted changes
- Makes code safer
- Makes the programmer's intention clear
- Useful for fixed values

Important Points

- "const" is a C++ keyword.
- It makes a variable read-only after initialization.
- A "const" variable should be initialized when it is declared.
- Trying to modify a "const" variable causes a compilation error.

Easy Definition

"const" is a keyword used to create a variable whose value cannot be changed after initialization.

## Topic 4: constexpr

What is "constexpr"?

"constexpr" is a C++ keyword used to declare a value that can be evaluated at compile time.

A "constexpr" variable is also constant, so its value cannot be changed after initialization.

Syntax

constexpr data_type variable_name = value;

Example

constexpr int DAYS = 7;

Here, "DAYS" has a fixed value of "7".

It cannot be changed:

DAYS = 10;   // ❌ Error

Compile-Time Calculation

"constexpr" can be used when a value can be calculated during compilation.

constexpr int SIZE = 10 * 2;

The compiler can evaluate "10 * 2" at compile time, so "SIZE" becomes "20".

"const" vs "constexpr"

Both are used for values that should not be modified.

"const"

const int age = 22;

"const" means the value cannot be changed after initialization.

"constexpr"

constexpr int SIZE = 10 * 2;

"constexpr" means the value is constant and is intended to be evaluated at compile time.

"const"| "constexpr"
Value cannot be changed| Value cannot be changed
Not necessarily a compile-time constant| Must be usable as a compile-time constant
Used for read-only values| Used for compile-time constants

Examples

constexpr int DAYS = 7;
constexpr int HOURS = 24;
constexpr int MINUTES = 60;
constexpr int SIZE = 10 * 2;

Why Use "constexpr"?

- Helps create compile-time constants
- Can allow calculations to happen during compilation
- Makes the programmer's intention clear
- Useful where a compile-time constant is required

Important Points

- "constexpr" is a C++ keyword.
- A "constexpr" variable is constant.
- Its value cannot be modified.
- It is designed for compile-time evaluation.
- The initializer must satisfy the rules for a constant expression.

Easy Definition

"constexpr" is used to create a constant whose value can be evaluated at compile time.

## Topic 5: static

What is "static"?

"static" is a keyword in C++.

For a local variable, "static" allows the variable to keep its value between function calls.

Simple Example

void count()
{
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

If we call "count()" three times:

count();
count();
count();

Output:

1
2
3

Why?

Normally, a local variable starts again when the function is called.

But a "static" local variable remembers its previous value.

Think of it like a box 📦:

- Normal variable → box is thrown away after the function finishes.
- Static variable → box is kept, so its value can be used in the next function call.

Normal Variable

void count()
{
    int x = 0;
    x++;
    std::cout << x << std::endl;
}

Calling it three times gives:

1
1
1

Because "x" starts from "0" each time.

Static Variable

void count()
{
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

Calling it three times gives:

1
2
3

Because "x" remembers its previous value.

Important Points

- "static" is a C++ keyword.
- A static local variable is initialized only once.
- It keeps its value between function calls.
- It has static storage duration.
- Its lifetime continues until the program ends.
- "static" has different uses depending on where it is declared.

Easy Definition

A "static" local variable is a variable that remembers its value between function calls and exists for the lifetime of the program.


## Topic 6: extern

What is "extern"?

"extern" is a keyword in C++ used to tell the compiler that a variable is defined somewhere else.

It is commonly used when we want to use a global variable from another source file.

Simple Example

Suppose we have two files.

File 1:

int marks = 90;

Here, "marks" is actually created and defined.

File 2:

extern int marks;

Here, we are telling the compiler:

«""marks" already exists somewhere else. I want to use it here."»

We can then use it:

std::cout << marks;

Output:

90

Definition vs Declaration

Definition

int marks = 90;

This creates/defines the variable and gives it storage.

"extern" Declaration

extern int marks;

This declares that the variable exists somewhere else.

It does not create a new variable.

Why Use "extern"?

"extern" is useful when:

- A program has multiple ".cpp" files.
- A global variable is defined in one file.
- We need to access that variable from another file.

Example with Two Files

"main.cpp"

#include <iostream>

extern int marks;

int main()
{
    std::cout << marks << std::endl;
    return 0;
}

"data.cpp"

int marks = 90;

Here:

- "data.cpp" → defines "marks"
- "main.cpp" → declares "marks" using "extern"
- "main.cpp" can use the variable defined in "data.cpp"

Important Points

- "extern" is a C++ keyword.
- It tells the compiler that a variable is defined somewhere else.
- It is commonly used with global variables.
- It is useful for sharing variables between multiple source files.
- "extern" declaration does not create a new variable.

Easy Definition

"extern" tells the compiler that a variable exists somewhere else and can be used here.


## Topic 7: Scope

What is Scope?

Scope is the area of a program where a variable can be accessed or used.

In simple words:

«Scope tells us where a variable can be used.»

Simple Example

int main()
{
    int age = 22;

    std::cout << age;   // ✅ Allowed
}

Here, "age" is declared inside "main()", so it can be used inside that area.

But:

int main()
{
    int age = 22;
}

std::cout << age;   // ❌ Error

Here, "age" cannot be used outside "main()" because it is outside its scope.

Types of Scope

1. Local Scope

A variable declared inside a function has local scope.

void display()
{
    int number = 10;

    std::cout << number;   // ✅ Allowed
}

"number" can be accessed inside "display()".

2. Block Scope

A variable declared inside "{ }" has block scope.

int main()
{
    {
        int x = 10;
        std::cout << x;   // ✅ Allowed
    }

    std::cout << x;       // ❌ Error
}

"x" can be used only inside the block where it is declared.

3. Global Scope

A variable declared outside all functions has global scope.

int age = 22;

int main()
{
    std::cout << age;   // ✅ Allowed
}

Here, "age" is declared outside the functions, so it can be accessed from places where its name is visible.

Scope Example

int x = 10;   // Global scope

int main()
{
    int y = 20;   // Local scope

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}

Here:

- "x" → Global scope
- "y" → Local scope

Scope vs Lifetime

Scope and lifetime are different.

- Scope → Where can I use the variable?
- Lifetime → How long does the object exist?

For example, a local variable may have a small scope but exist only while execution is inside that function.

Important Points

- Scope defines where a variable can be accessed.
- A local variable can be accessed only within its scope.
- A variable inside "{ }" has block scope.
- A variable declared outside functions can have global scope.
- Scope is about where a name is visible, not how long the object exists.

Easy Definition

Scope is the area of a program where a variable can be accessed or used.


## Topic 8: Lifetime

What is Lifetime?

Lifetime is the period during which an object exists in a program.

In simple words:

«Lifetime tells us how long an object is alive.»

An object's lifetime starts when it is created and ends when it is destroyed.

Simple Example

void fun()
{
    int x = 10;

    std::cout << x << std::endl;
}

When "fun()" is called:

1. "x" is created.
2. "x" is used.
3. The function finishes.
4. "x" is destroyed.

So, the lifetime of "x" is approximately:

Function starts → Function ends

Static Variable Example

void fun()
{
    static int x = 10;

    std::cout << x << std::endl;
}

Here, "x" is a local variable, but because it is "static", its lifetime continues until the program ends.

It is initialized only once and keeps its value between function calls.

Scope vs Lifetime

Scope and lifetime are different concepts.

Scope

Scope = Where can I use the variable?

Lifetime

Lifetime = How long does the object exist?

For example:

void fun()
{
    static int x = 10;
}

Here:

- "x" has local/block scope.
- "x" has static storage duration.
- Its lifetime continues until the program ends.

Common Lifetime Examples

Local Automatic Object

void fun()
{
    int x = 10;
}

"x" is created when execution reaches its declaration and is destroyed when its scope is exited.

Static Object

static int x = 10;

The object exists for the lifetime of the program.

Dynamic Object

int* p = new int(10);

delete p;

The dynamically allocated object exists from "new" until it is released with "delete" (for this raw-pointer example).

Important Points

- Lifetime starts when an object is created.
- Lifetime ends when an object is destroyed.
- Different objects can have different lifetimes.
- Lifetime is different from scope.
- A local variable usually has a short lifetime.
- A static object has a lifetime that lasts until program termination.

Easy Definition

Lifetime is the period from when an object is created until it is destroyed.
