Lesson 12 – Structures, Enums, Unions

Topics

1. Structures
2. Struct
3. Structure Members
4. Structure Objects
5. Nested Structure
6. Structure Pointers
7. Structure Functions
8. Union
9. Enum
10. Enum Class
11. Scoped Enum
12. Underlying Type


### topic :1

Structure

A structure is a user-defined data type in C++ that allows us to group different data types under one name.

Syntax

struct Student
{
    string name;
    int age;
    float marks;
};

Example

#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    float marks;
};

int main()
{
    Student s1;

    s1.name = "Harika";
    s1.age = 23;
    s1.marks = 85.5;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.marks << endl;

    return 0;
}

Important Points

- "struct" is a keyword used to define a structure.
- A structure can contain different data types.
- The variables inside a structure are called members.
- An object is created using the structure name.
- The "." operator is used to access structure members.
- A semicolon ";" is required after the structure definition.

Example

Student
 ├── name
 ├── age
 └── marks

Structure = A group of different data types under one name.
