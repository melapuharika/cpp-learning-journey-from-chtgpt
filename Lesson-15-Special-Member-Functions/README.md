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


### topic 3
Assignment Operator – C++ Notes

1. Definition

The Assignment Operator is used to assign or copy the data of one object to another already existing object.

The assignment operator is:

=

---

2. Simple Example

Student s1(20);
Student s2(25);

s2 = s1;

Here:

- "s1" already exists.
- "s2" already exists.
- "s1" data is copied into "s2".

Before Assignment

s1 → age = 20
s2 → age = 25

After Assignment

s1 → age = 20
s2 → age = 20

---

3. Copy Constructor vs Assignment Operator

Copy Constructor

Student s1(20);
Student s2 = s1;

A new object "s2" is created.

New Object ← Existing Object

Assignment Operator

Student s1(20);
Student s2(25);

s2 = s1;

" s2" already exists.

Existing Object ← Existing Object

---

4. Custom Assignment Operator

We can define our own assignment operator using "operator=".

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    Student& operator=(const Student& other) {
        age = other.age;
        return *this;
    }
};

Usage:

Student s1(20);
Student s2(25);

s2 = s1;

---

5. "operator="

Student& operator=(const Student& other)

Here:

- "operator=" → defines the assignment operator.
- "const Student& other" → receives the source object.
- "Student&" → returns a reference to the current object.

---

6. "return *this"

Inside a member function:

return *this;

means returning the current object.

"this" points to the current object.

"*this" represents the current object itself.

It also allows chained assignment:

s3 = s2 = s1;

---

7. Important Points

- Assignment operator is represented by "=".
- It works with already existing objects.
- C++ can automatically provide a copy assignment operator.
- A custom "operator=" can be defined when special resource management is required.
- It is different from the copy constructor.
- A correctly designed assignment operator commonly returns "*this".

---

8. One-Line Definition

«The assignment operator copies or assigns data from one existing object to another existing object.»


### topic 4

Move Constructor – C++ Notes

1. Definition

A Move Constructor is a special member function that creates a new object by transferring resources from another object, instead of unnecessarily copying those resources.

«Copy → Duplicate resources
Move → Transfer resources»

---

2. Syntax

ClassName(ClassName&& other) {
    // transfer resources
}

The "&&" represents an rvalue reference.

---

3. Example

#include <iostream>
using namespace std;

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }

    Student(Student&& other) {
        age = other.age;
        other.age = nullptr;
    }

    ~Student() {
        delete age;
    }
};

int main() {

    Student s1(20);

    Student s2 = std::move(s1);

    cout << *s2.age << endl;

    return 0;
}

Output

20

---

4. How It Works

Initially:

s1 → Memory

When moving:

Student s2 = std::move(s1);

The resource is transferred:

s1 → nullptr

s2 → Memory

The move constructor does:

age = other.age;

The resource address is transferred to "s2".

Then:

other.age = nullptr;

The source object is left without ownership of that resource.

---

5. Why Use a Move Constructor?

Move constructors are useful for improving performance when objects manage resources such as:

- Dynamic memory
- File handles
- Large buffers
- Other owned resources

Instead of allocating and copying a large resource again, ownership can be transferred.

---

6. Copy Constructor vs Move Constructor

Copy Constructor| Move Constructor
Creates a copy| Transfers resources
Usually copies the data| Usually transfers ownership
May require new resource allocation| Can avoid unnecessary allocation
Commonly uses "const T&"| Commonly uses "T&&"
Source keeps its own resources| Source may be left in a valid but moved-from state

---

7. "std::move()"

"std::move()" is commonly used to allow an object to be treated as an rvalue so that move operations can be selected.

Example:

Student s2 = std::move(s1);

It does not itself move the resource. It enables move semantics to be used.

---

8. Important Points

- Move constructor is a special member function.
- It creates a new object.
- It transfers resources from another object.
- It commonly takes an rvalue reference ("&&").
- It can avoid unnecessary copying.
- The source object remains valid but its exact state after moving is generally not something to rely on unless specified.
- Move constructors are especially useful for resource-owning classes.

---

9. One-Line Definition

«A move constructor creates a new object by efficiently transferring resources from another object instead of copying them.»


### topic 5

Move Assignment Operator – C++ Notes

1. Definition

The Move Assignment Operator transfers resources from one object to another already existing object, instead of copying those resources.

---

2. Syntax

ClassName& operator=(ClassName&& other) {
    // transfer resources
    return *this;
}

The "&&" represents an rvalue reference.

---

3. Simple Example

Student s1(20);

