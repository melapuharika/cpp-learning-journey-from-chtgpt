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


### topic 4

Using in C++

1. Introduction

The "using" keyword in C++ is used to make names from a namespace available in the current scope.

It can reduce the need to repeatedly write the namespace name and scope resolution operator "::".

For example:

std::cout

can be used as:

cout

by using a "using" declaration.

---

2. "using" Declaration

A using declaration introduces a specific name from a namespace into the current scope.

Syntax

using namespace_name::member_name;

Example

#include <iostream>

using std::cout;

int main() {
    cout << "Hello";
    return 0;
}

Output

Hello

Here:

using std::cout;

means that we can use "cout" directly without writing "std::cout".

---

3. Using Multiple Names

We can introduce multiple names individually.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {

    string name;

    cin >> name;
    cout << name;

    return 0;
}

Here, only "cout", "cin", and "string" are introduced.

Other members of "std" are not automatically introduced.

---

4. "using namespace"

A using-directive makes names from a namespace available for unqualified lookup in the relevant scope.

Syntax

using namespace namespace_name;

Example:

#include <iostream>

using namespace std;

int main() {

    cout << "Hello";

    return 0;
}

Instead of:

std::cout << "Hello";

we can write:

cout << "Hello";

---

5. Using Declaration vs Using Directive

Using Declaration

using std::cout;

Only a specific name is introduced.

Using Directive

using namespace std;

Names from the namespace can be used without repeatedly writing the namespace qualifier.

---

6. Example of "using std::cout"

#include <iostream>

using std::cout;

int main() {

    cout << "Hello";

    return 0;
}

This is equivalent to:

#include <iostream>

int main() {

    std::cout << "Hello";

    return 0;
}

---

7. Using a Function from a Namespace

Suppose we have:

namespace Calculator {

    int add(int a, int b) {
        return a + b;
    }

}

Normally, we call:

Calculator::add(10, 20);

Using a declaration:

using Calculator::add;

Now we can write:

add(10, 20);

Complete Example

#include <iostream>

namespace Calculator {

    int add(int a, int b) {
        return a + b;
    }

}

using Calculator::add;

int main() {

    std::cout << add(10, 20);

    return 0;
}

Output

30

---

8. Using a Class from a Namespace

A "using" declaration can also introduce a class.

#include <iostream>

namespace College {

    class Student {
    public:
        void display() {
            std::cout << "Student";
        }
    };

}

using College::Student;

int main() {

    Student s;
    s.display();

    return 0;
}

Output

Student

---

9. Namespace Alias vs Using

These two concepts are different.

Namespace Alias

namespace C = College;

This gives another name to the namespace itself.

Using Declaration

using College::Student;

This introduces a specific member into the current scope.

---

10. Advantages of "using"

1. Reduces Repetition

Instead of:

std::cout
std::cin
std::string

we can use:

cout
cin
string

when appropriate.

2. Improves Readability

Long namespace names can be avoided when using specific declarations.

3. Useful with Long Namespaces

For example:

using Company::Software::Development::Project;

After that:

Project p;

can be used.

---

11. Avoiding "using namespace std;" in Large Programs

Although this is valid:

using namespace std;

it is generally better to avoid putting it in global scope, especially in large projects and header files.

Why?

Because many names can become available and may cause name conflicts.

For example:

namespace A {
    int value = 10;
}

namespace B {
    int value = 20;
}

using namespace A;
using namespace B;

Now writing:

value;

can be ambiguous because both "A" and "B" contain "value".

It is clearer to write:

A::value;
B::value;

or use a specific using declaration when appropriate.

---

12. "using" Inside a Function

A using declaration can be placed inside a function.

#include <iostream>

int main() {

    using std::cout;

    cout << "Hello";

    return 0;
}

Here, the declaration is limited to the scope where it is written.

---

13. Important Points

- "using" is a C++ keyword.
- A using declaration introduces a specific name.
- Example:

using std::cout;

- A using-directive makes namespace names available without qualification.
- Example:

using namespace std;

- "using std::cout;" is more specific than "using namespace std;".
- "using" can be used with variables, functions, classes, and other names.
- Avoid unnecessary "using namespace" directives in large programs and header files.

---

14. One-Line Definitions

Using Declaration

A using declaration introduces a specific name from a namespace into the current scope.

Example:

using std::cout;

Using Directive

A using-directive allows names from a namespace to be used without repeatedly specifying the namespace qualifier.

Example:

using namespace std;

---

15. Quick Comparison

Feature| Using Declaration| Using Directive
Syntax| "using std::cout;"| "using namespace std;"
Scope| Specific name| Namespace names
Specificity| More specific| Broader
Example| "cout"| "cout", "cin", "string"
Name conflict risk| Lower| Higher

---

Key Concept

using std::cout;
        ↓
Only cout is introduced

using namespace std;
        ↓
Names from std can be used without std::

Remember

"using std::cout;" → specific name

"using namespace std;" → namespace-wide using-directive


### topic 5

Namespace Aliases in C++

1. Introduction

A namespace alias is an alternative name given to an existing namespace.

It is mainly used to make long namespace names shorter and easier to use.

In simple words:

«Namespace alias = Short name for an existing namespace.»

---

2. Syntax

namespace AliasName = ExistingNamespaceName;

Example:

namespace Short = VeryLongNamespaceName;

Here:

- "Short" → alias name
- "VeryLongNamespaceName" → original namespace

---

3. Simple Example

#include <iostream>

namespace MyLongNamespace {
    int value = 10;
}

namespace Short = MyLongNamespace;

int main() {

    std::cout << Short::value;

    return 0;
}

Output

10

Here:

namespace Short = MyLongNamespace;

creates an alias called "Short" for "MyLongNamespace".

---

4. Why Use Namespace Aliases?

Consider a very long namespace name:

namespace CompanySoftwareDevelopmentDepartment {
    int employees = 100;
}

Without an alias:

CompanySoftwareDevelopmentDepartment::employees;

This is long and difficult to read.

We can create an alias:

namespace CSD = CompanySoftwareDevelopmentDepartment;

Now we can write:

CSD::employees;

This is shorter and easier to read.

---

5. Important Point

A namespace alias does not create a new namespace.

Example:

namespace Original {
    int value = 10;
}

namespace Alias = Original;

"Alias" and "Original" refer to the same namespace.

They are not two separate namespaces.

---

6. Accessing Members Through an Alias

Suppose:

namespace College {

    int students = 500;

}

Create an alias:

namespace C = College;

Now we can access the member using:

C::students

We can also still use:

College::students

Both refer to the same member.

---

7. Namespace Alias with Functions

A namespace alias can also be used to access functions.

#include <iostream>

namespace Calculator {

    int add(int a, int b) {
        return a + b;
    }

}

namespace Calc = Calculator;

int main() {

    std::cout << Calc::add(10, 20);

    return 0;
}

Output

30

Here:

Calc::add()

is an alternative way to write:

Calculator::add()

---

8. Namespace Alias with Classes

A namespace containing a class can also have an alias.

#include <iostream>

namespace University {

    class Student {
    public:
        void display() {
            std::cout << "Student";
        }
    };

}

