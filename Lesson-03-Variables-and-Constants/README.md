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
