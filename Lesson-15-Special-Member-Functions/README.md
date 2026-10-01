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


### topic 7

Rule of 3 – C++ Notes

1. Definition

The Rule of 3 is a C++ guideline for classes that manually manage resources such as dynamically allocated memory.

If a class needs to define one of the three special member functions below, it often needs to define all three:

1. Destructor
2. Copy Constructor
3. Copy Assignment Operator

---

2. The Three Functions

Rule of 3
   │
   ├── Destructor
   ├── Copy Constructor
   └── Copy Assignment Operator

---

3. Why Rule of 3?

Consider a class that manually allocates memory:

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }
};

If the default copy behavior is used, the pointer itself may be copied:

s1 → Memory A

s2 → Memory A

Now both objects may refer to the same dynamically allocated memory.

This can lead to problems such as:

- Double deletion
- Dangling pointers
- Unintended modification
- Resource-management errors

---

4. Copy Constructor

The copy constructor should create an independent copy of the resource.

Student(const Student& other) {
    age = new int(*other.age);
}

Here, new memory is allocated for the copied object.

s1 → Memory A

s2 → Memory B

---

5. Copy Assignment Operator

The copy assignment operator should safely replace the existing resource.

Student& operator=(const Student& other) {

    if (this != &other) {
        delete age;
        age = new int(*other.age);
    }

    return *this;
}

---

6. Destructor

The destructor releases the resource owned by the object.

~Student() {
    delete age;
}

---

7. Complete Example

#include <iostream>
using namespace std;

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }

    // Copy Constructor
    Student(const Student& other) {
        age = new int(*other.age);
    }

    // Copy Assignment Operator
    Student& operator=(const Student& other) {

        if (this != &other) {
            delete age;
            age = new int(*other.age);
        }

        return *this;
    }

    // Destructor
    ~Student() {
        delete age;
    }
};

int main() {

    Student s1(20);

    Student s2 = s1;   // Copy Constructor

    Student s3(25);

    s3 = s1;           // Copy Assignment

    return 0;
}

---

8. Easy Memory Trick

Copy Constructor
       ↓
How to COPY the resource?

Copy Assignment
       ↓
How to ASSIGN the resource?

Destructor
       ↓
How to CLEAN UP the resource?

---

9. Rule of 3 vs Rule of 0

The Rule of 3 is mainly relevant when a class manually manages resources.

Modern C++ often prefers using resource-managing types such as:

std::string
std::vector
std::unique_ptr

This can allow the class to follow the Rule of 0, avoiding manually written special member functions.

---

10. Important Points

- Rule of 3 applies especially to resource-owning classes.
- The three functions are:
  - Destructor
  - Copy Constructor
  - Copy Assignment Operator
- It helps prevent resource-management problems.
- It is closely related to shallow copy and deep copy.
- It is a guideline, not a compiler-enforced rule.
- Modern C++ often prefers RAII and the Rule of 0 when possible.

---

11. One-Line Definition

«Rule of 3 says that when a resource-managing C++ class needs a custom destructor, copy constructor, or copy assignment operator, it often needs all three.»


### topic 8

Rule of 5 – C++ Notes

1. Definition

The Rule of 5 is a C++ guideline for classes that manually manage resources such as dynamically allocated memory.

It extends the Rule of 3 by adding two move operations.

The five special member functions are:

1. Destructor
2. Copy Constructor
3. Copy Assignment Operator
4. Move Constructor
5. Move Assignment Operator

---

2. Five Functions

Rule of 5
   │
   ├── Destructor
   ├── Copy Constructor
   ├── Copy Assignment Operator
   ├── Move Constructor
   └── Move Assignment Operator

---

3. Rule of 3 + Move Operations

Rule of 3
   +
Move Constructor
   +
Move Assignment Operator
   =
Rule of 5

The Rule of 5 is especially important when a class directly manages a resource.

---

4. Copy vs Move

Copy

Copying creates a separate copy of the resource.

Box A → Books
         ↓ copy
Box B → Books

Move

Moving transfers the resource from one object to another.

Box A → Books
         ↓ move
Box B → Books

Move operations can avoid unnecessary resource copying.

---

5. Copy Constructor

Creates a new object by copying another object.

Student(const Student& other) {
    age = new int(*other.age);
}

Usage:

Student s2 = s1;

---

6. Copy Assignment Operator

Copies data into an already existing object.

