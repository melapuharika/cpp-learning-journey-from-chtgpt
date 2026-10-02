
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


### topic 3

"shared_ptr"

Definition

"shared_ptr" is a smart pointer in C++ that allows multiple pointers to share ownership of the same dynamically allocated object.

It is available in the "<memory>" header.

#include <memory>

Syntax

shared_ptr<Type> pointer;

Example

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_shared<int>(10);

    shared_ptr<int> ptr2 = ptr1;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    return 0;
}

Output

10
10

Here, "ptr1" and "ptr2" share ownership of the same object.

Reference Counting

"shared_ptr" maintains a reference count to keep track of how many "shared_ptr" objects own the same object.

One Owner

shared_ptr<int> ptr1 = make_shared<int>(10);

Reference count:

1

Two Owners

shared_ptr<int> ptr2 = ptr1;

Reference count:

2

Now both "ptr1" and "ptr2" own the same object.

"use_count()"

We can check the number of owners using "use_count()".

cout << ptr1.use_count();

Example:

shared_ptr<int> ptr1 = make_shared<int>(10);

shared_ptr<int> ptr2 = ptr1;

cout << ptr1.use_count();

Output:

2

Automatic Memory Management

When a "shared_ptr" is destroyed, the reference count decreases.

When the reference count becomes 0, the managed object is automatically destroyed and its memory is released.

Advantages

- Allows multiple owners
- Uses reference counting
- Automatically manages memory
- Reduces the need for manual "delete"
- Helps prevent many memory-management errors

Difference from "unique_ptr"

"unique_ptr"| "shared_ptr"
Single owner| Multiple owners
Cannot be copied| Can be copied
Ownership can be moved| Ownership can be shared
No reference counting| Uses reference counting

Key Point

"shared_ptr" = Multiple Ownership + Reference Counting + Automatic Memory Management


### topic 4 

"weak_ptr"

Definition

"weak_ptr" is a smart pointer in C++ that provides a non-owning reference to an object managed by "shared_ptr".

It is available in the "<memory>" header.

#include <memory>

Simple Meaning

- "shared_ptr" → Owns the object
- "weak_ptr" → Observes the object but does not own it

Syntax

weak_ptr<Type> pointer;

Example

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr = make_shared<int>(10);

    weak_ptr<int> weak = ptr;

    cout << *ptr;

    return 0;
}

Here:

weak_ptr<int> weak = ptr;

"weak" refers to the object managed by "ptr", but it does not own the object.

Why Do We Need "weak_ptr"?

"shared_ptr" uses reference counting.

Sometimes two or more objects can keep "shared_ptr"s to each other, creating a cyclic reference.

This can prevent the reference count from becoming "0", causing the memory to remain allocated.

"weak_ptr" can be used to refer to an object without increasing its ownership/reference count.

"lock()"

A "weak_ptr" cannot be directly dereferenced.

We use "lock()" to temporarily obtain a "shared_ptr".

if (auto temp = weak.lock())
{
    cout << *temp;
}

If the object still exists, "lock()" returns a valid "shared_ptr".

If the object has already been destroyed, "lock()" returns an empty "shared_ptr".

Important Points

1. "weak_ptr" does not own the object.
2. It does not increase the "shared_ptr" ownership count.
3. It cannot be directly dereferenced.
4. "lock()" is used to safely access the object.
5. It helps prevent problems caused by cyclic references.

Difference

"shared_ptr"| "weak_ptr"
Owns the object| Does not own the object
Increases ownership count| Does not increase ownership count
Can be directly dereferenced| Cannot be directly dereferenced
Uses shared ownership| Provides non-owning access

Key Point

"weak_ptr" = Non-owning reference to an object managed by "shared_ptr".

### topic 5

Functions with Smart Pointers

Definition

A function is a reusable block of code that performs a specific task.

Smart pointers can be passed to functions as arguments.

Example

#include <iostream>
#include <memory>
using namespace std;

void display(shared_ptr<int> ptr)
{
    cout << *ptr;
}

int main()
{
    shared_ptr<int> p = make_shared<int>(10);

    display(p);

    return 0;
}

Output

10

Here, the "shared_ptr" "p" is passed to the "display()" function.

"shared_ptr" with Functions

A "shared_ptr" can be passed to a function because it supports shared ownership.

void display(shared_ptr<int> ptr)
{
    cout << *ptr;
}

When passed by value, another "shared_ptr" owner is created temporarily, increasing the reference count.

"unique_ptr" with Functions

A "unique_ptr" cannot be copied.

If ownership needs to be transferred to a function, use "std::move()".