namespace Uni = University;

int main() {

    Uni::Student s;

    s.display();

    return 0;
}

Output

Student

---

9. Alias for Nested Namespace

We can also create an alias for a nested namespace.

namespace Company {

    namespace Development {
        int projects = 20;
    }

}

namespace Dev = Company::Development;

Now:

Dev::projects

can be used instead of:

Company::Development::projects

---

10. C++17 Nested Namespace Example

C++17 allows nested namespace syntax:

namespace Company::Development {

    int projects = 20;

}

We can create an alias:

namespace Dev = Company::Development;

Then:

Dev::projects;

---

11. Namespace Alias vs Namespace

These are different.

Creating a Namespace

namespace Student {
    int age = 20;
}

This creates a namespace.

Creating an Alias

namespace S = Student;

This creates another name for the existing namespace.

It does not create a new namespace.

---

12. Namespace Alias vs "using"

Namespace alias:

namespace C = Company;

This gives a short name to the whole namespace.

Using declaration:

using Company::Student;

This introduces a specific member of the namespace.

Example

namespace Company {
    class Student {};
}

Alias:

namespace C = Company;

C::Student s;

Using declaration:

using Company::Student;

Student s;

---

13. Advantages of Namespace Aliases

1. Shorter Names

Long namespace names can be shortened.

2. Better Readability

Code becomes easier to read.

3. Reduces Repetition

We don't need to repeatedly type a long namespace name.

4. Useful with Large Libraries

Large projects may have deeply nested or long namespaces.

---

14. Important Points

- A namespace alias provides an alternative name for an existing namespace.
- Syntax:

namespace Alias = ExistingNamespace;

- An alias does not create a new namespace.
- Both the original namespace and alias refer to the same namespace.
- Namespace aliases can be used with nested namespaces.
- They are useful for shortening long namespace names.
- Namespace aliases are different from "using" declarations.

---

15. One-Line Definition

A namespace alias is an alternative name given to an existing namespace to make long namespace names shorter and easier to use.

---

16. Key Example

#include <iostream>

namespace VeryLongNamespaceName {

    int value = 100;

}

namespace Short = VeryLongNamespaceName;

int main() {

    std::cout << Short::value;

    return 0;
}

Output

100

Remember

Original Namespace
       ↓
VeryLongNamespaceName
       ↓
namespace Short = VeryLongNamespaceName;
       ↓
Short::value

Namespace Alias → Short/alternative name for an existing namespace.


### topic 6

"#include" in C++

1. Introduction

"#include" is a preprocessor directive in C++.

It is used to make the contents of another file available to the current source file before the compiler processes the program.

Syntax

#include <header_file>

or

#include "header_file"

---

2. Why Do We Use "#include"?

C++ programs often need functionality provided by libraries or other files.

For example, to use "std::cout", we commonly include:

#include <iostream>

Example:

#include <iostream>

int main() {
    std::cout << "Hello C++";
    return 0;
}

Here, "iostream" provides the declarations needed for standard input/output operations.

---

3. "#include" Is a Preprocessor Directive

The "#include" directive is handled by the preprocessor before the compiler processes the source code.

Simplified flow:

Source Code
     ↓
Preprocessor
     ↓
#include is processed
     ↓
Compiler
     ↓
Object Code
     ↓
Linker
     ↓
Executable Program

---

4. Two Forms of "#include"

There are two commonly used forms:

1. Angle Brackets

#include <iostream>

2. Double Quotes

#include "myheader.h"

---

5. "#include <...>"

Angle brackets are commonly used for standard library or system headers.

Example:

#include <iostream>
#include <string>
#include <vector>

Some common standard headers:

Header| Common Purpose
"<iostream>"| Input and output
"<string>"| "std::string"
"<vector>"| "std::vector"
"<algorithm>"| Algorithms
"<cmath>"| Mathematical functions
"<fstream>"| File streams
"<iomanip>"| Input/output formatting

Example:

#include <vector>

int main() {
    std::vector<int> numbers;
}

---

6. "#include "...""

Double quotes are commonly used for your own/project header files.

Example:

#include "calculator.h"

Suppose we have:

project/
├── main.cpp
└── calculator.h

Then "main.cpp" can contain:

#include "calculator.h"

This allows declarations from "calculator.h" to be used in "main.cpp".

---

7. Difference Between "< >" and "" ""

Feature| "<header>"| ""header""
Common use| Standard/system headers| Project/user headers
Example| "<iostream>"| ""calculator.h""
Search behavior| Typically searches configured system/include paths| Typically checks the source file's directory first, then configured include paths

Example:

#include <iostream>

and:

#include "myheader.h"

---

8. Including a Custom Header

Suppose we create:

"math_utils.h"

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);

#endif

"main.cpp"

#include <iostream>
#include "math_utils.h"

int main() {

    std::cout << add(10, 20);

    return 0;
}

The custom header is included using:

#include "math_utils.h"

---

9. Header Files

A header file usually contains declarations that can be shared between source files.

Common extensions include:

.h
.hpp

Example:

calculator.h
student.h
functions.hpp

A header can contain declarations for:

- Functions
- Classes
- Structures
- Constants
- Templates
- Other declarations

---

10. Example with a Header File

"calculator.h"

int add(int a, int b);

"calculator.cpp"

#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

"main.cpp"

#include <iostream>
#include "calculator.h"

int main() {

    std::cout << add(10, 20);

    return 0;
}

Output

30

Here:

calculator.h
      ↓
declaration

calculator.cpp
      ↓
definition

main.cpp
      ↓
uses add()

---

11. Can We Include a ".cpp" File?

Technically, the preprocessor can include a ".cpp" file:

#include "file.cpp"

But this is generally not recommended.

Normally:

- Header files → declarations/interfaces
- ".cpp" files → implementations/definitions

A normal project structure is:

project/
├── main.cpp
├── calculator.cpp
└── calculator.h

---

12. Multiple "#include" Directives

A source file can include multiple headers.

#include <iostream>
#include <string>
#include <vector>
#include "calculator.h"

Each directive tells the preprocessor to include the specified header.

---

13. "#include" and Header Guards

A header may accidentally be included more than once.

For example:

#include "student.h"
#include "student.h"

Repeated inclusion can cause multiple-definition or redeclaration problems, depending on the contents.

Header guards can prevent the same header from being processed multiple times in one translation unit.

Example:

#ifndef STUDENT_H
#define STUDENT_H

class Student {
};

#endif

This topic will be covered in detail later under Include Guards.

---

14. "#include" and the Preprocessor

The preprocessor processes directives beginning with "#".

Examples:

#include <iostream>
#define PI 3.14
#if VERSION == 2
#endif

"#include" is therefore part of the C++ preprocessing stage.

---

15. Important Points

- "#include" is a preprocessor directive.
- It begins with the "#" symbol.
- It is used to include headers or other files.
- "<...>" is commonly used for standard/system headers.
- ""..."" is commonly used for project/user headers.
- "#include" is processed before compilation.
- Header files commonly use ".h" or ".hpp".
- Header guards can prevent repeated inclusion of a header.
- Including ".cpp" files is generally not recommended.

