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


### topic 5

Nested Structure

A Nested Structure is a structure defined or used inside another structure.

Example

struct Address
{
    string city;
    int pincode;
};

struct Student
{
    string name;
    int age;
    Address address;
};

Here:

- "Address" → Inner structure
- "Student" → Outer structure
- "address" → Member of "Student"

Accessing Nested Structure Members

Student s1;

s1.name = "Harika";
s1.age = 23;
s1.address.city = "Vizag";
s1.address.pincode = 530012;

Structure

Student
 ├── name
 ├── age
 └── address
      ├── city
      └── pincode

Important Point

The "." operator is used to access nested structure members.

Nested Structure = One structure inside another structure.


### topic 6

Structure Pointers

A Structure Pointer is a pointer that stores the memory address of a structure object.

Example

struct Student
{
    string name;
    int age;
};

Student s1;
Student* ptr = &s1;

Here:

- "s1" → Structure Object
- "&s1" → Address of "s1"
- "ptr" → Structure Pointer

Accessing Members Using Pointer

The "->" operator is used to access structure members through a pointer.

ptr->name = "Harika";
ptr->age = 23;

Complete Example

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

    Student* ptr = &s1;

    ptr->name = "Harika";
    ptr->age = 23;

    cout << ptr->name << endl;
    cout << ptr->age << endl;

    return 0;
}

Equivalent Syntax

ptr->name

is equivalent to:

(*ptr).name

Important Points

- A structure pointer stores the address of a structure object.
- "&" is used to get the object's address.
- "->" is used to access structure members through a pointer.
- "(*ptr).member" is another way to access the member.

Structure Pointer = Pointer that stores the address of a structure object.


### topic 7

Structure Functions

A Structure Function is a function defined inside a structure.

Example

struct Student
{
    string name;
    int age;

    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

Here:

- "name" and "age" → Structure Members
- "display()" → Structure Function

Complete Example

#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;

    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Harika";
    s1.age = 23;

    s1.display();

    return 0;
}

Calling the Structure Function

s1.display();

The "." operator is used to call a structure function through an object.

Important Points

- A structure can contain functions.
- Structure functions can work with the structure's members.
- The "." operator is used to call a structure function using an object.

Structure Function = A function defined inside a structure.


### topic 8

Union

A Union is a user-defined data type that allows different data types to share the same memory location.

Syntax

union Data
{
    int number;
    float decimal;
    char letter;
};

Example

#include <iostream>
using namespace std;

union Data
{
    int number;
    float decimal;
    char letter;
};

int main()
{
    Data d;

    d.number = 10;
    cout << d.number << endl;

    d.decimal = 5.5;
    cout << d.decimal << endl;

    return 0;
}

Structure vs Union

Structure| Union
Each member has separate memory| Members share the same memory
Multiple members can hold values at the same time| One member's value is normally meaningful at a time
Uses more memory| Can save memory

Important Point

Union members share the same memory location. Therefore, assigning a value to one member can overwrite the value stored by another member.

Union = Different data types sharing the same memory location.


### topic 9

Memory Sharing in C++

1. What is Memory Sharing?

Memory Sharing means allowing multiple variables, references, or pointers to access or use the same memory location.

Normally, different variables have different memory locations.

int a = 10;
int b = 20;

Here, "a" and "b" normally have separate memory locations.

In memory sharing, two or more ways of accessing data can refer to the same memory location.

---

2. Memory Sharing using Reference

A reference can act as another name for an existing variable.

int a = 10;
int &b = a;

Here:

- "a" is the original variable.
- "b" is a reference to "a".
- "a" and "b" refer to the same memory location.
- A separate integer memory location is not created for "b".

Example

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &b = a;

    b = 50;

    cout << a;

    return 0;
}

Output

50

When "b" is changed, "a" also changes because both refer to the same memory location.

---

3. Memory Sharing using Pointer

A pointer can also access the memory of another variable.

int a = 10;
int *p = &a;

Here:

