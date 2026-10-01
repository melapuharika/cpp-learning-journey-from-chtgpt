Lesson 15 – Special Member Functions & Object Management

Topics

1. Special Member Functions
2. Copy Constructor
3. Assignment Operator
4. Move Constructor
5. Move Assignment Operator
6. Destructor
7. Rule of 3
8. Rule of 5
9. Rule of 0
10. Shallow Copy
11. Deep Copy
12. Object Lifetime
13. Temporary Objects
14. Anonymous Objects

---

1. Special Member Functions

Special member functions are functions that the compiler can automatically provide for a class.

Main special member functions include:

- Default Constructor
- Destructor
- Copy Constructor
- Copy Assignment Operator
- Move Constructor
- Move Assignment Operator

---

2. Copy Constructor

A copy constructor creates a new object by copying an existing object.

Syntax

ClassName(const ClassName& other);

Example

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    Student(const Student& other) {
        age = other.age;
    }
};

---

3. Assignment Operator

The assignment operator "=" copies the value from an existing object into an already existing object.

Student s1(20);
Student s2(25);

s2 = s1;

Here, "s2" already exists. Its data is replaced with the data of "s1".

---

4. Move Constructor

A move constructor transfers resources from a temporary or expiring object instead of making a new copy.

Syntax

ClassName(ClassName&& other);

It is useful for efficient resource management.

---

5. Move Assignment Operator

Move assignment transfers resources from one existing object to another existing object.

Syntax

ClassName& operator=(ClassName&& other);

It is different from move construction because the destination object already exists.

---

6. Destructor

A destructor is a special member function that is automatically called when an object is destroyed.

Syntax

~ClassName() {
    // cleanup
}

Example

class Student {
public:
    ~Student() {
        cout << "Object destroyed";
    }
};

A destructor is commonly used for cleanup of resources owned by an object.

---

7. Rule of 3

The Rule of 3 states that if a class needs to define any one of these three special member functions, it often needs all three:

1. Destructor
2. Copy Constructor
3. Copy Assignment Operator

This is especially important when a class manually manages a resource such as dynamically allocated memory.

---

8. Rule of 5

The Rule of 5 extends the Rule of 3 by adding move operations.

The five functions are:

1. Destructor
2. Copy Constructor
3. Copy Assignment Operator
4. Move Constructor
5. Move Assignment Operator

The Rule of 5 is important for classes that manage resources and want efficient move operations.

---

9. Rule of 0

The Rule of 0 says that if a class does not directly manage resources, it should generally avoid manually defining special member functions.

Instead, use resource-managing standard library types such as:

std::string
std::vector
std::unique_ptr

This allows the compiler-generated special member functions to work correctly.

---

10. Shallow Copy

A shallow copy copies the values of data members directly.

If a class contains a pointer, the pointer value itself is copied.

Example:

int* p;

After a shallow copy, two objects may contain pointers pointing to the same memory.

Object 1 → Memory
Object 2 → Memory

This can cause problems such as:

- Double deletion
- Unintended modification
- Dangling pointers

---

11. Deep Copy

A deep copy creates a separate copy of dynamically allocated data.

Object 1 → Memory A

Object 2 → Memory B

The two objects have their own separate resources.

Deep copy is useful when each object must independently own its dynamically allocated data.

---

12. Object Lifetime

Object lifetime is the period during which an object exists.

It begins when the object's initialization is completed and ends when its destruction is completed.

Example:

{
    Student s;
    
} // s is destroyed here

The lifetime of "s" is limited to the scope in which it exists.

---

13. Temporary Objects

A temporary object is an object created for a short period, usually to perform an operation or hold an intermediate result.

Example:

Student s = Student(20);

The temporary "Student(20)" may exist only for a short time.

Modern C++ often eliminates unnecessary temporary objects through copy elision.

---

14. Anonymous Objects

An anonymous object is an object created without giving it a named variable.

Example:

Student(20);

There is no variable name such as "s".

Another example:

Student(20).display();

The object is created and used directly.

---

Quick Revision

Topic| Main Idea
Special Member Functions| Important automatically generated/member functions
Copy Constructor| Creates a new object from another object
Assignment Operator| Copies data into an existing object
Move Constructor| Transfers resources while creating an object
Move Assignment| Transfers resources into an existing object
Destructor| Cleans up when an object is destroyed
Rule of 3| Destructor + Copy Constructor + Copy Assignment
Rule of 5| Rule of 3 + Move Constructor + Move Assignment
Rule of 0| Prefer no manual special member functions when possible
Shallow Copy| Copies pointer/value directly
Deep Copy| Creates independent resource copies
Object Lifetime| Period during which an object exists
Temporary Object| Short-lived object
Anonymous Object| Object without a named variable