---

16. Common Examples

Standard Library

#include <iostream>

#include <vector>

#include <string>

#include <algorithm>

User Header

#include "student.h"

#include "calculator.h"

---

17. One-Line Definition

"#include" is a preprocessor directive used to include the contents of a header or another file before compilation.

---

18. Quick Revision

#include
   ↓
Preprocessor directive
   ↓
Includes another file/header
   ↓
Processed before compilation

Remember

#include <iostream>

→ commonly used for standard/system headers.

#include "myheader.h"

→ commonly used for user/project headers.


### topic 7

"#define" in C++

1. Introduction

"#define" is a preprocessor directive in C++.

It is used to define a macro.

A macro is a name that the preprocessor replaces with specified replacement text before the compiler processes the program.

Basic Syntax

#define name replacement

Example:

#define PI 3.14159

---

2. How "#define" Works

Consider:

#define PI 3.14159

double area = PI * 10 * 10;

Before compilation, the preprocessor conceptually replaces "PI" with "3.14159":

double area = 3.14159 * 10 * 10;

The compiler then processes the resulting source code.

Flow

#define PI 3.14159
        ↓
Preprocessor
        ↓
PI → 3.14159
        ↓
Compiler

---

3. Simple Example

#include <iostream>

#define PI 3.14159

int main() {

    std::cout << PI;

    return 0;
}

Output

3.14159

---

4. Defining Constants with "#define"

A macro can be used to represent a constant value.

#define MAX_SIZE 100
#define MIN_VALUE 0
#define DAYS_IN_WEEK 7

Example:

#include <iostream>

#define MAX_SIZE 100

int main() {

    int numbers[MAX_SIZE];

    std::cout << MAX_SIZE;

    return 0;
}

Output

100

---

5. "#define" Does Not Create a Variable

This is an important point.

When we write:

#define PI 3.14159

"PI" is not a C++ variable.

It is a macro handled by the preprocessor.

There is:

- No variable object named "PI"
- No C++ type associated with the macro name itself
- No normal variable storage created just because of the macro

---

6. Object-Like Macros

A macro without parameters is called an object-like macro.

Syntax

#define NAME replacement

Example:

#define MAX_SIZE 100

Another example:

#define MESSAGE "Hello C++"

Usage:

std::cout << MESSAGE;

---

7. Function-Like Macros

Macros can also accept parameters.

Syntax

#define NAME(parameter) replacement

Example:

#define SQUARE(x) ((x) * (x))

Usage:

int result = SQUARE(5);

The preprocessor expands it approximately to:

int result = ((5) * (5));

So:

SQUARE(5)
    ↓
((5) * (5))
    ↓
25

Function-like macros are covered more deeply in the Macros topic.

---

8. "#define" with Strings

We can define string replacement text.

#define GREETING "Hello, World!"

Example:

#include <iostream>

#define GREETING "Hello, World!"

int main() {

    std::cout << GREETING;

    return 0;
}

Output

Hello, World!

---

9. Undefining a Macro

The "#undef" directive can remove a previously defined macro.

Example

#define VALUE 100

#undef VALUE

After "#undef VALUE", the macro "VALUE" is no longer defined.

Example:

#include <iostream>

#define VALUE 100

int main() {

    std::cout << VALUE;

    return 0;
}

If we write:

#undef VALUE

before using "VALUE", it will no longer have the macro definition.

---

10. "#define" with Conditional Compilation

"#define" is often used together with conditional compilation.

Example:

#define DEBUG

Then:

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

If "DEBUG" is defined, the code inside "#ifdef" is processed.

Conditional compilation will be covered in detail in a later topic.

---

11. "#define" vs "const"

In modern C++, "const" or "constexpr" is often preferred for typed constants.

Using "#define"

#define PI 3.14159

Using "constexpr"

constexpr double PI = 3.14159;

Differences

Feature| "#define"| "constexpr"
Type| No C++ type for macro| Has a C++ type
Processed by| Preprocessor| Compiler
Scope behavior| Macro-based| Normal C++ scope
Debugging| Generally less convenient| Generally easier
Type checking| No| Yes
Modern C++ preference for constants| Usually avoid when unnecessary| Preferred

---

12. Why "constexpr" Is Often Better

Consider:

constexpr double PI = 3.14159;

The compiler knows that "PI" is a "double".

But:

#define PI 3.14159

is simply preprocessor replacement text.

Therefore, for ordinary typed constants, modern C++ generally prefers:

constexpr

over:

#define

when a macro is not actually needed.

---

13. Rules for Macro Names

Macro names are commonly written in uppercase letters to distinguish them from ordinary variables.

Example:

#define MAX_SIZE 100
#define PI 3.14159
#define VERSION 1

This is a naming convention, not a requirement.

---

14. Example Program

#include <iostream>

#define MAX_MARKS 100
#define PASS_MARKS 40

int main() {

    int marks = 75;

    std::cout << "Maximum Marks: " << MAX_MARKS << std::endl;
    std::cout << "Pass Marks: " << PASS_MARKS << std::endl;
    std::cout << "Student Marks: " << marks;

    return 0;
}

Output

Maximum Marks: 100
Pass Marks: 40
Student Marks: 75

---

15. Advantages of "#define"

1. Simple Text Replacement

It can replace a name with specified text.

2. Useful for Conditional Compilation

Macros can act as feature or configuration flags.

3. Useful for Header Guards

"#define" is commonly used with "#ifndef" to create traditional include guards.

4. Useful for Function-Like Macros

It can create parameterized macros when appropriate.

---

16. Disadvantages of "#define"

1. No Type Safety

Macros are not normal typed C++ objects.

2. Can Make Debugging Harder

The source seen by the compiler has already undergone macro expansion.

3. Can Cause Unexpected Substitution

Because macros perform preprocessing replacement.

4. Can Cause Name Conflicts

A macro name can conflict with other identifiers.

5. Often Unnecessary for Constants

Modern C++ provides better alternatives such as:

const
constexpr
enum
inline functions

depending on the situation.

---

17. Important Points

- "#define" is a preprocessor directive.
- It is used to define macros.
- Macro replacement occurs during preprocessing.
- "#define" does not create a normal C++ variable.
- Object-like macros have no parameters.
- Function-like macros can have parameters.
- "#undef" removes a macro definition.
- Macros are often written using uppercase names by convention.
- "#define" is useful for conditional compilation and include guards.
- For ordinary typed constants, "constexpr" is usually preferred in modern C++.

---

18. One-Line Definition

"#define" is a preprocessor directive used to define macros that are expanded by the preprocessor before compilation.

---

Quick Revision

#define
   ↓
Preprocessor directive
   ↓
Defines a macro
   ↓
Macro expansion
   ↓
Compiler processes expanded code

Example

#define MAX_SIZE 100

Usage:

int arr[MAX_SIZE];

Conceptually becomes:

int arr[100];

Remember

"#define" → Macro definition

"#undef" → Remove macro definition

"constexpr" → Preferred for many typed compile-time constants in modern C++


### topic 8

C++ Macros

1. Introduction

