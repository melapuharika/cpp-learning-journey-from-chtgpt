# Lesson 3: Variables and Constants

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

A variable is a named memory location used to store data whose value can change during program execution.i