Student& operator=(const Student& other) {
    if (this != &other) {
        int* newAge = new int(*other.age);
        delete age;
        age = newAge;
    }

    return *this;
}

Usage:

s2 = s1;

---

7. Move Constructor

Creates a new object by transferring the resource from another object.

Student(Student&& other) noexcept {
    age = other.age;
    other.age = nullptr;
}

Usage:

Student s2 = std::move(s1);

---

8. Move Assignment Operator

Transfers a resource to an already existing object.

Student& operator=(Student&& other) noexcept {
    if (this != &other) {
        delete age;
        age = other.age;
        other.age = nullptr;
    }

    return *this;
}

Usage:

s2 = std::move(s1);

---

9. Destructor

Releases the resource when the object is destroyed.

~Student() {
    delete age;
}

---

10. Complete Example

#include <iostream>
using namespace std;

class Student {
    int* age;

public:

    Student(int value) {
        age = new int(value);
    }

    // Copy Constructor
    Student(const Student& other) {
        age = new int(*other.age);
    }

    // Copy Assignment Operator
    Student& operator=(const Student& other) {
        if (this != &other) {
            int* newAge = new int(*other.age);
            delete age;
            age = newAge;
        }

        return *this;
    }

    // Move Constructor
    Student(Student&& other) noexcept {
        age = other.age;
        other.age = nullptr;
    }

    // Move Assignment Operator
    Student& operator=(Student&& other) noexcept {
        if (this != &other) {
            delete age;
            age = other.age;
            other.age = nullptr;
        }

        return *this;
    }

    // Destructor
    ~Student() {
        delete age;
    }
};

---

11. Quick Identification

Student s2 = s1;

→ Copy Constructor

s2 = s1;

→ Copy Assignment Operator

Student s2 = std::move(s1);

→ Move Constructor

s2 = std::move(s1);

→ Move Assignment Operator

---

12. Important Points

- Rule of 5 extends the Rule of 3.
- It contains five special member functions.
- Copy operations duplicate resources.
- Move operations transfer resources.
- Move operations can improve performance by avoiding unnecessary copies.
- "std::move()" enables move semantics; it does not itself perform the resource transfer.
- "noexcept" is commonly used with move operations.
- Rule of 5 is mainly relevant to resource-managing classes.
- We do not always need to manually write all five functions.

---

13. One-Line Definition

«Rule of 5 says that a resource-managing C++ class may need five special member functions: destructor, copy constructor, copy assignment operator, move constructor, and move assignment operator.»


### topic 9

Rule of 0 – C++ Notes

1. Definition

The Rule of 0 is a C++ guideline that says:

«If a class does not directly manage resources, it should usually not manually define special member functions.»

Instead, use resource-managing C++ types such as:

- "std::string"
- "std::vector"
- "std::unique_ptr"
- Other RAII-based classes

---

2. Why Rule of 0?

In older-style code, a class may manually manage memory:

int* age;

Then we may need to manually write:

- Destructor
- Copy Constructor
- Copy Assignment Operator
- Move Constructor
- Move Assignment Operator

This can make the code complicated and error-prone.

With the Rule of 0, we let standard C++ classes manage resources for us.

---

3. Example

#include <string>
#include <vector>

class Student {
public:
    std::string name;
    std::vector<int> marks;
};

Here:

- "std::string" manages the memory for "name".
- "std::vector" manages the memory for "marks".
- We don't need to manually write a destructor.
- We don't need to manually write copy/move operations.

---

4. What We Avoid

With Rule of 0, we generally avoid manually writing:

~Student();

Student(const Student& other);

Student& operator=(const Student& other);

Student(Student&& other);

Student& operator=(Student&& other);

The compiler can generate the appropriate special member functions.

---

5. Simple Comparison

Manual Resource Management

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }

    ~Student() {
        delete age;
    }
};

Here the class directly manages dynamic memory.

Rule of 0

#include <memory>

class Student {
public:
    std::unique_ptr<int> age;

    Student(int value)
        : age(std::make_unique<int>(value)) {}
};

Here "std::unique_ptr" manages the memory automatically.

---

6. Common Resource-Managing Types

std::string
    ↓
Manages string memory

std::vector
    ↓
Manages dynamic array memory

std::unique_ptr
    ↓
Manages dynamically allocated object

std::shared_ptr
    ↓
Manages shared ownership

---