---

One-Line Summary

«Lesson 15 covers C++ special member functions, copying, moving, resource management, object lifetime, and temporary/anonymous objects.»


### topic 1

Special Member Functions – C++ Notes

1. Definition

Special Member Functions are special functions associated with a C++ class that help in creating, copying, moving, assigning, and destroying objects.

---

2. Main Special Member Functions

The important special member functions are:

1. Default Constructor
2. Destructor
3. Copy Constructor
4. Copy Assignment Operator
5. Move Constructor
6. Move Assignment Operator

---

3. Default Constructor

A default constructor is a constructor that can be called without arguments.

class Student {
public:
    Student() {
        cout << "Student created";
    }
};

Student s;

When "s" is created, the constructor is called.

---

4. Destructor

A destructor is automatically called when an object is destroyed.

class Student {
public:
    ~Student() {
        cout << "Student destroyed";
    }
};

A destructor uses "~" before the class name.

---

5. Copy Constructor

A copy constructor creates a new object by copying an existing object.

Student s1;
Student s2 = s1;

Here, "s2" is a new object created using "s1".

---

6. Copy Assignment Operator

The copy assignment operator copies data from one already existing object to another already existing object.

Student s1;
Student s2;

s2 = s1;

Both "s1" and "s2" already exist.

---

7. Move Constructor

A move constructor creates a new object by transferring resources from another object instead of making a full copy.

Student s2 = std::move(s1);

It can improve performance when working with resources such as dynamically allocated memory.

---

8. Move Assignment Operator

The move assignment operator transfers resources from one existing object to another existing object.

s2 = std::move(s1);

---

9. Copy vs Move

Copy| Move
Copies data/resources| Transfers resources
Can require additional resource allocation| Can avoid unnecessary allocation
Useful when both objects need independent data| Useful when the source can give up its resources

---

10. Constructor vs Destructor

Constructor| Destructor
Used when object is created| Used when object is destroyed
Initializes an object| Cleans up an object
Class name is used| "~" + class name is used
Can have parameters| Cannot have parameters

---

11. Easy Revision

Default Constructor
        ↓
Creates/initializes object

Copy Constructor
        ↓
New object ← Copy

Copy Assignment
        ↓
Existing object ← Copy

Move Constructor
        ↓
New object ← Move resources

Move Assignment
        ↓
Existing object ← Move resources

Destructor
        ↓
Object destroyed

---

12. One-Line Definition

«Special Member Functions are C++ class functions that manage object creation, copying, moving, assignment, and destruction.»


### topic 2

Copy Constructor – C++ Notes

1. Definition

A Copy Constructor is a special member function that creates a new object by copying the data of an existing object.

---

2. Syntax

ClassName(const ClassName& other) {
    // copy data
}

---

3. Example

#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    Student(const Student& other) {
        age = other.age;
    }
};

int main() {

    Student s1(20);

    Student s2 = s1;

    cout << s2.age << endl;

    return 0;
}

Output

20

---

4. How It Works

Student s1(20);

A "Student" object named "s1" is created.

Student s2 = s1;

A new object "s2" is created by copying "s1".

s1 → age = 20
s2 → age = 20

Both objects are separate objects.

---

5. Copy Constructor Syntax Explained

Student(const Student& other)

"Student"

The constructor has the same name as the class.

"const"

The original object should not be modified during copying.

"Student&"

The object is passed by reference, avoiding another unnecessary copy.

"other"

This represents the existing object being copied.

---

6. When Is a Copy Constructor Used?

A copy constructor can be used when:

- A new object is initialized from an existing object.
- An object is passed by value to a function.
- An object is returned by value from a function, subject to copy elision and move semantics.

Example:

Student s1(20);
Student s2 = s1;

---

7. Copy Constructor vs Copy Assignment

Copy Constructor

Student s1(20);
Student s2 = s1;

Here, "s2" is a new object.

New Object ← Existing Object

Copy Assignment

Student s1(20);
Student s2(25);

s2 = s1;

Here, "s2" already exists.

Existing Object ← Existing Object

---

8. Important Points

- A copy constructor is a special member function.
- It creates a new object from an existing object.
- It normally takes the source object by "const" reference.
- It has the same name as the class.
- It does not have a return type.
- C++ can automatically generate a copy constructor if one is not provided.
- For classes that manage resources such as dynamic memory, a custom copy constructor may be needed to perform a deep copy.

---

9. One-Line Definition

«A copy constructor is a special member function that creates a new object by copying an existing object.»
