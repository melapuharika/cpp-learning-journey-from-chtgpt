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

## topic:6 Functions — Return Value

Definition

A return value is the result that a function sends back to the place where it was called.

Syntax

return value;

Example

int add(int a, int b) {
    return a + b;
}

int result = add(10, 20);

Output

30

Here:

- "int" → function returns an integer value.
- "return a + b;" → sends the result back.
- "result" → stores the returned value.

Important Points

- "return" ends the function.
- It can send a value back to the caller.
- The return type must match the returned value.
- "void" functions normally do not return a value.

Example

int square(int n) {
    return n * n;
}

int answer = square(5);

Here, "25" is the return value.

Memory Trick

Function → Does the work → Returns the result 🔄


## topic:7 Functions — Pass by Value

Definition

Pass by Value means passing a copy of the value to a function.

The function works on the copy, so the original variable is not changed.

Example

#include <iostream>
using namespace std;

void change(int a) {
    a = 50;
}

int main() {
    int x = 10;

    change(x);

    cout << x;

    return 0;
}

Output

10

How It Works

x = 10
 ↓
Copy of 10
 ↓
a = 10
 ↓
a = 50

The original "x" remains "10".

Important Points

- A copy of the value is passed to the function.
- Changes made to the parameter do not affect the original variable.
- Original variable remains unchanged.

Memory Trick

Pass by Value = Copy → Function → Original Safe 🛡️


## topic:8 Functions — Pass by Reference

Definition

Pass by Reference means passing a reference to the original variable to a function.

The function can directly modify the original variable.

Syntax

returnType functionName(dataType &parameter) {
    // statements
}

Example

#include <iostream>
using namespace std;

void change(int &a) {
    a = 50;
}

int main() {
    int x = 10;

    change(x);

    cout << x;

    return 0;
}

Output

50

How It Works

x = 10
 ↓
a refers to x
 ↓
a = 50
 ↓
x = 50

Here, "a" is a reference to the original variable "x".

Important Points

- Uses "&" with the parameter.
- No separate copy is created.
- Changes made to the parameter affect the original variable.
- Useful when a function needs to modify the original variable.

Quick Comparison

Method| What is passed?| Original changes?
Pass by Value| Copy| ❌ No
Pass by Reference| Reference| ✅ Yes
Pass by Pointer| Address| ✅ Yes

Memory Trick

Reference = Original variable ka direct connection 🔗


## topic:9 Functions — Pass by Pointer

Definition

Pass by Pointer means passing the address of a variable to a function using a pointer.

The function can use the address to access or modify the original variable.

Syntax

void functionName(int *p) {
    // statements
}

Example

#include <iostream>
using namespace std;

void change(int *p) {
    *p = 50;
}

int main() {
    int x = 10;

    change(&x);

    cout << x;

    return 0;
}

Output

50

How It Works

x = 10
 ↓
&x → address of x
 ↓
p → stores address
 ↓
*p → accesses x
 ↓
x = 50

Important Symbols

Symbol| Meaning
"&x"| Address of "x"
"int *p"| Pointer storing an address
"*p"| Value at the stored address

Important Points

- Passes the address, not a copy of the value.
- Uses a pointer ("*").
- The function can modify the original variable.
- "&" is used when passing the variable's address.
- "*" is used to access the value through the pointer.

Memory Trick

Pointer = Address 📍 → Original Variable → Can Modify



## topic: 10Functions — Default Arguments

Definition

A Default Argument is a predefined value used by a function when an argument is not provided during the function call.

Syntax

returnType functionName(dataType parameter = defaultValue) {
    // statements
}

Example

#include <iostream>
using namespace std;

void greet(string name = "Friend") {
    cout << "Hello " << name;
}

int main() {
    greet();
    greet("Harika");

    return 0;
}

Output

Hello Friend
Hello Harika

How It Works

greet()
→ No argument
→ Default value "Friend" is used

greet("Harika")
→ Argument is provided
→ "Harika" is used

Important Points

- Default arguments are predefined values.
- If an argument is not given, the default value is used.
- If an argument is given, the given value is used.
- Default arguments are written using "=".
- They are useful when a function should have a backup value.

