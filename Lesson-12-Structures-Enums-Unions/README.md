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


### topic 2

Struct

"struct" is a keyword in C++ used to define a structure.

Syntax

struct StructureName
{
    dataType member1;
    dataType member2;
};

Example

#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
};

int main()
{
    Student s1;

    s1.name = "Harika";
    s1.age = 23;

    cout << s1.name << endl;
    cout << s1.age << endl;

    return 0;
}

Important Points

- "struct" is a C++ keyword.
- It is used to define a structure.
- "Student" is the structure name.
- "name" and "age" are structure members.
- "Student s1;" creates an object of the structure.
- The "." operator is used to access structure members.

Struct = Keyword used to define a structure.

### topic :3 

Structure Members

Structure members are the variables or data declared inside a structure.

Example

struct Student
{
    string name;
    int age;
    float marks;
};

Here:

- "name" → Structure Member
- "age" → Structure Member
- "marks" → Structure Member

Accessing Structure Members

The "." operator is used to access structure members.

Student s1;

s1.name = "Harika";
s1.age = 23;
s1.marks = 85.5;

Here:

- "s1.name" → accesses "name"
- "s1.age" → accesses "age"
- "s1.marks" → accesses "marks"

Important Points

- Structure members are declared inside the structure.
- Members can have different data types.
- The "." operator is used to access members through an object.

Structure Members = Variables/data declared inside a structure.


### topic:4

Structure Objects

A Structure Object is a variable created using a structure type.

Example

struct Student
{
    string name;
    int age;
};

Student s1;

Here:

- "Student" → Structure type
- "s1" → Structure Object

Multiple Objects

We can create multiple objects from the same structure.

Student s1;
Student s2;
Student s3;

Each object has its own separate data.

Example

s1.name = "Harika";
s1.age = 23;

s2.name = "Ravi";
s2.age = 22;

Here, "s1" and "s2" are separate objects.

Important Points

- A structure can have multiple objects.
- Each object stores its own values.
- The "." operator is used to access object members.

Structure = Blueprint/Design

Structure Object = Actual instance created from the structure