A macro is a name that represents a piece of replacement text and is defined using the "#define" preprocessor directive.

Macros are processed by the preprocessor before compilation.

Basic Syntax

#define MACRO_NAME replacement_text

Example:

#define PI 3.14159

Here:

- "PI" → Macro name
- "3.14159" → Replacement text

---

2. How Macros Work

Consider:

#define MAX_SIZE 100

int arr[MAX_SIZE];

Before the compiler processes the code, the preprocessor expands the macro:

int arr[100];

Process

#define MAX_SIZE 100
        ↓
Preprocessor
        ↓
MAX_SIZE → 100
        ↓
Compiler

---

3. Types of Macros

There are mainly two common types of macros:

1. Object-like macros
2. Function-like macros

---

4. Object-Like Macros

An object-like macro does not have parameters.

Syntax

#define NAME replacement

Example:

#define PI 3.14159
#define MAX_SIZE 100
#define VERSION 1

Example program:

#include <iostream>

#define MAX_SIZE 100

int main() {

    std::cout << MAX_SIZE;

    return 0;
}

Output

100

---

5. Function-Like Macros

A function-like macro accepts parameters.

Syntax

#define NAME(parameter) replacement

Example:

#define SQUARE(x) ((x) * (x))

Usage:

int result = SQUARE(5);

The preprocessor expands it approximately to:

int result = ((5) * (5));

Therefore:

SQUARE(5)
   ↓
((5) * (5))
   ↓
25

---

6. Function-Like Macro Example

#include <iostream>

#define SQUARE(x) ((x) * (x))

int main() {

    std::cout << SQUARE(5);

    return 0;
}

Output

25

---

7. Macro with Multiple Parameters

A macro can have multiple parameters.

Example:

#define ADD(a, b) ((a) + (b))

Usage:

int result = ADD(10, 20);

After macro expansion, it becomes approximately:

int result = ((10) + (20));

Output

30

---

8. Why Parentheses Are Important in Macros

Consider this macro:

#define SQUARE(x) x * x

Now:

SQUARE(2 + 3)

Expansion becomes:

2 + 3 * 2 + 3

Because multiplication has higher precedence than addition, the result is not the expected "25".

A safer macro is:

#define SQUARE(x) ((x) * (x))

Now:

SQUARE(2 + 3)

expands to:

((2 + 3) * (2 + 3))

Result:

25

Important Rule

When writing function-like macros, parenthesize parameters and the complete expression.

---

9. Macro with Multiple Statements

A macro can contain multiple statements.

Example:

#define PRINT_MESSAGE() \
    std::cout << "Hello" << std::endl; \
    std::cout << "Welcome" << std::endl;

The backslash "\" is used to continue the macro definition onto the next line.

Example:

#include <iostream>

#define PRINT_MESSAGE() \
    std::cout << "Hello" << std::endl; \
    std::cout << "Welcome" << std::endl;

int main() {

    PRINT_MESSAGE();

    return 0;
}

Output

Hello
Welcome

However, multi-statement macros can behave unexpectedly in some contexts. Modern C++ generally prefers functions when a normal function can do the job.

---

10. Macro Expansion

Macro expansion means replacing a macro name with its replacement text during preprocessing.

Example:

#define NUMBER 10

int x = NUMBER;

After expansion:

int x = 10;

Another example:

#define ADD(a, b) ((a) + (b))

int result = ADD(5, 3);

After expansion:

int result = ((5) + (3));

---

11. Macro Does Not Have a Type

Consider:

#define VALUE 100

"VALUE" itself does not have a C++ type.

It is simply replaced with:

100

The resulting expression is then interpreted by the compiler.

Compare:

#define VALUE 100

with:

constexpr int VALUE = 100;

The second one is a real C++ object with a type.

---

12. Macro vs Function

Feature| Macro| Function
Processed by| Preprocessor| Compiler
Type checking| No| Yes
Parameters| Text substitution| Typed parameters
Debugging| More difficult| Easier
Scope| Preprocessor-based| Normal C++ scope
Runtime function call| No| Usually yes
Safety| Lower| Higher

Example macro:

#define SQUARE(x) ((x) * (x))

Equivalent function:

int square(int x) {
    return x * x;
}

For ordinary operations, a function or "constexpr" function is usually safer.

---

13. Macro vs "constexpr"

For constants:

#define PI 3.14159

Modern C++ generally prefers:

constexpr double PI = 3.14159;

Why?

"constexpr" provides:

- Type safety
- Normal C++ scope
- Better compiler checking
- Better debugging support

---

14. Macro Arguments Can Have Side Effects

Consider:

#define SQUARE(x) ((x) * (x))

Now:

int i = 5;
int result = SQUARE(i++);

The parameter "i++" appears more than once after expansion:

((i++) * (i++))

This can produce unexpected behavior.

This is one reason ordinary functions are often safer than macros.

---

15. Predefined Macros

C++ also provides some predefined macros.

Examples include:

__FILE__
__LINE__
__DATE__
__TIME__

"__FILE__"

Gives the current source file name.

"__LINE__"

Gives the current source line number.

"__DATE__"

Provides the compilation date.

"__TIME__"

Provides the compilation time.

Example:

#include <iostream>

int main() {

    std::cout << __FILE__ << std::endl;
    std::cout << __LINE__ << std::endl;

    return 0;
}

The exact output depends on the source file and line number.

---

16. Removing a Macro

The "#undef" directive removes a macro definition.

Example:

#define VALUE 100

#undef VALUE

After "#undef", "VALUE" is no longer defined as that macro.

---

17. Macros and Conditional Compilation

Macros are commonly used with conditional compilation.

Example:

#define DEBUG

Then:

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

If "DEBUG" is defined, the code is included during preprocessing.

Conditional compilation will be covered separately.

---

18. Advantages of Macros

1. Simple Replacement

Macros can replace frequently used text.

2. Conditional Compilation

They are useful for enabling or disabling sections of code.

3. Compile-Time Configuration

Macros can be used for build configurations.

4. Header Guards

Traditional header guards use macros.

5. Generic Text-Based Operations

Some preprocessing tasks can only be conveniently performed using macros.

---

19. Disadvantages of Macros

1. No Type Safety

The preprocessor does not perform normal C++ type checking.

2. Difficult Debugging

Macro expansion can make debugging more complicated.

3. Unexpected Evaluation

Function-like macro parameters can be evaluated multiple times.

4. Operator Precedence Problems

Poorly written macros can produce unexpected results.

5. Name Conflicts

Macros can interfere with identifiers having the same name.

6. No Normal C++ Scope

Macros are controlled by preprocessing rules rather than ordinary C++ scope.

---

20. Best Practices for Macros

Use uppercase names

#define MAX_SIZE 100

Parenthesize macro parameters

Prefer:

#define SQUARE(x) ((x) * (x))

instead of:

#define SQUARE(x) x * x

Avoid unnecessary macros

For constants, prefer:

constexpr int MAX_SIZE = 100;

when appropriate.

For normal operations, prefer functions.

Keep macros simple

Complex macros are difficult to read and maintain.

---

21. Complete Example

#include <iostream>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define ADD(a, b) ((a) + (b))