#include <iostream>
#include <memory>
using namespace std;

void display(unique_ptr<int> ptr)
{
    cout << *ptr;
}

int main()
{
    unique_ptr<int> p = make_unique<int>(10);

    display(move(p));

    return 0;
}

Here, ownership of the object is transferred from "p" to the function.

After:

move(p);

"p" no longer owns the object.

"weak_ptr" with Functions

A "weak_ptr" does not own the object.

To safely access the object, use "lock()" to obtain a temporary "shared_ptr".

void display(weak_ptr<int> weak)
{
    if (auto ptr = weak.lock())
    {
        cout << *ptr;
    }
}

Important Points

- Smart pointers can be passed to functions.
- "shared_ptr" supports shared ownership.
- "unique_ptr" cannot be copied.
- "unique_ptr" ownership can be transferred using "move()".
- "weak_ptr" can be accessed using "lock()".

Key Point

Smart pointers can be used with functions, but the way they are passed depends on their ownership model.

### topic 6

"make_unique"

Definition

"make_unique()" is a C++ function used to create a "unique_ptr" and dynamically allocate an object.

It is available in the "<memory>" header.

#include <memory>

Syntax

auto ptr = make_unique<Type>(value);

Example

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    auto ptr = make_unique<int>(10);

    cout << *ptr;

    return 0;
}

Output

10

How It Works

auto ptr = make_unique<int>(10);

- "make_unique<int>" → dynamically creates an "int" object.
- "10" → value stored in the object.
- "ptr" → "unique_ptr" that owns the object.
- "auto" → automatically determines the type as "unique_ptr<int>".

Without "make_unique()"

We can create a "unique_ptr" using "new":

unique_ptr<int> ptr(new int(10));

But modern C++ prefers:

auto ptr = make_unique<int>(10);

because it is simpler and avoids directly using "new".

Advantages

- Creates "unique_ptr" easily.
- Supports automatic memory management.
- Avoids direct use of "new".
- Makes code simpler and safer.
- Commonly used in modern C++.

Important Point

"make_unique()" creates a "unique_ptr", not a "shared_ptr".

Remember

"make_unique()" → Creates "unique_ptr" → Single ownership → Automatic memory management

### topic 7

"make_shared"

Definition

"make_shared()" is a C++ function used to create a "shared_ptr" and dynamically allocate an object.

It is available in the "<memory>" header.

#include <memory>

Syntax

auto ptr = make_shared<Type>(value);

Example

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    auto ptr = make_shared<int>(10);

    cout << *ptr;

    return 0;
}

Output

10

How It Works

auto ptr = make_shared<int>(10);

- "make_shared<int>" → dynamically creates an "int" object.
- "10" → value stored in the object.
- "ptr" → "shared_ptr<int>" that manages the object.
- "auto" → automatically determines the type as "shared_ptr<int>".

Sharing Ownership

Multiple "shared_ptr"s can share the same object.

auto ptr1 = make_shared<int>(10);

auto ptr2 = ptr1;

Here:

ptr1 → owns object
ptr2 → shares ownership

The "shared_ptr" uses reference counting to manage the shared ownership.

Without "make_shared()"

We can create a "shared_ptr" using "new":

shared_ptr<int> ptr(new int(10));

Modern C++ generally prefers:

auto ptr = make_shared<int>(10);

because it is simpler and avoids directly using "new".

Advantages

- Creates "shared_ptr" easily.
- Supports shared ownership.
- Provides automatic memory management.
- Avoids direct use of "new".
- Makes code simpler and safer.

Difference

"make_unique()"| "make_shared()"
Creates "unique_ptr"| Creates "shared_ptr"
Single ownership| Shared ownership
No shared ownership| Multiple owners
No reference counting| Uses reference counting

Key Point

"make_shared()" → Creates "shared_ptr" → Shared ownership → Automatic memory management


### topic 8

Smart Pointer Concepts

Smart pointers ni understand cheskovadaniki konni important concepts telusukovali.

1. Ownership

Ownership ante oka object or memory ni evaru manage chestunnaru ani meaning.

- "unique_ptr" → One owner
- "shared_ptr" → Multiple owners
- "weak_ptr" → Does not own

2. Reference Counting

"shared_ptr" oka object ni entha mandi "shared_ptr"s own chestunnayo track cheyyadaniki reference count use chestundi.

auto p1 = make_shared<int>(10);
auto p2 = p1;

Ippudu reference count:

2

3. Automatic Memory Management

Smart pointers memory ni automatically manage chestayi.

