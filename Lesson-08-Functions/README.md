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



### topic:2,3,4 Functions – Declaration, Definition and Calling

What is a Function?

A function is a reusable block of code created to perform a specific task.

Example:

void greet() {
    cout << "Hello";
}

A function can be created once and called multiple times.

---

1. Function Declaration

Definition

A function declaration tells the compiler that a function exists.

It gives information about the function's return type, name, and parameters.

Syntax

returnType functionName(parameters);

Example

int add(int a, int b);

Here:

- "int" → return type
- "add" → function name
- "int a, int b" → parameters
- ";" → ends the declaration

Simple Meaning

Declaration = "This function exists."

---

2. Function Definition

Definition

A function definition contains the actual code that tells the function what to do.

Syntax

returnType functionName(parameters) {
    // function body
}

Example

int add(int a, int b) {
    return a + b;
}

Here:

- "int" → return type
- "add" → function name
- "int a, int b" → parameters
- "{ }" → function body
- "return a + b;" → actual work

Simple Meaning

Definition = "This is what the function does."

---

3. Function Calling

Definition

Function calling means asking the function to execute its code.

Syntax

functionName(arguments);

Example

add(10, 20);

Here:

- "add" → function name
- "10, 20" → arguments

The function receives these values and performs its work.

10 + 20 = 30

Simple Meaning

Calling = "Function, do your work now."

---

Complete Example

#include <iostream>
using namespace std;

// Function Declaration
int add(int a, int b);

int main() {

    // Function Calling
    int result = add(10, 20);

    cout << result;

    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}

Output

30

---

How It Works

Declaration
     ↓
"add function exists"
     ↓
main()
     ↓
Calling: add(10, 20)
     ↓
Function Definition
     ↓
10 + 20
     ↓
30
     ↓
Return to main()

---

Declaration vs Definition vs Calling

Concept| Meaning
Declaration| Tells that the function exists
Definition| Tells what the function does
Calling| Executes the function

Easy Memory Trick

Declaration → Function undi

Definition → Function em chestundo

Calling → Function ni run cheyyi

Real-life Example

Think of a restaurant:

- Declaration → "Biryani is available." 🍚
- Definition → Recipe for making biryani. 👩‍🍳
- Calling → "One biryani please!" 😋

So:

Declaration → Exists

Definition → Works

Calling → Runs


### topic :5 Functions — Parameters

Definition

Parameters are variables used inside a function to receive values from the function call.

Syntax

returnType functionName(parameter1, parameter2) {
    // statements
}

Example

int add(int a, int b) {
    return a + b;
}

int result = add(10, 20);

Here:

- "a" and "b" → Parameters
- "10" and "20" → Arguments
- "a = 10", "b = 20"
- Result → "30"

Parameters vs Arguments

Parameters| Arguments
Variables in function definition| Actual values passed during function call
Receive values| Provide values
Example: "int a"| Example: "10"

Multiple Parameters

int multiply(int a, int b, int c) {
    return a * b * c;
}

Important Points

- A function can have zero, one, or multiple parameters.
- Parameters act like empty boxes that receive values.
- Arguments are the actual values put into those boxes.

Memory Trick

Parameter = Empty box 📦
Argument = Value placed inside the box 🎁
