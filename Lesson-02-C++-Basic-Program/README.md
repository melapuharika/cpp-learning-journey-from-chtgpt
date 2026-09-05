Lesson 2: C++ Basic Program

Topics

1. C++ Program
2. "#include"
3. "using namespace std"
4. "main()"
5. "std::cout"
6. "std::cin"
7. "std::endl"
8. Comments
9. Namespace
10. Compilation and Execution

11. Lesson 2: C++ Basic Program

## C++ Program

A C++ program is a set of instructions written in C++ to perform a specific task.

Basic C++ Program

#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
    return 0;
}

Output

Hello World

---

2. "#include"

"#include" is a preprocessor directive used to include a header file in a C++ program.

Example:

#include <iostream>

"iostream" provides input and output features such as "std::cout" and "std::cin".

---

3. "using namespace std"

"std" is the standard namespace in C++.

Without "using namespace std":

std::cout
std::cin
std::endl

With:

using namespace std;

we can write:

cout
cin
endl

Using "std::" explicitly is often clearer, especially in larger programs.

---

4. "main()"

"main()" is the starting point of a C++ program.

Program execution normally begins from the "main()" function.

Example:

int main()
{
    return 0;
}

"int" indicates that "main()" returns an integer value.

---

5. "std::cout"

"std::cout" is used to display output on the screen.

Example:

std::cout << "Hello World";

Output:

Hello World

"<<" is called the insertion operator.

---

6. "std::cin"

"std::cin" is used to take input from the user.

Example:

int age;
std::cin >> age;

If the user enters "20", the value "20" is stored in "age".

">>" is called the extraction operator.

Remember

- "cout" → Output
- "cin" → Input

---

7. "std::endl"

"std::endl" moves the output to the next line.

Example:

std::cout << "Hello" << std::endl;
std::cout << "World";

Output:

Hello
World

---

8. Comments

Comments are notes written inside the program to make code easier to understand.

Comments are ignored as executable code.

Single-Line Comment

// This is a comment

Multi-Line Comment

/*
   This is a
   multi-line comment
*/

---

9. Namespace

A namespace is used to organize names and avoid naming conflicts.

The C++ Standard Library uses the "std" namespace.

Examples:

std::cout
std::cin
std::endl

Here:

- "std" → namespace
- "::" → scope resolution operator
- "cout" → name inside the "std" namespace

So:

std::cout

means "cout" from the "std" namespace.

---

10. Compilation and Execution

C++ source code needs to be compiled before it can be executed.

Basic Flow

C++ Source Code
       ↓
    Compiler
       ↓
 Executable Program
       ↓
      Run
       ↓
     Output

Using "g++":

g++ main.cpp -o main

Run on Windows:

.\main

---

Complete Example

#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your age is " << age << std::endl;

    return 0;
}

Example Output

Enter your age: 22
Your age is 22

---

Quick Revision

Concept| Purpose
"#include"| Includes a header file
"iostream"| Provides input/output features
"main()"| Starting point of program execution
"std::cout"| Displays output
"std::cin"| Takes input
"std::endl"| Moves to the next line
"//"| Single-line comment
"/* */"| Multi-line comment
"std"| Standard namespace
"::"| Scope resolution operator
"g++"| C++ compiler

Easy Memory Trick

- "cout" → OUTput 📤
- "cin" → INput 📥
- "main()" → START 🚀
- "endl" → NEXT LINE ↩️
- "//" → NOTE 📝
- "std" → STANDARD NAMESPACE
- "#include" → INCLUDE REQUIRED HEADER

One-Line Summary

A C++ program normally starts from "main()", uses headers and standard library features such as "std::cout" and "std::cin", and is compiled before execution.