Object ki ownership unna smart pointer scope nundi bayataki vellinappudu, appropriate conditions lo memory automatically release avtundi.

Manual memory management lo:

delete ptr;

use cheyyali.

Smart pointers valla manual "delete" requirement chala varaku avoid cheyyachu.

4. RAII

RAII stands for:

Resource Acquisition Is Initialization

RAII principle prakaram, resource object lifetime tho tied ga untundi.

- Object create → Resource acquire
- Object destroy → Resource release

Smart pointers RAII principle ni use chestayi.

5. Cyclic Reference

Two objects "shared_ptr" tho okadanini okati own cheskunte cyclic reference create avvachu.

Object A → Object B
Object B → Object A

Reference count "0" ki raakapovachu, so memory release avvakapovachu.

"weak_ptr" use cheyyadam cyclic ownership ni avoid cheyyadaniki help chestundi.

6. Memory Management

Memory management ante memory ni properly:

1. Allocate cheyyadam
2. Use cheyyadam
3. Deallocate cheyyadam

Smart pointers memory management ni safer and easier ga cheyyadaniki help chestayi.

Quick Summary

Ownership        → Evaru memory ni manage chestunnaru?
Reference Count  → Entha mandi owners unnaru?
weak_ptr         → Non-owning reference
Cyclic Reference → Circular ownership
RAII             → Automatic resource management

Key Point

Smart Pointers = Ownership + Automatic Memory Management + RAII


### topic 9

Ownership

Definition

Ownership means knowing who is responsible for managing a dynamically allocated object or memory.

The owner is responsible for managing the lifetime of the object.

"unique_ptr" — Single Ownership

"unique_ptr" provides single ownership.

auto p = make_unique<int>(10);

Here, "p" is the only owner of the object.

p → Object

When "p" is destroyed, the object is also destroyed.

"shared_ptr" — Shared Ownership

"shared_ptr" allows multiple owners.

auto p1 = make_shared<int>(10);
auto p2 = p1;

Both "p1" and "p2" share ownership of the same object.

p1 ──┐
     ├──> Object
p2 ──┘

The object is destroyed when the last owning "shared_ptr" is destroyed.

"weak_ptr" — No Ownership

"weak_ptr" provides a non-owning reference.

auto p = make_shared<int>(10);
weak_ptr<int> w = p;

Here:

- "p" → owns the object
- "w" → observes the object but does not own it

p ──> Object
w - - > Object

Ownership Transfer

"unique_ptr" ownership can be transferred using "std::move()".

auto p1 = make_unique<int>(10);

auto p2 = move(p1);

After the transfer:

p1 → No longer owns the object
p2 → Owns the object

Ownership Comparison

Smart Pointer| Ownership
"unique_ptr"| Single ownership
"shared_ptr"| Shared ownership
"weak_ptr"| No ownership

Important Points

- Ownership determines who manages an object's lifetime.
- "unique_ptr" has one owner.
- "shared_ptr" can have multiple owners.
- "weak_ptr" does not own the object.
- "unique_ptr" ownership can be transferred using "move()".

Remember

unique_ptr → One owner
shared_ptr → Multiple owners
weak_ptr   → Non-owner

### topic 10

Reference Counting

Definition

Reference Counting is a technique used by "shared_ptr" to keep track of how many "shared_ptr" objects own the same object.

It is mainly used for shared ownership.

Example

auto p1 = make_shared<int>(10);

Reference count:

1

Here, only "p1" owns the object.

Creating Another Owner

auto p2 = p1;

Now both "p1" and "p2" share ownership.

p1 ──┐
     ├──> Object
p2 ──┘

Reference count:

2

"use_count()"

We can check the current reference count using "use_count()".

cout << p1.use_count();

Output:

2

When an Owner Is Destroyed

{
    auto p1 = make_shared<int>(10);

    {
        auto p2 = p1;

        cout << p1.use_count(); // 2
    }

    cout << p1.use_count(); // 1
}

When "p2" goes out of scope:

2 → 1

When "p1" is also destroyed:

1 → 0

When the reference count becomes 0, the managed object is automatically destroyed.

Simple Example

1 owner → Count = 1
2 owners → Count = 2
3 owners → Count = 3
Last owner destroyed → Count = 0

Important Points

- Reference counting is mainly associated with "shared_ptr".
- It tracks the number of owning "shared_ptr"s.
- Copying a "shared_ptr" increases the count.
- Destroying an owning "shared_ptr" decreases the count.
- When the count becomes "0", the managed object is destroyed.

Key Point

Reference Counting = Tracking the number of "shared_ptr" owners of an object.