int main() {

    int number = 5;

    std::cout << "PI = " << PI << std::endl;
    std::cout << "Square = " << SQUARE(number) << std::endl;
    std::cout << "Addition = " << ADD(10, 20) << std::endl;

    return 0;
}

Output

PI = 3.14159
Square = 25
Addition = 30

---

22. Important Points

- A macro is defined using "#define".
- Macros are processed by the preprocessor.
- Macro expansion happens before compilation.
- Object-like macros have no parameters.
- Function-like macros can accept parameters.
- Macro parameters should generally be parenthesized.
- Macros do not have normal C++ types.
- Macros can be removed using "#undef".
- Macros are useful for conditional compilation.
- Avoid using macros when a function or "constexpr" can safely replace them.
- Macros can cause unexpected results if written incorrectly.

---

23. One-Line Definition

A macro is a preprocessor-defined name that is replaced by its replacement text before the C++ compiler processes the program.

---

24. Quick Revision

Macro
  ↓
Defined using #define
  ↓
Processed by Preprocessor
  ↓
Macro Expansion
  ↓
Compiler processes expanded code

Examples

#define PI 3.14159

Object-like macro

#define SQUARE(x) ((x) * (x))

Function-like macro

#undef PI

Remove a macro

Remember

"#define" → Define a macro

Macro → Preprocessor replacement

"#undef" → Remove a macro

"constexpr" / functions → Often safer alternatives in modern C++


### topic 9

Conditional Compilation in C++

1. Introduction

Conditional compilation is a feature of the C++ preprocessor that allows us to include or exclude parts of a program based on conditions.

The preprocessor checks the condition before the compiler compiles the program.

Common Conditional Compilation Directives

#if
#ifdef
#ifndef
#else
#elif
#endif

---

2. Why Conditional Compilation Is Used

Conditional compilation is useful when we want different code to be compiled under different conditions.

Common uses include:

- Debugging
- Platform-specific code
- Different operating systems
- Different configurations
- Feature control
- Header guards
- Development and production builds

---

3. Basic Structure

The general structure is:

#if condition

// code

#endif

If the condition is true, the code is included.

If the condition is false, the code is excluded from compilation.

---

4. Simple Example

#include <iostream>

#define DEBUG

int main() {

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

    return 0;
}

Output

Debug mode

Because "DEBUG" is defined, the code inside "#ifdef DEBUG" is included.

---

5. "#if"

"#if" is used to compile code when a preprocessor condition evaluates to true.

Syntax

#if condition

// code

#endif

Example:

#include <iostream>

#define VERSION 2

int main() {

#if VERSION == 2
    std::cout << "Version 2";
#endif

    return 0;
}

Output

Version 2

Here:

VERSION == 2

is true, so the code is included.

---

6. "#if" with Different Values

Example:

#define VERSION 3

#if VERSION == 2
    // This code is excluded
#endif

#if VERSION == 3
    std::cout << "Version 3";
#endif

Only the second block is included.

---

7. "#ifdef"

"#ifdef" means:

«If defined»

It checks whether a particular macro has been defined.

Syntax

#ifdef MACRO_NAME

// code

#endif

Example:

#include <iostream>

#define DEBUG

int main() {

#ifdef DEBUG
    std::cout << "Debug mode is enabled";
#endif

    return 0;
}

Output

Debug mode is enabled

Because "DEBUG" is defined.

---

8. What Happens If the Macro Is Not Defined?

Consider:

#include <iostream>

int main() {

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

    return 0;
}

Here "DEBUG" has not been defined.

Therefore, the code inside "#ifdef DEBUG" is excluded.

Output

No output

---

9. "#ifndef"

"#ifndef" means:

«If not defined»

It checks whether a macro has not been defined.

Syntax

#ifndef MACRO_NAME

// code

#endif

Example:

#include <iostream>

#ifndef DEBUG
    std::cout << "Debug mode is not enabled";
#endif

If "DEBUG" is not defined, the message is included.

---

10. "#else"

"#else" provides an alternative block when the previous condition is false.

Syntax

#if condition

// code if true

#else

// code if false

#endif

Example:

#include <iostream>

#define VERSION 1

#if VERSION == 2
    std::cout << "Version 2";
#else
    std::cout << "Other version";
#endif

Output

Other version

---

11. "#ifdef" with "#else"

Example:

#include <iostream>

#define DEBUG

#ifdef DEBUG
    std::cout << "Debug mode";
#else
    std::cout << "Normal mode";
#endif

Output

Debug mode

If "DEBUG" were not defined:

Normal mode

would be printed.

---

12. "#ifndef" with "#else"

Example:

#include <iostream>

#ifndef DEBUG
    std::cout << "Debug is not enabled";
#else
    std::cout << "Debug is enabled";
#endif

If "DEBUG" is not defined:

Debug is not enabled

If "DEBUG" is defined:

Debug is enabled

---

13. "#elif"

"#elif" means:

«Else if»

It allows us to check multiple conditions.

Syntax

#if condition1

// code

#elif condition2

// code

#else

// code

#endif

Example:

#include <iostream>

#define VERSION 2

#if VERSION == 1
    std::cout << "Version 1";

#elif VERSION == 2
    std::cout << "Version 2";

#else
    std::cout << "Unknown version";

#endif

Output

Version 2

---

14. Multiple "#elif" Conditions

We can use multiple "#elif" directives.

#define VERSION 3

#if VERSION == 1

    // Version 1

#elif VERSION == 2

    // Version 2

#elif VERSION == 3

    // Version 3

#else

    // Unknown version

#endif

Only the first matching condition is included.

---

15. "#endif"

Every conditional compilation block must be properly closed with:

#endif

Example:

#ifdef DEBUG

    std::cout << "Debug";

#endif

"#endif" marks the end of the conditional section.

---

16. Complete Conditional Compilation Structure

#if condition

    // Code

#elif another_condition

    // Code

#else

    // Code

#endif

This is similar to:

if
else if
else

but it happens during preprocessing, not normal runtime execution.

---

17. Conditional Compilation vs "if"

These two are different.

Normal "if"

if (condition) {
    std::cout << "Hello";
}

The compiler compiles the program containing this statement, and the condition is evaluated when the program runs.

Conditional compilation

#if condition
    std::cout << "Hello";
#endif

The preprocessor decides whether the code is included before compilation.

Difference

Feature| "if"| "#if"
Handled by| Compiler| Preprocessor
When condition is handled| Runtime/compile-time depending on expression| Preprocessing
Code excluded from compilation?| No| Yes
Type checking of excluded code| Not applicable to excluded branch in the same way| Excluded code is not compiled
Used for| Program logic| Build/configuration control

---

18. Debugging with Conditional Compilation

Conditional compilation is commonly used for debugging.

Example:

#define DEBUG

#ifdef DEBUG
    std::cout << "Debug information";
#endif

When debugging is required, define:

#define DEBUG

When debugging is not required, remove or disable the definition.

---

19. Platform-Specific Code

Conditional compilation can be used for different operating systems or platforms.

Example:

#ifdef _WIN32
    std::cout << "Windows";