- "a" stores the value "10".
- "&a" gives the address of "a".
- "p" stores the address of "a".
- "*p" accesses the value stored at that address.

Example

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    *p = 50;

    cout << a;

    return 0;
}

Output

50

Because "p" points to "a"'s memory location, changing "*p" changes the value of "a".

---

4. Simple Memory Diagram

Reference

        ┌──────────┐
a ─────►│    50    │
        └──────────┘
b ─────►

"a" and "b" refer to the same memory location.

Pointer

p ─────► Address of a
              │
              ▼
        ┌──────────┐
a ─────►│    50    │
        └──────────┘

"p" stores the address of "a" and can access its value using "*p".

---

5. Reference vs Pointer

Reference| Pointer
Another name for a variable| Stores a memory address
Uses "&" while declaring| Uses "*" while declaring
Accessed directly| Usually accessed using "*"
Must normally be initialized when declared| Can be initialized later
Cannot normally be made to refer to another variable after initialization| Can point to different variables

---

6. Key Points

- Memory sharing means multiple ways of accessing the same memory.
- References can provide another name for an existing variable.
- Pointers can store the address of an existing variable.
- Changing the value through a reference or pointer can change the original variable.
- Memory sharing can reduce unnecessary copying and can be useful when working with functions, arrays, objects, and dynamic memory.

Remember

Reference → another name for the same variable

Pointer → stores the address of a variable

Memory Sharing → multiple ways of accessing the same memory


### topic 10

Union vs Structure in C++

1. Introduction

Structure and Union are user-defined data types in C++.

They are used to group different types of data members under one name.

The main difference between them is memory allocation.

- Structure → Separate memory for each member
- Union → Same memory shared by all members

---

2. Structure

A structure is a user-defined data type that groups different data members together.

Each member of a structure gets its own memory space.

Syntax

struct Student {
    int age;
    float marks;
    char grade;
};

Example

#include <iostream>
using namespace std;

struct Student {
    int age;
    float marks;
    char grade;
};

int main() {
    Student s;

    s.age = 20;
    s.marks = 85.5;
    s.grade = 'A';

    cout << s.age << endl;
    cout << s.marks << endl;
    cout << s.grade << endl;

    return 0;
}

Output

20
85.5
A

Here, all three values can exist at the same time.

Memory

Structure

┌──────────────┐
│ age          │
├──────────────┤
│ marks        │
├──────────────┤
│ grade        │
└──────────────┘

Each member has separate storage.

---

3. Union

A union is also a user-defined data type.

But in a union, all members share the same memory location.

Syntax

union Data {
    int number;
    float marks;
    char grade;
};

Example

#include <iostream>
using namespace std;

union Data {
    int number;
    float marks;
    char grade;
};

int main() {
    Data d;

    d.number = 100;
    cout << d.number << endl;

    d.marks = 25.5;
    cout << d.marks << endl;

    return 0;
}

Output

100
25.5

Here, "number" and "marks" use the same storage.

When a different member is written, it can overwrite the previous stored value.

Memory

Union

       Same Memory
┌─────────────────────┐
│ number / marks /    │
│ grade               │
└─────────────────────┘

---

4. Memory Sharing in Union

Consider:

union Data {
    int number;
    float marks;
};

When:

Data d;

d.number = 100;

The shared storage contains the representation of "number".

Then:

d.marks = 25.5;

The same storage is used for "marks".

So the previous "number" value is overwritten.

Therefore, a union is useful when only one of several possible data members is needed at a particular time.

---

5. Structure vs Union

Feature| Structure| Union
Keyword| "struct"| "union"
Memory allocation| Separate memory for members| Members share memory
All members usable together| Yes| Normally one active member at a time
Memory usage| Usually more| Usually less
Effect of writing a member| Does not normally overwrite other members| Can overwrite shared storage
Main purpose| Store related data together| Store one of several alternatives
Memory sharing| No sharing between members| Members share storage

---

6. Simple Real-Life Example

Structure = Separate Rooms

Imagine a house with three separate rooms:

