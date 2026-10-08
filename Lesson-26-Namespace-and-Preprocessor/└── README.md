Lesson-26-Namespace-and-Preprocessor/

README.md
 01-namespace.md
 02-nested-namespace.md
 03-anonymous-namespace.md
 04-using.md
 05-namespace-aliases.md
 06-include.md
 07-define.md
 08-macros.md
 09-conditional-compilation.md
 10-if.md
 11-ifdef.md
 12-ifndef.md
 13-include-guards.md
 14-pragma.md

### topic 1

Namespace in C++

1. Introduction

A namespace is a named scope in C++ used to organize related identifiers such as variables, functions, classes, and objects.

The main purpose of a namespace is to avoid name conflicts and organize code.

---

2. Why Do We Need Namespaces?

Consider this example:

int age = 20;
int age = 25;

This produces an error because the same variable name "age" is declared twice in the same scope.

Namespaces allow us to use the same name in different namespaces.

namespace Student {
    int age = 20;
}

namespace Employee {
    int age = 25;
}

Here, both variables have the same name, but they belong to different namespaces.

---

3. Syntax

namespace namespace_name {
    // declarations
}

Example:

namespace Student {
    int age = 20;
}

Here:

- "namespace" → C++ keyword
- "Student" → namespace name
- "age" → member of the namespace

---

4. Accessing Namespace Members

Namespace members can be accessed using the scope resolution operator "::".

Syntax

namespace_name::member_name

Example:

Student::age

This means:

«Access "age" from the "Student" namespace.»

---

5. Example

#include <iostream>

namespace Student {
    int age = 20;
}

int main() {
    std::cout << Student::age;

    return 0;
}

Output

20

---

6. Multiple Namespaces

Different namespaces can contain members with the same name.

#include <iostream>

namespace Student {
    int age = 20;
}

namespace Employee {
    int age = 30;
}

int main() {
    std::cout << Student::age << std::endl;
    std::cout << Employee::age << std::endl;

    return 0;
}

Output

20
30

There is no name conflict because "age" belongs to different namespaces.

---

7. Namespace and Scope Resolution Operator

The "::" operator is called the scope resolution operator.

It is used to specify exactly where a particular name belongs.

Example:

Student::age
Employee::age

Here:

Student → namespace
::      → scope resolution operator
age     → member

---

8. Namespace with Functions

A namespace can contain functions as well.

#include <iostream>

namespace Calculator {

    int add(int a, int b) {
        return a + b;
    }

}

int main() {

    std::cout << Calculator::add(10, 20);

    return 0;
}

Output

30

Here, the "add()" function belongs to the "Calculator" namespace.

---

9. Namespace with Classes

A namespace can also contain classes.

namespace College {

    class Student {
    public:
        void display() {
            std::cout << "Student";
        }
    };

}

The class can be accessed as:

College::Student

---

10. Standard Namespace

C++ Standard Library uses the namespace "std".

Examples:

std::cout
std::cin
std::string
std::vector

Here:

std   → namespace
::    → scope resolution operator
cout  → member

For example:

std::cout << "Hello";

means that "cout" belongs to the "std" namespace.

---

11. Using Namespace

We can use:

using namespace std;

After this, we can write:

cout << "Hello";
cin >> age;

instead of:

std::cout << "Hello";
std::cin >> age;

The "using" declaration will be discussed in detail in a later topic.

---

12. Advantages of Namespaces

1. Avoids Name Conflicts

Different namespaces can contain members with the same name.

2. Organizes Code

Related functions, classes, and variables can be grouped together.

3. Improves Readability

Namespaces make it clear where a particular identifier belongs.

4. Useful in Large Projects

Large programs and libraries can use namespaces to prevent naming conflicts.

---

13. Important Points

- A namespace is a named scope.
- It is declared using the "namespace" keyword.
- Namespace members are accessed using "::".
- The "::" operator is called the scope resolution operator.
- Different namespaces can contain members with the same name.
- The standard C++ library uses the "std" namespace.
- Namespaces help organize large programs.
- Namespaces help prevent name conflicts.

---

14. Simple Real-Life Analogy

Imagine two departments in a college:

Department A
    Student

Department B
    Student

Both departments have a "Student", but they are different.

Similarly:

namespace DepartmentA {
    int student;
}

namespace DepartmentB {
    int student;
}

We can access them using:

DepartmentA::student
DepartmentB::student

---

15. One-Line Definition

A namespace is a named scope used to organize identifiers and prevent name conflicts in C++.

---

Key Syntax

namespace Name {
    // members
}

Name::member;

Example

namespace Student {
    int age = 20;
}

std::cout << Student::age;