#elif defined(__linux__)
    std::cout << "Linux";
#else
    std::cout << "Other platform";
#endif

The exact predefined macros available depend on the compiler and platform.

---

20. Feature Control

We can use macros to enable or disable features.

Example:

#define FEATURE_A

#ifdef FEATURE_A
    std::cout << "Feature A is enabled";
#endif

If "FEATURE_A" is defined, the feature-related code is included.

---

21. Nested Conditional Compilation

Conditional directives can be nested.

Example:

#define DEBUG
#define VERSION 2

#ifdef DEBUG

    #if VERSION == 2
        std::cout << "Debug Version 2";
    #endif

#endif

Output

Debug Version 2

---

22. "defined" Operator

The "defined" operator can be used with "#if".

Example:

#define DEBUG

#if defined(DEBUG)
    std::cout << "Debug mode";
#endif

This is similar to:

#ifdef DEBUG

Another example:

#if !defined(DEBUG)
    std::cout << "Debug is not defined";
#endif

This is similar to:

#ifndef DEBUG

---

23. Example Program

#include <iostream>

#define VERSION 2

int main() {

#if VERSION == 1

    std::cout << "Running Version 1";

#elif VERSION == 2

    std::cout << "Running Version 2";

#else

    std::cout << "Unknown Version";

#endif

    return 0;
}

Output

Running Version 2

---

24. Advantages

1. Platform-Specific Code

Different code can be compiled for different operating systems.

2. Debugging

Debug-only code can be included when needed.

3. Feature Management

Features can be enabled or disabled.

4. Build Configuration

Different versions of a program can be created from the same source code.

5. Header Guards

Conditional compilation is used to prevent multiple inclusion of headers.

---

25. Disadvantages

1. Can Make Code Difficult to Read

Too many conditional blocks can make the source complicated.

2. Multiple Configurations

Testing every possible combination of macros can be difficult.

3. Debugging Can Be Harder

The actual code compiled may differ depending on the defined macros.

4. Excessive Use Should Be Avoided

Normal C++ language features should be preferred when conditional compilation is not necessary.

---

26. Important Points

- Conditional compilation is performed by the preprocessor.
- It can include or exclude sections of source code.
- "#if" checks a preprocessor condition.
- "#ifdef" checks whether a macro is defined.
- "#ifndef" checks whether a macro is not defined.
- "#elif" provides another condition.
- "#else" provides an alternative block.
- "#endif" closes the conditional block.
- "defined()" can check whether a macro exists.
- Conditional compilation happens before actual compilation.
- It is commonly used for debugging, platform-specific code, and configuration.

---

27. One-Line Definitions

"#if"

"#if" conditionally includes code when a preprocessor expression is true.

"#ifdef"

"#ifdef" includes code if a specified macro is defined.

"#ifndef"

"#ifndef" includes code if a specified macro is not defined.

"#else"

"#else" provides an alternative block when the previous condition is false.

"#elif"

"#elif" checks another condition when previous conditions are false.

"#endif"

"#endif" marks the end of a conditional compilation block.

---

28. Quick Revision

Conditional Compilation
        ↓
Preprocessor
        ↓
Check condition
        ↓
 ┌───────────────┐
 │               │
True           False
 │               │
Include         Exclude
code            code

Main Directives

#if
#ifdef
#ifndef
#elif
#else
#endif

Easy Memory Trick

#if     → If condition is true
#ifdef  → If defined
#ifndef → If not defined
#elif   → Else if
#else   → Otherwise
#endif  → End

Remember: "#if" / "#ifdef" / "#ifndef" are preprocessor directives, not normal C++ "if" statements.


### topic 10

"#if" Preprocessor Directive in C++

1. Introduction

"#if" is a preprocessor directive used for conditional compilation.

It tells the preprocessor to include a block of code only when a specified condition evaluates to true.

Basic Syntax

#if condition

// code to include

#endif

The condition is evaluated during preprocessing, before the actual compilation takes place.

---

2. How "#if" Works

Consider:

#define VERSION 2

#if VERSION == 2
    std::cout << "Version 2";
#endif

The preprocessor checks:

VERSION == 2

Since "VERSION" is "2", the condition is true.

Therefore, the code is included for compilation.

Process

#define VERSION 2
        ↓
      #if
        ↓
VERSION == 2 ?
        ↓
      TRUE
        ↓
Include the code
        ↓
     Compiler

---

3. Simple Example

#include <iostream>

#define NUMBER 10

#if NUMBER == 10
    std::cout << "Number is 10";
#endif

Output

Number is 10

---

4. "#if" with a False Condition

If the condition is false, the code inside the block is excluded.

#include <iostream>

#define NUMBER 20

#if NUMBER == 10
    std::cout << "Number is 10";
#endif

Here:

NUMBER == 10

is false.

Therefore, the "std::cout" statement is not included in the compiled program.

Output

No output

---

5. "#if" with "#else"

We can use "#else" to provide an alternative block.

Syntax

#if condition

// code if true

#else

// code if false

#endif

Example:

#include <iostream>

#define NUMBER 20

#if NUMBER == 10

    std::cout << "Number is 10";

#else

    std::cout << "Number is not 10";

#endif

Output

Number is not 10

---

6. "#if" with "#elif"

"#elif" means else if.

It allows us to check multiple conditions.

Syntax

#if condition1

// code

#elif condition2

// code

#else

// code

#endif

Example:

#include <iostream>

#define VERSION 2

#if VERSION == 1

    std::cout << "Version 1";

#elif VERSION == 2

    std::cout << "Version 2";

#else

    std::cout << "Unknown Version";

#endif

Output

Version 2

---

7. "#if" with Comparison Operators

Preprocessor conditions can use comparison operators.

Common operators include:

==    Equal to
!=    Not equal to
>     Greater than
<     Less than
>=    Greater than or equal to
<=    Less than or equal to

Example:

#define VERSION 3

#if VERSION >= 2
    std::cout << "Supported version";
#endif

Since "3 >= 2" is true, the code is included.

---

8. "#if" with Logical Operators

Logical operators can also be used.

Logical AND "&&"

#define VERSION 2
#define DEBUG 1

#if VERSION == 2 && DEBUG == 1
    std::cout << "Debug Version 2";
#endif

Both conditions must be true.

---

Logical OR "||"

#define VERSION 2
#define DEBUG 0

#if VERSION == 2 || DEBUG == 1
    std::cout << "Condition is true";
#endif

At least one condition must be true.

---

Logical NOT "!"

#define DEBUG 0

#if !DEBUG
    std::cout << "Debug is disabled";
#endif

The "!" operator reverses the condition.

---

9. "#if" with Numeric Macros

"#if" is commonly used with numeric macro values.

Example:

#define VERSION 3

#if VERSION == 3
    std::cout << "Version 3";
#endif

Another example:

#define MAX_SIZE 100

#if MAX_SIZE >= 50
    std::cout << "Large size";
#endif

---

10. "#if" with "defined"

The "defined" operator can check whether a macro has been defined.

Example:

#define DEBUG

#if defined(DEBUG)
    std::cout << "Debug mode";
#endif

This is similar to:

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