🏠 House

🛏️ Bedroom
📚 Study Room
🍳 Kitchen

Each room has its own space.

So all three can be used at the same time.

Structure = Separate rooms

---

Union = One Shared Room

Imagine there is only one room:

🏠 One Room

🛏️ Bedroom
      OR
📚 Study Room
      OR
🍳 Kitchen

The same space is used for different purposes.

Union = One shared room

---

7. When to Use Structure?

Use a structure when you need to store multiple related values at the same time.

Example:

struct Student {
    string name;
    int age;
    float marks;
};

A student can have:

- Name
- Age
- Marks

all at the same time.

---

8. When to Use Union?

Use a union when a value can be one of several different types and you want those alternatives to share storage.

Example:

union Data {
    int number;
    float decimal;
    char letter;
};

At a particular time, you may need one alternative.

---

9. Important Points

- Both "struct" and "union" are user-defined data types.
- Structure members have separate storage.
- Union members share the same storage.
- Structure can hold values for all members simultaneously.
- Writing to one structure member does not normally affect the others.
- Writing to a union member can overwrite the shared storage.
- Union can reduce memory usage when only one alternative is needed at a time.
- Structure is useful for grouping related information.
- Union is useful for memory sharing between alternative data representations.

---

10. Easy Way to Remember

Structure

"Naaku anni values kavali."

Age + Marks + Grade
        ↓
    STRUCTURE

Union

"Naaku options lo oka value chaalu."

Age OR Marks OR Grade
        ↓
       UNION

⭐ Final Definition

Structure → Each member has separate memory.

Union → All members share the same memory.

Structure = Separate storage

Union = Shared storage


### topic 11

Enumeration (enum) in C++

Definition

Enumeration ("enum") is a user-defined data type used to create a set of named constant values.

Syntax

enum Day {
    Monday,
    Tuesday,
    Wednesday
};

Default Values

By default:

Monday    → 0
Tuesday   → 1
Wednesday → 2

Custom Values

enum Level {
    Easy = 1,
    Medium = 2,
    Hard = 3
};

Using enum

Level gameLevel = Hard;

Uses

- Makes code easier to read.
- Represents a fixed set of choices.
- Avoids using unexplained numbers.
- Commonly used with "switch".

Example

enum TrafficLight {
    Red,
    Yellow,
    Green
};

TrafficLight light = Green;

Remember

"enum" = Named constants for a fixed set of related choices.


### topic 12

enum class in C++

Definition

"enum class" is a strongly typed and scoped enumeration in C++.

It is a safer version of the traditional "enum".

Syntax

enum class Color {
    Red,
    Green,
    Blue
};

Using enum class

Color c = Color::Red;

We use "Color::" to access the values.

Normal enum

enum Color {
    Red,
    Green
};

Color c = Red;

enum class

enum class Color {
    Red,
    Green
};

Color c = Color::Red;

Advantages

- Type-safe
- Scoped — values are accessed using "EnumName::value"
- Prevents name conflicts
- Makes code safer and easier to understand

Remember

Normal enum → "Red"

enum class → "Color::Red"

"enum class" = Scoped + Strongly Typed enum


### topic 13


Scoped Enums in C++

Definition

A Scoped Enum is an enumeration whose values are kept inside the enum's own scope.

In C++, "enum class" is commonly used to create scoped enums.

Example

enum class Color {
    Red,
    Green,
    Blue
};

Values are accessed using the enum name:

Color::Red;
Color::Green;
Color::Blue;

Why Scoped?

The enum values are not placed directly in the surrounding scope.

Color
 ├── Red
 ├── Green
 └── Blue

So:

Red;          // ❌
Color::Red;   // ✅

Advantage

Scoped enums help avoid name conflicts.

enum class TrafficLight {
    Red,
    Green
};

enum class Color {
    Red,
    Blue
};

Both can have "Red" because they belong to different scopes.

Remember

Scoped Enum = Enum values stay inside their enum scope.

"enum class Color" → "Color::Red"

