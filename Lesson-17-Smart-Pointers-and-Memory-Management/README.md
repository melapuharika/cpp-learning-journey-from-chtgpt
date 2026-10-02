
Lesson 17 — Smart Pointers & Memory Management

1. Smart Pointers
2. "unique_ptr"
3. "shared_ptr"
4. "weak_ptr"
5. Functions
6. "make_unique"
7. "make_shared"
8. Concepts
9. Ownership
10. Reference Counting
11. Cyclic Reference
12. Custom Deleters
13. Memory Management
14. Stack
15. Heap
16. Static Storage
17. Automatic Storage
18. Dynamic Storage
19. Allocation & Deallocation
20. Memory Leaks
21. Dangling Pointers
22. Ownership
23. RAII

### topic 1
Smart Pointers

Definition

A Smart Pointer is a C++ object that behaves like a pointer and helps automatically manage dynamically allocated memory.

Smart pointers are provided by the "<memory>" header.

#include <memory>

Why Do We Need Smart Pointers?

With a normal pointer, dynamically allocated memory must be manually released using "delete".

int* ptr = new int(10);

delete ptr;

If we forget "delete", it can cause a memory leak.

Smart pointers automatically manage the memory and reduce the need for manual "delete".

Types of Smart Pointers

C++ provides three main smart pointers:

1. "unique_ptr"
2. "shared_ptr"
3. "weak_ptr"

Example

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr = make_unique<int>(10);

    cout << *ptr;

    return 0;
}

Explanation

unique_ptr<int> ptr;

"ptr" is a smart pointer that manages an "int".

make_unique<int>(10);

Creates an "int" dynamically and gives its ownership to the smart pointer.

*ptr

Dereferences the smart pointer and accesses the stored value.

When "ptr" goes out of scope, the memory it owns is automatically released.

Advantages

- Automatic memory management
- Reduces manual use of "delete"
- Helps prevent memory leaks
- Helps manage ownership clearly
- Safer and easier than many manual pointer-management patterns

Key Point

Smart Pointer = Pointer-like object + Automatic Memory Management

Main Types

unique_ptr → One owner
shared_ptr → Multiple owners
weak_ptr   → Non-owning reference


### topic 2

"unique_ptr"

Definition

"unique_ptr" is a smart pointer in C++ that provides single ownership of a dynamically allocated object.

It is available in the "<memory>" header.

#include <memory>

Syntax

unique_ptr<Type> pointer;

Example

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr = make_unique<int>(10);

    cout << *ptr;

    return 0;
}

Output

10

How It Works

unique_ptr<int> ptr = make_unique<int>(10);

- "unique_ptr<int>" → smart pointer that manages an "int"
- "ptr" → name of the smart pointer
- "make_unique<int>(10)" → creates an integer dynamically
- "ptr" → becomes the owner of that memory

When "ptr" goes out of scope, the memory is automatically released.

Single Ownership

A "unique_ptr" has only one owner.

unique_ptr<int> ptr1 = make_unique<int>(10);

Here, "ptr1" owns the object.

Copying Is Not Allowed

A "unique_ptr" cannot be copied.

unique_ptr<int> ptr1 = make_unique<int>(10);

// unique_ptr<int> ptr2 = ptr1;  // ❌ Error

Copying is not allowed because it would create two owners.

Moving Ownership

Ownership can be transferred using "std::move()".

unique_ptr<int> ptr1 = make_unique<int>(10);

unique_ptr<int> ptr2 = move(ptr1);

After this:

ptr1 → No longer owns the object
ptr2 → Owns the object

Advantages

- Provides single ownership
- Automatically releases memory
- Reduces the need for "delete"
- Helps prevent memory leaks
- Prevents accidental copying of ownership

Key Points

- "unique_ptr" → single owner
- Copying → Not allowed
- Moving → Allowed
- Memory cleanup → Automatic

Remember

"unique_ptr" = Single Ownership + Automatic Memory Management
