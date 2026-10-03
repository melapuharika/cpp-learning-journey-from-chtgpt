
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


### topic 11

Cyclic Reference

Definition

A Cyclic Reference occurs when two or more objects hold "shared_ptr" references to each other, creating a cycle.

Example

#include <iostream>
#include <memory>
using namespace std;

class Node {
public:
    shared_ptr<Node> next;

    ~Node() {
        cout << "Node destroyed" << endl;
    }
};

int main() {
    auto a = make_shared<Node>();
    auto b = make_shared<Node>();

    a->next = b;
    b->next = a;
}

How the Cycle Happens

A → B
↑   ↓
└───┘

- "A" has a "shared_ptr" to "B".
- "B" has a "shared_ptr" to "A".
- Both objects keep each other alive.
- Their reference counts never become "0".
- Therefore, the objects may not be destroyed.

Problem

Cyclic references can cause a memory leak because the memory remains allocated even when the external "shared_ptr"s are destroyed.

Solution

Use "weak_ptr" for one side of the relationship.

class Node {
public:
    shared_ptr<Node> next;
    weak_ptr<Node> previous;
};

"weak_ptr" does not increase the reference count, so it can break the cycle.

Key Points

- Cyclic Reference means references form a cycle.
- It commonly happens with "shared_ptr".
- A cycle can cause a memory leak.
- "weak_ptr" can be used to break the cycle.
- "shared_ptr" owns the object.
- "weak_ptr" observes the object without owning it.

Remember

shared_ptr + shared_ptr → Cyclic Reference → Memory Leak

shared_ptr + weak_ptr → Cycle can be broken


### topic 12

Custom Deleters

Definition

A Custom Deleter is a user-defined cleanup function that tells a smart pointer how to destroy or release a resource.

Normally, smart pointers automatically clean up their resources.

When special cleanup is required, we can use a custom deleter.

Example

#include <iostream>
#include <memory>
using namespace std;

void myDeleter(int* p) {
    cout << "Custom cleanup" << endl;
    delete p;
}

int main() {
    shared_ptr<int> p(new int(10), myDeleter);

    cout << *p << endl;
}

How It Works

shared_ptr<int> p(new int(10), myDeleter);

Here:

- "new int(10)" creates an integer dynamically.
- "p" manages that memory.
- "myDeleter" is the custom cleanup function.
- When "p" is destroyed, "myDeleter" is called.

Real-Life Example

Normal cleaning → Normal cleaner

Special cleaning → Special cleaner

Similarly:

Normal resource → Normal deleter
Special resource → Custom deleter

Uses

Custom deleters can be useful for managing:

- Dynamic memory
- Files
- Sockets
- Other resources that require special cleanup

Key Points

- Custom Deleter provides a user-defined cleanup operation.
- It can be used with smart pointers.
- It is useful when normal destruction is not enough.
- The deleter is automatically called when the smart pointer needs to release the resource.

Remember

Custom Deleter = Custom cleanup function used by a smart pointer.


### topic 13

Memory Management

Definition

Memory Management is the process of allocating, using, and releasing memory while a program is running.

Basic Process

Memory needed
     ↓
Allocate memory
     ↓
Use memory
     ↓
Release memory

Real-Life Example

Think of memory like a room:

- Room kavali → Allocate memory
- Room lo things use cheyyadam → Use memory
- Work complete → Release memory

Memory Areas in C++

C++ program memory can be managed in different areas:

Memory
│
├── Stack
├── Heap
├── Static Storage
└── Dynamic Storage

Example of Dynamic Memory

int* p = new int(20);

delete p;

- "new" → allocates memory.
- "p" → stores the address.
- "delete" → releases the allocated memory.

Smart Pointer Example

#include <memory>
using namespace std;

unique_ptr<int> p = make_unique<int>(20);

Here, "unique_ptr" automatically releases the memory when it goes out of scope.

Why Memory Management Is Important

Proper memory management helps to:

- Avoid unnecessary memory usage.
- Release unused memory.
- Prevent memory leaks.
- Prevent dangling pointers.
- Make programs safer and more efficient.

Key Points

- Memory Management means managing program memory.
- Memory can be allocated, used, and released.
- "new" is used for dynamic memory allocation.
- "delete" releases dynamically allocated memory.
- Smart pointers can manage memory automatically.
- Poor memory management can cause memory leaks and dangling pointers.

Remember

Memory Management = Allocate + Use + Release memory correctly.


### topic 14

Stack

Definition

The Stack is a memory area used by a program to manage things such as local variables, function parameters, and function call information.

LIFO

Stack follows the LIFO (Last In, First Out) principle.

Plate 3  ← removed first
Plate 2
Plate 1  ← added first

The last item added is the first item removed.

Example

#include <iostream>
using namespace std;

void test() {
    int x = 10;
    int y = 20;
}

int main() {
    int a = 5;
    test();

    return 0;
}

Here:

- "a" is a local variable in "main()".
- "x" and "y" are local variables in "test()".
- When "test()" finishes, its local variables are automatically cleaned up.

Commonly Managed on the Stack

- Local variables
- Function parameters
- Function call information
- Temporary data

Important Example

int x = 10;

A local variable such as "x" generally has automatic storage duration and is commonly implemented using stack storage.

int* p = new int(10);

Here:

- "p" is a pointer variable.
- The dynamically allocated "int" has dynamic storage duration.
- The pointer and the object it points to are separate things.

Stack vs Heap

Stack| Heap
Commonly used for local/function data| Used for dynamic allocation
Automatically managed| Dynamically managed
Closely related to function calls and scope| Can outlive a function when properly managed
Usually fast| More flexible for dynamic memory

Key Points

- Stack is a memory area used during program execution.
- It follows LIFO.
- Local variables and function call information are commonly managed using stack storage.
- Local variables are automatically cleaned up when their lifetime ends.
- Stack and heap are different concepts.
- A pointer can be on the stack while the object it points to is in dynamic storage.

Remember

Stack = Memory commonly used for function calls and local/automatic data.


### topic 15

Heap

Definition

The Heap is commonly used to refer to the memory area used for dynamic memory allocation.

In C++, the more precise concept is dynamic storage duration.

Dynamic Memory Allocation

Dynamic memory is allocated while the program is running.

int* p = new int(10);

Here:

- "p" is a pointer.
- "new int(10)" dynamically creates an "int" object.
- The object has dynamic storage duration.

Memory Representation

Stack              Dynamic Storage
------             ----------------
p  ─────────────→       10

The pointer and the object it points to are separate things.

Releasing Dynamic Memory

With a raw pointer:

delete p;

After "delete", the dynamically allocated object is destroyed.

Smart Pointers

Modern C++ recommends smart pointers for managing dynamic memory.

#include <memory>
using namespace std;

auto p = make_unique<int>(10);

When "p" goes out of scope, "unique_ptr" automatically releases the managed object.

Stack vs Heap

Stack| Heap / Dynamic Storage
Commonly used for local/automatic data| Used for dynamically allocated objects
Automatically managed| Dynamically managed
Related to function calls and local variables| Objects can have lifetimes independent of a particular function
Usually fast| Flexible for dynamic allocation

Important Note

C++ does not require a specific physical memory area called a heap. The term is commonly used to describe dynamic allocation.

Key Points

- Heap commonly refers to dynamically allocated memory.
- Dynamic memory is allocated during program execution.
- "new" can allocate dynamic memory.
- "delete" releases memory allocated with "new".
- "make_unique()" and "make_shared()" are safer modern C++ approaches.
- Smart pointers automatically manage dynamically allocated objects.

Remember

Heap = Common term for memory used for dynamic allocation.


### topic 16

Static Storage

Definition

Static Storage Duration means an object exists for the entire lifetime of the program.

A variable with static storage duration is created/initialized before or during program execution and remains available until the program ends.

Example

#include <iostream>
using namespace std;