Memory Trick

No Argument → Default Value ✅


### topic: 11Functions — Function Overloading

Definition

Function Overloading means having multiple functions with the same name but different parameters.

Example

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30);

    return 0;
}

Output

30
60

Here:

add(int, int)
add(int, int, int)

Both have the same function name, but their parameters are different.

Function Overloading Can Differ By

- Number of parameters
- Type of parameters
- Order of parameters

Example

int show(int x);
double show(double x);

Important Point

Return type alone cannot be used for function overloading.

❌ Not valid:

int add(int a, int b);
double add(int a, int b);

Parameters are the same; only return type is different.

Memory Trick

Same Name + Different Parameters = Function Overloading 🔄


## topic:12 Functions — Inline Function

Definition

An Inline Function is a function declared using the "inline" keyword. It suggests that the compiler may replace the function call with the function code at the place where it is called.

Syntax

inline returnType functionName(parameters) {
    // statements
}

Example

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5);

    return 0;
}

Output

25

Important Points

- Uses the "inline" keyword.
- Mainly useful for small and simple functions.
- It can reduce function-call overhead.
- "inline" is a request/suggestion to the compiler, not a guarantee.
- The compiler decides whether to actually inline the function.

Memory Trick

"inline" = Small function → Possible code expansion at the call place ⚡


## topic 13 Functions — Recursive Function

Definition

A Recursive Function is a function that calls itself to solve a problem.

Two Important Parts

1. Base Case → Stops the recursion.
2. Recursive Case → Calls the function again.

Example

#include <iostream>
using namespace std;

void countDown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << endl;
    countDown(n - 1);
}

int main() {
    countDown(5);

    return 0;
}

Output

5
4
3
2
1

How It Works

countDown(5)
↓
countDown(4)
↓
countDown(3)
↓
countDown(2)
↓
countDown(1)
↓
countDown(0)
↓
Base Case → STOP

Factorial Example

int factorial(int n) {
    if (n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

factorial(5)
→ 5 × factorial(4)
→ 5 × 4 × factorial(3)
→ 5 × 4 × 3 × factorial(2)
→ 5 × 4 × 3 × 2 × factorial(1)
→ 120

Important Points

- A recursive function calls itself.
- Every recursion should have a base case.
- Without a proper base case, recursion may continue indefinitely and cause stack overflow.
- Recursion is useful for problems that can be divided into smaller similar problems.

Memory Trick

Recursive Function = Self Call 🔁 + Base Case 


### topic: 14Functions — Lambda Function

Definition

A Lambda Function is a small anonymous function (a function without a name) used for quick tasks.

Syntax

[capture](parameters) {
    // function body
};

Example

#include <iostream>
using namespace std;

int main() {

    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(10, 20);

    return 0;
}

Output

30

Parts of Lambda

[]                  → Capture
(int a, int b)      → Parameters
{ return a + b; }   → Function body

Lambda Without Parameters

auto hello = []() {
    cout << "Hello!";
};

hello();

Important Points

- Lambda functions usually do not have a function name.
- They are useful for small and quick tasks.
- "[]" is called the capture clause.
- "auto" can be used to store a lambda in a variable.
- Lambda functions can have parameters and return values.

Memory Trick

Lambda = Small + Anonymous Function 


### topic: 15 Advanced Functions — Function Pointer

Definition

A Function Pointer is a pointer that stores the address of a function and can be used to call that function.

Example

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int) = add;

    cout << ptr(10, 20);

    return 0;
}

Output

30

How It Works

add()
 ↓
Function address
 ↓
ptr stores the address
 ↓
ptr(10, 20)
 ↓
add(10, 20)
 ↓
30

Syntax

returnType (*pointerName)(parameterTypes);

Example:

int (*ptr)(int, int);

Here:

- "int" → return type
- "ptr" → function pointer name
- "(int, int)" → parameter types

Important Points

- A function pointer stores a function's address.
- It can be used to call the function.
- The return type and parameter types must match the function.
- Function pointers are useful for callbacks and passing functions to other functions.

Memory Trick

Function → Address → Function Pointer → Call Function 🔗