7. Rule of 0 vs Rule of 3 vs Rule of 5

Rule of 3
    ↓
Custom resource management
    ↓
Destructor
Copy Constructor
Copy Assignment


Rule of 5
    ↓
Custom resource management + move operations
    ↓
Destructor
Copy Constructor
Copy Assignment
Move Constructor
Move Assignment


Rule of 0
    ↓
Use RAII/resource-managing types
    ↓
Avoid manually writing special member functions

---

8. Advantages of Rule of 0

- Less code
- Fewer bugs
- Automatic resource management
- Easier maintenance
- Safer memory management
- Works well with modern C++

---

9. Important Points

- Rule of 0 is a C++ design guideline.
- Avoid manually managing resources when possible.
- Prefer standard resource-managing types.
- "std::string", "std::vector", and smart pointers are common examples.
- The compiler can generate special member functions automatically.
- Rule of 0 is closely related to RAII.
- Modern C++ generally encourages this style.

---

10. One-Line Definition

«Rule of 0 means designing a class so that it does not need to manually define special member functions because resource management is handled by other RAII-based objects.»


### topic 10

Shallow Copy – C++ Notes

1. Definition

Shallow Copy means copying an object in such a way that a pointer member's address is copied, but the dynamically allocated data is not separately copied.

As a result, two objects can point to the same memory location.

---

2. Simple Representation

Original Object
      |
   Pointer
      |
   Memory A


Copied Object
      |
   Pointer
      |
   Memory A

Both objects point to the same memory.

---

3. Example

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }
};

Now:

Student s1(20);
Student s2 = s1;

The default copy can result in:

s1.age ──→ Memory A ←── s2.age
             |
             20

Both pointers contain the same address.

---

4. What Happens During Shallow Copy?

Suppose:

*s1.age = 25;

Because "s1" and "s2" point to the same memory:

cout << *s2.age;

Output:

25

The change made through "s1" is visible through "s2".

---

5. Main Problem

If both objects believe they own the same dynamically allocated memory, problems can occur.

For example:

s1 → Memory A
s2 → Memory A

If both destructors try to:

delete age;

the same memory may be deleted twice.

This can cause double deletion and undefined behavior.

---

6. Shallow Copy Diagram

Before Copy:

s1 → Memory A
      |
      20


After Shallow Copy:

s1 → Memory A ← s2
      |
      20

The memory is shared.

---

7. Shallow Copy vs Deep Copy

Shallow Copy| Deep Copy
Pointer/address is copied| Actual data is copied
Both objects may point to same memory| Each object gets separate memory
Memory can be shared| Memory is independent
Can cause resource-management problems| Safer for unique ownership
"s1.age == s2.age" may be true| "s1.age != s2.age"

Shallow Copy

s1 → Memory A
s2 → Memory A

Deep Copy

s1 → Memory A
s2 → Memory B

---

8. Important Points

- Shallow copy copies the pointer/address.
- The pointed-to data is not separately copied.
- Two objects can point to the same memory.
- Changes through one object can affect the other.
- It can cause problems such as double deletion and dangling pointers when ownership is involved.
- Shallow copy is not automatically wrong; it depends on what the pointer represents and who owns the resource.
- For owning raw pointers, deep copy or a suitable RAII type is usually needed.

---

9. One-Line Definition

«Shallow Copy copies the pointer/address rather than creating a separate copy of the dynamically allocated data.»


### topic 11

Deep Copy – C++ Notes

1. Definition

Deep Copy means creating a separate memory location for the copied object's dynamically allocated data and copying the actual value into that new memory.

The original and copied objects become independent.

---

2. Simple Representation

Original Object
      |
   Pointer
      |
   Memory A


Copied Object
      |
   Pointer
      |
   Memory B

Memory A and Memory B are different.

---

3. Example

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }

    // Deep Copy
    Student(const Student& other) {
        age = new int(*other.age);
    }
};

Now:

Student s1(20);
Student s2 = s1;

Memory looks like:

s1 → Memory A → 20

s2 → Memory B → 20

The values are the same, but the memory is different.

---

4. Important Line

age = new int(*other.age);

This line performs the deep copy.

Step-by-step

other.age
   ↓
Original pointer

*other.age
   ↓
Value stored in original memory

new int(...)
   ↓
Create new memory

age = ...
   ↓
Store the new memory address

---

5. Checking Deep Copy