void counter() {
    static int count = 0;
    count++;

    cout << count << endl;
}

int main() {
    counter();
    counter();
    counter();

    return 0;
}

Output

1
2
3

Why Does This Happen?

Normally:

int count = 0;

A local variable is created when the function is called and its lifetime ends when the function exits.

But:

static int count = 0;

The variable retains its value between function calls.

1st call → count = 1
2nd call → count = 2
3rd call → count = 3

Lifetime

Program starts
      ↓
Static object exists
      ↓
Program runs
      ↓
Program ends
      ↓
Static object's lifetime ends

Important Point

Static storage duration does not mean only variables declared with the "static" keyword.

Global variables can also have static storage duration.

Static vs Automatic Storage

Static Storage| Automatic Storage
Exists for the program's lifetime| Exists for its block/function lifetime
Value can persist between function calls| Local value normally does not persist
Example: "static int count"| Example: "int count" inside a function

Key Points

- Static storage duration means an object exists for the entire program lifetime.
- A local "static" variable retains its value between function calls.
- Global variables generally have static storage duration.
- "static" keyword can give a local variable static storage duration.
- Storage duration describes an object's lifetime, not necessarily its exact physical memory location.

Remember

Static Storage = Object lifetime is associated with the entire program.


### topic 17

Automatic Storage

Definition

Automatic Storage Duration means an object's lifetime is automatically connected to the execution of its block or function.

The object is created when execution enters its scope and its lifetime ends when execution leaves that scope.

Example

#include <iostream>
using namespace std;

void test() {
    int x = 10;

    cout << x << endl;
}

int main() {
    test();

    return 0;
}

Here:

int x = 10;

"x" is a local variable with automatic storage duration.

test() starts
     ↓
x is created
     ↓
x is used
     ↓
test() ends
     ↓
x's lifetime ends

Block Example

{
    int a = 10;

    cout << a << endl;
}

"a" exists while execution is inside the block.

When the block ends, "a"'s lifetime ends.

Automatic vs Static

void test() {
    int a = 0;          // Automatic
    static int b = 0;  // Static
}

Each function call:

Automatic a → New lifetime
Static b    → Same object, value retained

Example

void test() {
    int a = 0;
    static int b = 0;

    a++;
    b++;

    cout << a << " " << b << endl;
}

Output:

1 1
1 2
1 3

Why?

- "a" is recreated for each function call.
- "b" retains its previous value between function calls.

Important Point

Automatic storage duration should not be confused with the stack.

Local automatic variables are commonly implemented using stack storage, but automatic storage duration describes the lifetime of an object, not a guaranteed physical memory location.

Key Points

- Automatic storage duration is connected to a block or function scope.
- Local variables commonly have automatic storage duration.
- The object is created when execution enters its scope.
- Its lifetime ends when execution leaves its scope.
- Automatic variables normally do not retain their value between separate function calls.
- Automatic storage duration is different from static storage duration.

Remember

Automatic Storage = Object lifetime is automatically tied to its scope/block execution.


### topic 18

Dynamic Storage

Definition

Dynamic Storage Duration means an object is created through dynamic allocation during program execution and can have a lifetime independent of the scope where it was created.

Dynamic Allocation

Using "new":

int* p = new int(10);

Here:

- "p" is a pointer.
- "new int(10)" dynamically creates an "int" object.
- The object has dynamic storage duration.

Memory Representation

Pointer                 Dynamic Object
  p  ─────────────────→    10

Releasing Dynamic Memory

With a raw pointer:

delete p;

The dynamically allocated object is destroyed and its storage is released.

Smart Pointers

Modern C++ provides smart pointers for safer management of dynamically allocated objects.

"unique_ptr"

#include <memory>
using namespace std;

auto p = make_unique<int>(10);

"unique_ptr" owns the dynamically allocated object and automatically destroys it when its lifetime ends.

"shared_ptr"

auto p = make_shared<int>(10);

"shared_ptr" manages shared ownership and automatically destroys the object when the last owning "shared_ptr" is gone.