Student s2;

s2 = std::move(s1);

Here:

- "s1" already exists.
- "s2" already exists.
- Resources are transferred from "s1" to "s2".

---

4. Complete Example

#include <iostream>
using namespace std;

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }

    Student& operator=(Student&& other) {

        if (this != &other) {
            delete age;

            age = other.age;
            other.age = nullptr;
        }

        return *this;
    }

    ~Student() {
        delete age;
    }
};

int main() {

    Student s1(20);
    Student s2(25);

    s2 = std::move(s1);

    cout << *s2.age << endl;

    return 0;
}

Output

20

---

5. How It Works

Before moving:

s1 → Memory A
s2 → Memory B

After:

s2 = std::move(s1);

The resource is transferred:

s1 → nullptr
s2 → Memory A

---

6. Why Delete Existing Resource?

Before receiving the new resource, "s2" may already own a resource.

delete age;

This releases the resource currently owned by "s2".

Otherwise, the old resource could become unreachable and cause a memory leak.

---

7. Self-Move Check

if (this != &other)

This checks whether the source and destination are the same object.

It helps avoid problems in cases such as:

s1 = std::move(s1);

---

8. "return *this"

return *this;

"this" points to the current object.

"*this" represents the current object itself.

Returning it allows assignment operations to be chained.

---

9. Move Constructor vs Move Assignment Operator

Move Constructor| Move Assignment Operator
Creates a new object| Works with an existing object
"T(T&&)"| "T& operator=(T&&)"
Destination does not exist before construction| Destination already exists
"Student s2 = std::move(s1);"| "s2 = std::move(s1);"

Easy Memory Trick

Move Constructor
NEW object ← MOVE

Move Assignment
EXISTING object ← MOVE

---

10. Important Points

- Move assignment is a special member function.
- It works with an already existing destination object.
- It transfers resources instead of unnecessarily copying them.
- It commonly takes an rvalue reference ("&&").
- The existing destination resource should be handled safely before taking ownership of the new resource.
- "return *this" commonly returns the current object.
- "std::move()" enables move semantics; it does not itself perform the resource transfer.

---

11. One-Line Definition

«The Move Assignment Operator transfers resources from one object to another already existing object efficiently.»


### topic 6

Destructor – C++ Notes

1. Definition

A Destructor is a special member function that is automatically called when an object is destroyed.

«Constructor → Creates/initializes an object
Destructor → Cleans up when an object is destroyed»

---

2. Syntax

~ClassName() {
    // cleanup code
}

A destructor uses the "~" symbol before the class name.

---

3. Simple Example

#include <iostream>
using namespace std;

class Student {
public:

    Student() {
        cout << "Student created" << endl;
    }

    ~Student() {
        cout << "Student destroyed" << endl;
    }
};

int main() {

    Student s;

    return 0;
}

Output

Student created
Student destroyed

---

4. How It Works

Student s;

The object "s" is created, so the constructor is called.

When "s" reaches the end of its lifetime, the destructor is automatically called.

Object Created
      ↓
Constructor
      ↓
Object Lifetime
      ↓
Object Destroyed
      ↓
Destructor

---

5. Destructor for Resource Cleanup

A destructor is especially useful when an object owns a resource such as dynamically allocated memory.

Example:

class Student {
public:
    int* age;

    Student() {
        age = new int(20);
    }

    ~Student() {
        delete age;
    }
};

Here:

age = new int(20);

allocates memory.

The destructor:

delete age;

releases that memory when the object is destroyed.

---

6. Destructor with Local Object

{
    Student s;
}

When execution reaches:

}

the local object "s" is destroyed and its destructor is called.

---

7. Destructor with Dynamic Object

Student* s = new Student();

delete s;

When:

delete s;

is executed, the destructor is called and the dynamically allocated object is destroyed.

---

8. Important Rules

- A destructor is a special member function.
- Its name is the class name preceded by "~".
- It has no return type.
- It does not take parameters.
- A class normally has only one destructor.
- It is automatically called when an object's lifetime ends.
- It is commonly used for resource cleanup.
- A destructor can be declared "virtual" in a base class when objects may be deleted through a base-class pointer.

---

9. Constructor vs Destructor

Constructor| Destructor
Creates/initializes an object| Destroys/cleans up an object
Called when object is created| Called when object is destroyed
Class name| "~" + class name
Can have parameters| Cannot have parameters
Can have multiple overloaded constructors| Only one destructor per class

---

10. One-Line Definition

«A destructor is a special member function that is automatically called when an object is destroyed and is commonly used for resource cleanup.»