We can also use:

#if !defined(DEBUG)
    std::cout << "Debug is not defined";
#endif

This is similar to:

#ifndef DEBUG
    std::cout << "Debug is not defined";
#endif

---

11. "#if 1" and "#if 0"

A useful feature is using "1" and "0".

"#if 1"

#if 1
    std::cout << "This code is included";
#endif

Since "1" represents true, the code is included.

"#if 0"

#if 0
    std::cout << "This code is excluded";
#endif

Since "0" represents false, the code is excluded.

---

12. Using "#if 0" to Temporarily Disable Code

"#if 0" can be useful when temporarily disabling a block of code.

Example:

#if 0

    std::cout << "This code is temporarily disabled";
    std::cout << "This will not be compiled";

#endif

The preprocessor excludes the entire block.

To enable it again:

#if 1

This technique is useful during development, although comments or version control may be preferable depending on the situation.

---

13. Nested "#if"

An "#if" block can contain another "#if".

Example:

#define VERSION 2
#define DEBUG 1

#if VERSION == 2

    #if DEBUG == 1
        std::cout << "Debug Version 2";
    #endif

#endif

Output

Debug Version 2

---

14. "#if" vs Normal "if"

This is a very important difference.

Normal "if"

if (x > 10) {
    std::cout << "Greater";
}

The "if" statement is part of normal C++ code and is handled by the compiler.

Preprocessor "#if"

#if VERSION > 1
    std::cout << "Version supported";
#endif

The "#if" directive is handled by the preprocessor before compilation.

Difference Table

Feature| "if"| "#if"
Type| C++ statement| Preprocessor directive
Handled by| Compiler| Preprocessor
Stage| Compilation/program execution logic| Before compilation
Can exclude source code from compilation?| No| Yes
Common use| Runtime program logic| Conditional compilation

---

15. Example: Version Control

Suppose a program supports different versions.

#include <iostream>

#define VERSION 2

#if VERSION == 1

    std::cout << "Running Version 1";

#elif VERSION == 2

    std::cout << "Running Version 2";

#elif VERSION == 3

    std::cout << "Running Version 3";

#else

    std::cout << "Unsupported Version";

#endif

Output

Running Version 2

Changing:

#define VERSION 2

to:

#define VERSION 3

will cause the Version 3 block to be compiled instead.

---

16. Example: Debug Configuration

#include <iostream>

#define DEBUG 1

#if DEBUG
    std::cout << "Debug information enabled";
#endif

If:

#define DEBUG 0

then the condition is false and the block is excluded.

---

17. Advantages of "#if"

1. Conditional Compilation

Different code can be compiled depending on conditions.

2. Platform Support

Different code can be selected for different platforms.

3. Debugging

Debug-only code can be enabled or disabled.

4. Feature Management

Specific features can be conditionally included.

5. Build Configurations

Different versions of an application can use different code.

---

18. Limitations of "#if"

- It is a preprocessor feature, not normal C++ control flow.
- Excessive use can make code difficult to understand.
- Many combinations of conditions can make testing complicated.
- Code excluded by "#if" is not compiled, so normal compiler checks do not apply to that excluded code.
- Complex conditional compilation can make maintenance harder.

---

19. Important Rules

Rule 1: Use "#endif"

An "#if" block should be closed with:

#endif

Rule 2: Conditions are evaluated by the preprocessor

The condition must be something the preprocessor can evaluate.

Rule 3: "#if" is not runtime logic

Do not confuse:

#if

with:

if

Rule 4: Macros are commonly used

For example:

#define VERSION 2

#if VERSION == 2

---

20. Complete Example

#include <iostream>

#define VERSION 2
#define DEBUG 1

int main() {

#if VERSION == 1

    std::cout << "Version 1";

#elif VERSION == 2

    std::cout << "Version 2";

    #if DEBUG == 1
        std::cout << " - Debug mode";
    #endif

#else

    std::cout << "Unknown Version";

#endif

    return 0;
}

Output

Version 2 - Debug mode

---

21. Important Points

- "#if" is a preprocessor directive.
- It is used for conditional compilation.
- It checks a preprocessor expression.
- If the condition is true, the code is included.
- If the condition is false, the code is excluded.
- "#else" provides an alternative block.
- "#elif" allows additional conditions.
- "#endif" closes the conditional block.
- "defined()" can be used to check whether a macro exists.
- "#if 1" means the block is included.
- "#if 0" means the block is excluded.
- "#if" happens before compilation.
- "#if" is different from the normal C++ "if" statement.

---

22. One-Line Definition

"#if" is a preprocessor directive that conditionally includes a block of code when its preprocessor condition evaluates to true.

---

23. Quick Revision

#if condition
    ↓
Condition checked by preprocessor
    ↓
 ┌───────────────┐
 │               │
TRUE           FALSE
 │               │
Include         Exclude
code            code
 │
#endif

Example

#define VERSION 2

#if VERSION == 2
    std::cout << "Version 2";
#endif

Remember:

#if      → Check a condition
#elif    → Check another condition
#else    → Alternative
#endif   → End the block


### topic 11

"#ifdef" Preprocessor Directive in C++

1. Introduction

"#ifdef" stands for "if defined".

It is a preprocessor directive used in conditional compilation.

It checks whether a particular macro has already been defined.

Basic Syntax

#ifdef MACRO_NAME

// code

#endif

If the macro is defined, the code between "#ifdef" and "#endif" is included for compilation.

If the macro is not defined, that code is excluded.

---

2. Simple Example

#include <iostream>

#define DEBUG

int main() {

#ifdef DEBUG
    std::cout << "Debug mode is enabled";
#endif

    return 0;
}

Output

Debug mode is enabled

Here:

#define DEBUG

defines the "DEBUG" macro.

Therefore:

#ifdef DEBUG

is true.

---

3. What If the Macro Is Not Defined?

Consider:

#include <iostream>

int main() {

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

    return 0;
}

Here, "DEBUG" has not been defined.

Therefore, the code inside "#ifdef DEBUG" is excluded.

Output

No output

---

4. How "#ifdef" Works

The preprocessor checks whether the specified macro exists.

#define DEBUG
      ↓
#ifdef DEBUG
      ↓
Is DEBUG defined?
      ↓
     YES
      ↓
Include the code
      ↓
   Compiler

If "DEBUG" is not defined:

#ifdef DEBUG
      ↓
Is DEBUG defined?
      ↓
      NO
      ↓
Exclude the code

---

5. "#ifdef" with "#else"

We can use "#else" when we want an alternative block.

Syntax

#ifdef MACRO_NAME

// code if defined

#else

// code if not defined

#endif

Example:

#include <iostream>

#define DEBUG

int main() {

#ifdef DEBUG
    std::cout << "Debug mode";
#else
    std::cout << "Normal mode";
#endif

    return 0;
}

Output

Debug mode

If we remove:

#define DEBUG

the output becomes:

Normal mode

---

6. "#ifdef" with "#elif"

"#ifdef" can be combined with other conditional compilation directives.

Example:

#include <iostream>

#define VERSION_2

#ifdef VERSION_1

    std::cout << "Version 1";