Automatic vs Dynamic Storage

Automatic:
Scope begins → Object created
Scope ends   → Object lifetime ends

Dynamic:
Allocate → Object created
              ↓
          Object exists
              ↓
       Deallocate/Destroy

Important Point

Dynamic storage duration describes the lifetime of an object, not simply the name of a physical memory area.

Key Points

- Dynamic storage is used for objects allocated during program execution.
- "new" can create objects with dynamic storage duration.
- "delete" releases objects created with "new".
- "make_unique()" and "make_shared()" are modern C++ approaches.
- Smart pointers help manage dynamic objects automatically.
- Dynamic objects can have lifetimes independent of the local scope where they were created.

Remember

Dynamic Storage = Runtime lo dynamically create chesi, appropriate lifetime/deallocation tho manage chese object storage.


### topic 19

Allocation & Deallocation

Definition

Allocation means reserving memory for an object or data.

Deallocation means releasing that memory when it is no longer needed.

Basic Process

Need memory
    ↓
Allocation
    ↓
Use memory
    ↓
Work complete
    ↓
Deallocation

Allocation Using "new"

int* p = new int(10);

Here:

- "new" dynamically allocates storage.
- An "int" object with value "10" is created.
- "p" stores its address.

p ─────────→ 10

Deallocation Using "delete"

delete p;

"delete" destroys the dynamically allocated object and releases its storage.

Array Allocation

For dynamically allocating an array:

int* arr = new int[5];

For releasing it:

delete[] arr;

Matching Rules

new       → delete
new[]     → delete[]

Using the correct matching form is important.

Smart Pointers

Modern C++ uses smart pointers to manage dynamically allocated objects automatically.

#include <memory>
using namespace std;

auto p = make_unique<int>(10);

When "p" reaches the end of its lifetime, the managed object is automatically destroyed.

Memory Leak

If dynamically allocated memory is not released when needed, it can remain occupied and cause a memory leak.

Memory allocated
      ↓
Memory used
      ↓
No deallocation
      ↓
Memory remains occupied
      ↓
Memory Leak

Key Points

- Allocation means reserving memory.
- Deallocation means releasing memory.
- "new" performs dynamic allocation.
- "delete" releases a single dynamically allocated object.
- "new[]" allocates a dynamic array.
- "delete[]" releases a dynamic array.
- "new" must match "delete".
- "new[]" must match "delete[]".
- Smart pointers can automatically manage dynamic objects.
- Failing to release required memory can cause memory leaks.

Remember

Allocation = Memory reserve cheyyadam

Deallocation = Memory release cheyyadam

new   → delete
new[] → delete[]


### topic 20

Memory Leaks

Definition

A Memory Leak occurs when a program allocates memory but fails to release it after the memory is no longer needed.

Basic Idea

Memory allocated
      ↓
Memory used
      ↓
Memory not released
      ↓
Memory remains occupied
      ↓
Memory Leak

Example

int* p = new int(10);

Memory is dynamically allocated.

If we do not release it:

// delete p;  ← missing

the allocated memory can remain occupied.

Correct Way

int* p = new int(10);

cout << *p << endl;

delete p;
p = nullptr;

Here:

new    → Allocate
use    → Use memory
delete → Release

Smart Pointers

Modern C++ smart pointers help prevent memory leaks.

#include <memory>

auto p = std::make_unique<int>(10);

When "p" reaches the end of its lifetime, "unique_ptr" automatically destroys the managed object.

Manual "delete" is not required.

Why Memory Leaks Are a Problem

Repeated memory leaks can:

- Reduce available memory.
- Increase program memory usage.
- Cause problems in long-running programs.
- Eventually lead to memory exhaustion.

Real-Life Example

Imagine renting a room.

You stop using the room but never properly vacate it. The room remains occupied and cannot be used by someone else.

Similarly, leaked memory remains occupied even though the program no longer needs it.

Key Points