Suppose:

Student s1(20);
Student s2 = s1;

Check addresses:

s1.age == s2.age

Output:

false

Because they point to different memory.

Check values:

*s1.age == *s2.age

Output:

true

Because both contain the value "20".

---

6. Independence of Objects

Suppose:

*s1.age = 25;

Then:

cout << *s2.age;

Output:

20

The change in "s1" does not affect "s2".

---

7. Shallow Copy vs Deep Copy

Shallow Copy| Deep Copy
Copies the pointer/address| Creates new memory
Same memory may be shared| Separate memory is created
Data may be shared| Data is independently copied
Changes may affect both objects| Changes are independent
Can cause ownership problems| Avoids shared ownership of copied resource

Shallow Copy

s1 → Memory A
s2 → Memory A

Deep Copy

s1 → Memory A
s2 → Memory B

---

8. Deep Copy with Destructor

When using a raw owning pointer, the class should also release its allocated memory.

class Student {
public:
    int* age;

    Student(int value) {
        age = new int(value);
    }

    Student(const Student& other) {
        age = new int(*other.age);
    }

    ~Student() {
        delete age;
    }
};

Each object owns its own memory.

---

9. Important Points

- Deep Copy creates separate memory for the copied data.
- The actual value is copied into the new memory.
- Original and copied objects are independent.
- Changing one object does not affect the other.
- Deep copy is useful when a class owns a resource that should not be shared by copies.
- Raw owning pointers require careful resource management.
- Modern C++ often prefers RAII types such as "std::string", "std::vector", and smart pointers instead of manually managing raw memory.

---

10. One-Line Definition

«Deep Copy creates separate memory for the copied resource and copies the actual data, making the original and copied objects independent.»


### topic 12
Object Lifetime – C++ Notes

1. Definition

Object Lifetime means the period from when an object is created and its lifetime begins until its lifetime ends and the object is destroyed.

Object Created
      ↓
Object is Alive
      ↓
Object Destroyed
      ↓
Lifetime Ends

---

2. Local Object Example

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Created" << endl;
    }

    ~Student() {
        cout << "Destroyed" << endl;
    }
};

int main() {

    Student s;

    return 0;
}

Here:

Student s;

creates the object.

When "main()" ends, the local object is destroyed and its destructor is called.

---

3. Object Lifetime Inside a Block

int main() {

    {
        Student s;
    }

    return 0;
}

The object is created here:

Student s;

Its lifetime ends when the block ends:

}

{
    Student s;  ← Object created

}              ← Object destroyed

---

4. Dynamic Object Lifetime

Dynamic objects are created using "new".

Student* s = new Student();

The object remains alive until it is destroyed using "delete".

delete s;

new Student()
      ↓
Object Created
      ↓
Object is Alive
      ↓
delete s
      ↓
Destructor Called
      ↓
Lifetime Ends

---

5. Destructor and Object Lifetime

A destructor is called when an object's lifetime ends.

~Student() {
    cout << "Object destroyed";
}

For a normal local object, the destructor is automatically called when the object goes out of its lifetime.

For a dynamically allocated object, "delete" is used to end its lifetime.

---

6. Scope vs Lifetime

Scope

Scope tells us where a name can be accessed in the program.

Lifetime

Lifetime tells us how long the object itself exists.

Scope
  ↓
Where can I access the name?

Lifetime
  ↓
How long does the object exist?

They are related, but they are not the same concept.

---

7. Simple Real-Life Example

Think about a student entering and leaving a classroom.

Enters Classroom
       ↓
Student is present
       ↓
Leaves Classroom

Similarly:

Object Created
       ↓
Object is Alive
       ↓
Object Destroyed

The time between creation and destruction is the object's lifetime.

---

8. Important Points

- Object lifetime starts when the object's lifetime begins after proper initialization.
- Object lifetime ends when the object is destroyed.
- Local objects normally have automatic lifetime.
- Dynamic objects created with "new" remain alive until they are properly destroyed.
- Destructors are involved in object destruction.
- Scope means where a name can be accessed.
- Lifetime means how long an object exists.
- Scope and lifetime are related but not identical.

---

9. One-Line Definition

«Object Lifetime is the period during which an object exists, from the beginning of its lifetime until its destruction.»


### topic 13

Temporary Objects – C++ Notes

1. Definition

A Temporary Object is a short-lived object that is usually created without giving it a name.