#elif defined(VERSION_2)

    std::cout << "Version 2";

#else

    std::cout << "Unknown version";

#endif

Output

Version 2

---

7. "#ifdef" vs "#if"

These two directives are related but different.

"#ifdef"

Checks whether a macro is defined.

#ifdef DEBUG

"#if"

Checks a preprocessor expression.

#if VERSION == 2

Difference

Feature| "#ifdef"| "#if"
Meaning| If defined| If condition is true
Checks| Macro existence| Preprocessor expression
Example| "#ifdef DEBUG"| "#if VERSION == 2"
Requires value?| No| Usually uses a value/expression

---

8. "#ifdef" vs "#ifndef"

These are opposites.

"#ifdef"

Means:

«If defined»

#ifdef DEBUG

The block is included if "DEBUG" exists.

"#ifndef"

Means:

«If not defined»

#ifndef DEBUG

The block is included if "DEBUG" does not exist.

Easy Memory Trick

#ifdef   → If Defined
#ifndef  → If Not Defined

---

9. "#ifdef" with an Empty Macro

A macro does not need to have a value.

This is valid:

#define DEBUG

Then:

#ifdef DEBUG
    std::cout << "Debug enabled";
#endif

The important thing is that "DEBUG" exists as a defined macro.

---

10. "#ifdef" with a Numeric Macro

Consider:

#define DEBUG 1

Then:

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

The block is included because "DEBUG" is defined.

Important:

"#ifdef" checks whether the macro exists, not whether its value is "1".

For example:

#define DEBUG 0

Even though its value is "0":

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

is still true because "DEBUG" is defined.

If you want to check the value, use:

#if DEBUG

---

11. Important Difference: "#ifdef DEBUG" vs "#if DEBUG"

Suppose:

#define DEBUG 0

Using "#ifdef"

#ifdef DEBUG
    std::cout << "Debug";
#endif

This code is included because "DEBUG" is defined.

Using "#if"

#if DEBUG
    std::cout << "Debug";
#endif

This code is not included because "DEBUG" has the value "0".

Remember

#ifdef DEBUG
→ Is DEBUG defined?

#if DEBUG
→ Does DEBUG evaluate to true?

---

12. Using "defined()"

The "defined()" operator can also check whether a macro exists.

Example:

#define DEBUG

#if defined(DEBUG)
    std::cout << "Debug mode";
#endif

This is equivalent to:

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

---

13. Negating "defined()"

We can use "!defined()" to check whether a macro is not defined.

Example:

#if !defined(DEBUG)
    std::cout << "Debug is not enabled";
#endif

This is equivalent to:

#ifndef DEBUG
    std::cout << "Debug is not enabled";
#endif

---

14. Using "#undef" with "#ifdef"

A macro can be removed using "#undef".

Example:

#define DEBUG

#ifdef DEBUG
    std::cout << "Debug is enabled";
#endif

#undef DEBUG

#ifdef DEBUG
    std::cout << "Debug is still enabled";
#endif

The first block is included because "DEBUG" is defined.

After:

#undef DEBUG

the second "#ifdef DEBUG" condition is false.

---

15. Debugging with "#ifdef"

One of the most common uses of "#ifdef" is debugging.

Example:

#include <iostream>

#define DEBUG

int main() {

#ifdef DEBUG
    std::cout << "Debug information" << std::endl;
#endif

    std::cout << "Program running";

    return 0;
}

Output

Debug information
Program running

If we remove:

#define DEBUG

the debug message is excluded.

Output:

Program running

---

16. Feature Control

"#ifdef" can be used to enable optional features.

Example:

#define FEATURE_A

#ifdef FEATURE_A
    std::cout << "Feature A is enabled";
#endif

If "FEATURE_A" is defined, the feature-related code is included.

---

17. Platform-Specific Code

Compilers often provide predefined macros that can be used to detect platforms.

Example:

#ifdef _WIN32
    std::cout << "Windows";
#endif

For Linux-related builds, compilers commonly provide:

#ifdef __linux__
    std::cout << "Linux";
#endif

The exact predefined macros depend on the compiler and platform.

---

18. Header Guards

One of the most important uses of "#ifdef"/"#ifndef" style conditional compilation is header guards.

A traditional header guard looks like:

#ifndef MYHEADER_H
#define MYHEADER_H

// header contents

#endif

The idea is:

1. Check whether the macro already exists.
2. If it does not exist, define it.
3. Include the header contents.
4. On later inclusions, the macro already exists, so the contents are skipped.

Header guards will be covered in detail in the Include Guards topic.

---

19. Nested "#ifdef"

Conditional compilation directives can be nested.

Example:

#define DEBUG
#define FEATURE_A

#ifdef DEBUG

    #ifdef FEATURE_A
        std::cout << "Debug + Feature A";
    #endif

#endif

Output

Debug + Feature A

Both macros are defined, so both conditions are satisfied.

---

20. Complete Example

#include <iostream>

#define DEBUG

int main() {

#ifdef DEBUG

    std::cout << "Debug mode is enabled" << std::endl;

#else

    std::cout << "Normal mode" << std::endl;

#endif

    return 0;
}

Output

Debug mode is enabled

If we remove:

#define DEBUG

the output becomes:

Normal mode

---

21. Advantages of "#ifdef"

1. Debugging

Debug-only code can be conditionally included.

2. Feature Control

Optional features can be enabled using macros.

3. Platform-Specific Code

Different platforms can use different code.

4. Build Configuration

Different builds can include different features.

5. Header Guards

It is part of the traditional technique used to prevent multiple header inclusion.

---

22. Disadvantages

- Excessive use can make code difficult to understand.
- Different macro configurations can make testing complicated.
- Excluded code is not compiled and therefore does not receive normal compiler checking in that build.
- Macro-based configuration can make debugging harder.

---

23. Important Points

- "#ifdef" means if defined.
- It is a preprocessor directive.
- It checks whether a macro has been defined.
- The macro does not need to have a value.
- "#else" can provide an alternative block.
- "#endif" closes the conditional block.
- "#undef" can remove a macro definition.
- "#ifdef DEBUG" checks existence, even if "DEBUG" is defined as "0".
- "#if DEBUG" checks the value/expression.
- "defined(DEBUG)" is another way to check whether a macro exists.
- "#ifdef" is commonly used for debugging, feature control, platform-specific code, and header guards.

---

24. One-Line Definition

"#ifdef" is a preprocessor directive that includes a block of code only when the specified macro has been defined.

---

25. Quick Revision

#ifdef
   ↓
Check whether macro exists
   ↓
 ┌───────────────┐
 │               │
Defined       Not Defined
 │               │
Include         Exclude
code            code

Example

#define DEBUG

#ifdef DEBUG
    std::cout << "Debug mode";
#endif

Easy Memory Trick

#ifdef   → If Defined
#ifndef  → If Not Defined
#if      → If Condition is True
#endif   → End of Conditional Block

Most important difference:

#define DEBUG 0

#ifdef DEBUG
    // INCLUDED because DEBUG is defined
#endif

#if DEBUG
    // NOT INCLUDED because DEBUG is 0
#endif