- Memory leak occurs when allocated memory is not properly released.
- Dynamic memory allocated with "new" should be properly released.
- "delete" releases a single object allocated with "new".
- Smart pointers can automatically manage memory.
- "unique_ptr" helps prevent many common memory leaks.
- Repeated memory leaks can cause memory exhaustion.

Remember

Memory Leak = Memory is allocated but not released when it is no longer needed.

new → use → delete   ✅

new → use → no delete ❌ Memory Leak


### topic 21

Dangling Pointers

Definition

A Dangling Pointer is a pointer that points to an object or memory whose lifetime has already ended or is no longer valid.

In simple words:

Pointer daggara address untundi, kani aa address lo valid object/memory undadu.

Example: "delete" After Pointer

int* p = new int(10);

delete p;

cout << *p;   // ❌ Dangerous

Before "delete":

p ─────→ [10]

After "delete":

p ─────→ [released memory]

"p" may still contain the old address, but the object has been destroyed.

Dereferencing "p" after "delete" causes undefined behavior.

Solution

Set the pointer to "nullptr" after deleting the object:

int* p = new int(10);

delete p;
p = nullptr;

Now:

p → nullptr

We can safely check it:

if (p != nullptr) {
    cout << *p;
}

Local Variable Example

int* getPointer() {
    int x = 10;

    return &x;   // ❌
}

When "getPointer()" finishes, the lifetime of local variable "x" ends.

The returned pointer can then refer to an object that no longer exists.

Therefore, it can become a dangling pointer.

Real-Life Example

Imagine you have an address written on a paper, but the house at that address has already been demolished.

Pointer → Old address
Memory  → No longer valid

The address exists, but the valid object does not.

Problems Caused

Using a dangling pointer can cause:

- Undefined behavior
- Incorrect results
- Program crashes
- Unexpected behavior

Key Points

- A dangling pointer refers to an object whose lifetime has ended or memory that is no longer valid.
- Dereferencing a dangling pointer is unsafe.
- A pointer can become dangling after "delete".
- A pointer can also become dangling when a local object goes out of scope.
- Setting a pointer to "nullptr" after "delete" helps avoid accidental use of that pointer.
- Smart pointers help reduce common lifetime-management errors.

Remember

Dangling Pointer = Pointer pointing to an object/memory that is no longer valid.


### topic 22

Ownership

Definition

Ownership means identifying who is responsible for managing and releasing a resource or object.

In simple words:

«“Ee resource ni evaru own chestunnaru?” → Ownership»

1. "unique_ptr" — Single Ownership

auto p = std::make_unique<int>(10);

"p" is the single owner of the object.

p ─────→ [10]

A "unique_ptr" cannot be copied:

auto p2 = p;   // ❌

But ownership can be transferred using "std::move":

auto p2 = std::move(p);   // ✅

After the move:

p2 ─────→ [10]
p  ─────→ nullptr

2. "shared_ptr" — Shared Ownership

auto p1 = std::make_shared<int>(10);
auto p2 = p1;

Both "p1" and "p2" own the same object.

p1 ──┐
     ├──→ [10]
p2 ──┘

The object is destroyed when the last owning "shared_ptr" is gone.

3. "weak_ptr" — No Ownership

auto p = std::make_shared<int>(10);
std::weak_ptr<int> w = p;

"weak_ptr" observes the object but does not own it.

p ─────→ [10]
w - - -→ [10]

A "weak_ptr" does not increase the "shared_ptr" reference count.

Ownership Comparison

Pointer| Ownership
"unique_ptr"| Single owner
"shared_ptr"| Multiple owners
"weak_ptr"| No ownership

Key Points

- Ownership means responsibility for managing a resource.
- "unique_ptr" provides single ownership.
- "shared_ptr" provides shared ownership.
- "weak_ptr" does not own the object.
- "unique_ptr" ownership can be transferred using "std::move".
- The last owning "shared_ptr" controls the destruction of the shared object.
- "weak_ptr" does not increase the reference count.

Remember

unique_ptr → One owner
shared_ptr → Many owners
weak_ptr   → No owner
