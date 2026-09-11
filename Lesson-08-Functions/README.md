# Lesson 08 — Functions

1. Function
2. Function Declaration
3. Function Definition
4. Function Calling
5. Parameters
6. Return Values
7. Pass by Value
8. Pass by Reference
9. Pass by Pointer
10. Default Arguments
11. Function Overloading
12. Inline Function
13. Recursive Function
14. Lambda Function
15. Advanced Function
16. Function Pointers
17. Pointer to Member Function
18. std::function
19. Callback
20. Higher-Order Function

## topic 1 Functions – Introduction

Definition

A function is a reusable block of code that is created to perform a specific task.

Functions help us avoid writing the same code repeatedly.

Basic Syntax

returnType functionName(parameters) {
    // statements
}

Example

void greet() {
    cout << "Hello!\n";
}

Here:

- "void" → function does not return a value
- "greet" → function name
- "()" → parameters
- "{ }" → function body

Function Call

To execute a function, we need to call it.

greet();

Complete Example

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!\n";
}

int main() {
    greet();
    greet();

    return 0;
}

Output

Hello!
Hello!

The same function is called twice, so the message is printed twice.

Advantages of Functions

- Code Reusability – Write once and use multiple times.
- Less Repetition – Avoids writing the same code again.
- Easy to Understand – Divides a large program into smaller parts.
- Easy to Maintain – Changes can be made inside one function.

Important Function Concepts

1. Function Declaration
2. Function Definition
3. Function Call
4. Parameters
5. Arguments
6. Return Value
7. "void" Functions
8. Functions with Parameters
9. Functions with Return Value
10. Function Overloading

Memory Trick

Function = Write once → Call whenever needed → Reuse code.
