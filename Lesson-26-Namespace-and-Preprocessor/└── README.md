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


### topic 2

Nested Namespace in C++

1. Introduction

A nested namespace is a namespace declared inside another namespace.

In simple words:

«Namespace inside another namespace is called a nested namespace.»

The outer namespace contains the inner namespace.

---

2. Syntax

namespace Outer {

    namespace Inner {
        // members
    }

}

Here:

- "Outer" → Outer namespace
- "Inner" → Nested/Inner namespace

---

3. Simple Example

#include <iostream>

namespace College {

    namespace Student {
        int age = 20;
    }

}

int main() {

    std::cout << College::Student::age;

    return 0;
}

Output

20

---

4. How to Access a Nested Namespace Member

We use the scope resolution operator "::".

Syntax

OuterNamespace::InnerNamespace::member

Example:

College::Student::age

The compiler searches in this order:

College
   ↓
Student
   ↓
age

---

5. Nested Namespace with Functions

A nested namespace can contain functions.

#include <iostream>

namespace Calculator {

    namespace Basic {

        int add(int a, int b) {
            return a + b;
        }

    }

}

int main() {

    std::cout << Calculator::Basic::add(10, 20);

    return 0;
}

Output

30

Here:

Calculator → Outer namespace
Basic      → Nested namespace
add()      → Function

---

6. Multiple Nested Namespaces

A namespace can contain multiple nested namespaces.

namespace Company {

    namespace HR {
        int employees = 50;
    }

    namespace IT {
        int developers = 100;
    }

}

We can access them as:

Company::HR::employees
Company::IT::developers

---

7. Nested Namespace with Classes

A nested namespace can also contain classes.

#include <iostream>

namespace University {

    namespace Students {

        class Student {
        public:
            void display() {
                std::cout << "Student";
            }
        };

    }

}

int main() {

    University::Students::Student s;

    s.display();

    return 0;
}

Output

Student

---

8. Modern C++ Nested Namespace Syntax

C++17 introduced a shorter syntax for nested namespaces.

Instead of:

namespace Company {

    namespace IT {

        namespace Development {

            int value = 10;

        }

    }

}

We can write:

namespace Company::IT::Development {

    int value = 10;

}

Both represent nested namespaces.

Access:

Company::IT::Development::value

---

9. Why Use Nested Namespaces?

Nested namespaces are useful for organizing large programs.

For example:

Company
│
├── HR
│   └── employees
│
├── IT
│   ├── Development
│   └── Testing
│
└── Finance
    └── accounts

This creates a clear hierarchy.

---

10. Advantages

1. Better Organization

Related code can be grouped into different levels.

2. Avoids Name Conflicts

Different nested namespaces can have members with the same name.

3. Useful for Large Projects

Large applications and libraries can organize code hierarchically.

4. Improves Readability

The namespace hierarchy shows where an identifier belongs.

---

11. Nested Namespace vs Normal Namespace

Normal Namespace

namespace Student {
    int age = 20;
}

Student::age;

Nested Namespace

namespace College {

    namespace Student {
        int age = 20;
    }

}

College::Student::age;

The nested namespace provides an additional level of organization.

---

12. Important Points

- A namespace declared inside another namespace is called a nested namespace.
- The outer namespace contains the inner namespace.
- Nested namespace members are accessed using "::".
- Multiple levels of nesting are possible.
- C++17 provides a shorter syntax for nested namespaces.
- Nested namespaces are useful for organizing large programs.

---

13. One-Line Definition

A nested namespace is a namespace declared inside another namespace to provide hierarchical organization of identifiers.

---

Key Syntax

Traditional Syntax

namespace Outer {

    namespace Inner {
        // members
    }

}

Access:

Outer::Inner::member;

C++17 Syntax

namespace Outer::Inner {

    // members

}

Access:

Outer::Inner::member;


### topic 3

Anonymous Namespace in C++

1. Introduction

An anonymous namespace is a namespace that has no name.

It is created using the "namespace" keyword without specifying a name.

Anonymous namespaces are mainly used to make variables, functions, and other declarations local to a single source file (translation unit).