It is commonly created as an intermediate result of an expression, conversion, function return, or similar operation.

Object Created
      ↓
Used for a short time
      ↓
Temporary Object Destroyed

---

2. Basic Example

Student(20);

Here, a "Student" object is created without a variable name.

Student(20)
    ↓
Temporary Object
    ↓
Work completed
    ↓
Object Destroyed

---

3. Named Object vs Temporary Object

Named Object

Student s(20);

Here, "s" is the object's name.

Student
   ↓
  s
   ↓
Named Object

Temporary Object

Student(20);

There is no variable name.

Student(20)
     ↓
Temporary Object

---

4. Temporary Object in an Expression

Temporary objects can be created while evaluating expressions.

Example:

Student(20).display();

A temporary "Student" object is created, "display()" is called on it, and it is then destroyed according to the applicable temporary-object lifetime rules.

---

5. Temporary Object in Function Return

Student createStudent() {
    return Student(20);
}

The expression "Student(20)" creates a temporary object that can be used as the return value.

Modern C++ often uses copy elision to avoid unnecessary copying or moving.

---

6. Lifetime of Temporary Objects

A temporary object's lifetime is usually very short.

In general, a temporary object is destroyed at the end of the full-expression that created it, unless a C++ rule extends its lifetime.

Example:

Student(20).display();

Conceptually:

Temporary Object Created
          ↓
display() called
          ↓
Full-expression ends
          ↓
Temporary Object Destroyed

---

7. Simple Real-Life Example

Think of using a calculator for one calculation.

Calculator Used
      ↓
Calculation Completed
      ↓
No Longer Needed

Similarly:

Temporary Object Created
      ↓
Used for a short operation
      ↓
No Longer Needed
      ↓
Destroyed

---

8. Important Points

- Temporary objects are usually unnamed.
- They are generally short-lived.
- They can be created as intermediate results of expressions.
- They can appear during function return operations.
- Their lifetime is usually until the end of the full-expression that created them.
- Some C++ rules can extend a temporary's lifetime.
- Modern C++ can eliminate unnecessary temporary copies through copy elision.
- A temporary object is commonly called an unnamed object in informal C++ explanations.

---

9. Named Object vs Temporary Object

Named Object| Temporary Object
Has a name| Usually has no name
Example: "Student s(20);"| Example: "Student(20);"
Can be accessed using its name| Usually used directly in an expression
Usually has a longer useful lifetime| Usually short-lived

---

10. One-Line Definition

«A Temporary Object is a usually unnamed, short-lived object created for an expression, intermediate operation, conversion, or function result.»


### topic 14

Anonymous Objects – C++ Notes

1. Definition

An Anonymous Object is an object that is created without giving it a name.

In C++ teaching, the term usually refers to an unnamed temporary object.

---

2. Named Object

Student s(20);

Here:

s
↓
Object Name

So "s" is a Named Object.

---

3. Anonymous Object

Student(20);

Here, the object does not have a variable name.

Student(20)
     ↓
No name
     ↓
Anonymous / Unnamed Object

---

4. Example

#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    void display() {
        cout << age << endl;
    }
};

int main() {

    Student s(20);        // Named object

    Student(20).display(); // Anonymous/temporary object

    return 0;
}

Output:

20
20

---

5. How Anonymous Objects Work

Consider:

Student(20).display();

Step-by-step:

Student(20)
     ↓
Object created without a name
     ↓
display() is called
     ↓
Temporary object is no longer needed
     ↓
Object is destroyed according to its lifetime rules

---

6. Named Object vs Anonymous Object

Named Object

Student s(20);

Object
  ↓
 s
  ↓
Name available

Anonymous Object

Student(20);

Object
  ↓
No name
  ↓
Usually temporary

---

7. Anonymous Object and Temporary Object

In informal C++ terminology:

Anonymous Object
       ≈
Unnamed Temporary Object

The more precise standard C++ terminology is generally temporary object.

---

8. Important Points

- An anonymous object has no variable name.
- It is commonly used for short operations.
- It is usually a temporary object.
- It can be used directly to call a member function.
- Example:

Student(20).display();

- The object has a limited lifetime.
- "Anonymous object" is a common teaching term; temporary object is the more precise C++ terminology.

---

9. One-Line Definition

«An Anonymous Object is an unnamed object, usually a temporary object, created for direct or short-term use.»