---

2. Syntax

namespace {
    // declarations
}

There is no name after the "namespace" keyword.

---

3. Simple Example

#include <iostream>

namespace {
    int value = 10;
}

int main() {

    std::cout << value;

    return 0;
}

Output

10

The variable "value" can be directly accessed within the same source file.

---

4. Why Is It Called Anonymous?

Normally, a namespace has a name:

namespace Student {
    int age = 20;
}

Here, "Student" is the namespace name.

But in an anonymous namespace:

namespace {
    int age = 20;
}

There is no namespace name.

Therefore, it is called an anonymous namespace.

---

5. Accessing Members

Anonymous namespace members can be accessed directly within the same source file.

Example:

namespace {
    int number = 100;
}

int main() {
    std::cout << number;
}

We don't write:

::number

We simply write:

number

---

6. Anonymous Namespace with Functions

An anonymous namespace can contain functions.

#include <iostream>

namespace {

    void display() {
        std::cout << "Hello";
    }

}

int main() {

    display();

    return 0;
}

Output

Hello

The "display()" function is intended to be used only within the same source file.

---

7. Anonymous Namespace with Multiple Members

An anonymous namespace can contain multiple declarations.

#include <iostream>

namespace {

    int number = 10;

    void display() {
        std::cout << number;
    }

}

int main() {

    display();

    return 0;
}

Both "number" and "display()" belong to the anonymous namespace.

---

8. Scope of an Anonymous Namespace

The important purpose of an anonymous namespace is file-local visibility.

Consider two source files:

main.cpp
helper.cpp

If we write this in "helper.cpp":

namespace {
    int value = 10;
}

"value" is intended to be usable only within "helper.cpp".

It is not intended to be accessed directly from "main.cpp".

---

9. Internal Linkage

Declarations in an anonymous namespace have internal linkage.

This means the entity is associated with the current translation unit.

In simple words:

«The name is intended to be available only inside that source file.»

This is useful when we have helper functions or variables that should not be exposed to other source files.

---

10. Anonymous Namespace vs Named Namespace

Named Namespace

namespace Student {
    int age = 20;
}

Access:

Student::age;

Anonymous Namespace

namespace {
    int age = 20;
}

Access:

age;

---

11. Anonymous Namespace vs "static"

Before anonymous namespaces became common, file-local global variables and functions were often declared using "static".

Example:

static int value = 10;

Modern C++ code commonly uses:

namespace {
    int value = 10;
}

Both can provide internal linkage for namespace-scope entities, but an anonymous namespace is often preferred for grouping multiple file-local declarations.

---

12. Why Use Anonymous Namespaces?

1. Avoid Name Conflicts

Names can remain private to the source file.

2. Hide Implementation Details

Helper functions and variables do not need to be exposed outside the source file.

3. Improve Code Organization

Multiple file-local declarations can be grouped together.

4. Provide Internal Linkage

The declarations have internal linkage.

---

13. Example with Helper Function

#include <iostream>

namespace {

    int square(int n) {
        return n * n;
    }

}

int main() {

    std::cout << square(5);

    return 0;
}

Output

25

The "square()" function is a helper function used by this source file.

---

14. Important Points

- An anonymous namespace has no name.
- It is declared using:

namespace {
}

- Its members can be accessed directly within the same source file.
- Namespace-scope declarations in an anonymous namespace have internal linkage.
- It is useful for file-local helper functions and variables.
- It helps hide implementation details.
- It can contain variables, functions, classes, and other declarations.
- Unlike a named namespace, it does not need a namespace name to access its members.

---

15. One-Line Definition

An anonymous namespace is an unnamed namespace whose namespace-scope declarations have internal linkage and are intended for use within the same translation unit.

---

Key Example

#include <iostream>

namespace {

    int value = 10;

    void display() {
        std::cout << value;
    }

}

int main() {

    display();

    return 0;
}

Output

10

Remember

Anonymous Namespace
        ↓
No name
        ↓
namespace { }
        ↓
Internal linkage
        ↓
File-local use
