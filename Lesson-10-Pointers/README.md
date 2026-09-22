### topics
Lesson 10 - Pointers

- Pointers
- Address
- Pointer
- Dereferencing
- NULL Pointer
- nullptr
- Pointer Arithmetic
- Pointer to Pointer
- Pointer to Array
- Array of Pointers
- Function Pointer
- Pointer to Object
- Pointer to Class Member
- this Pointer
- Const Pointer
- Pointer to Const
- Const Pointer to Const
- Dynamic Memory
- Stack Memory
- Heap Memory
- new
- delete
- new[]
- delete[]
- Memory Leak
- Dangling Pointer
- Wild Pointer
- Double Deletion


 ### topic 1 Pointers

Definition

A pointer is a variable that stores the memory address of another variable.

Syntax

data_type* pointer_name;

Example

int number = 100;
int* ptr = &number;

Meaning

- "number" → stores the value "100"
- "&number" → gives the address of "number"
- "ptr" → stores the address of "number"

Key Point

- Normal variable → stores a value
- Pointer → stores an address

Simple Definition

A pointer is a variable that stores the address of another variable.

### topic:2 Address

Definition

An address is the memory location where a variable is stored.

Address-of Operator ("&")

The "&" operator is used to find the memory address of a variable.

Example

int age = 20;

cout << age;   // Value
cout << &age;  // Address

Meaning

- "age" → stores the value "20"
- "&age" → gives the memory address of "age"

Key Point

"&" → Address-of operator

Simple Definition

An address is the location of a variable in computer memory.

### topic 3 Dereferencing

Definition

Dereferencing means accessing the value stored at the memory address held by a pointer.

Dereferencing Operator ("*")

The "*" operator is used to access the value stored at the address pointed to by a pointer.

Example

int age = 20;
int* ptr = &age;

cout << ptr;   // Address
cout << *ptr;  // Value

Meaning

- "ptr" → stores the address of "age"
- "*ptr" → gives the value stored at that address
- "&age" → gives the address of "age"

Key Point

- "&" → gets the address
- "*" → gets the value from the address

Simple Definition

Dereferencing a pointer means accessing the value using the address stored in the pointer.


### topic 4 NULL Pointer

Definition

A NULL pointer is a pointer that does not point to a valid memory location.

Example

int* ptr = NULL;

Here, "ptr" is not pointing to any valid memory location.

nullptr

In modern C++, "nullptr" is used to represent a pointer that points to nothing.

int* ptr = nullptr;

Important Point

A NULL pointer should not be dereferenced.

int* ptr = nullptr;

// Wrong
cout << *ptr;

Key Point

- NULL pointer → does not point to a valid memory location
- "nullptr" → modern C++ way to represent no pointer target

### topic 5 nullptr

Definition

"nullptr" is a special value used to indicate that a pointer does not point to any object or valid memory location.

Example

int* ptr = nullptr;

Here, "ptr" is not pointing to any valid memory location.

Example with Condition

int* ptr = nullptr;

if (ptr == nullptr) {
    cout << "Pointer is empty";
}

Important Point

A "nullptr" pointer should not be dereferenced.

int* ptr = nullptr;

// Wrong
cout << *ptr;

NULL vs nullptr

- "NULL" → older style
- "nullptr" → modern C++ way

Both indicate that the pointer does not point to a valid object.

Key Point

In modern C++, prefer "nullptr" instead of "NULL".

### topic:6 Pointer Arithmetic

Definition

Pointer arithmetic means performing arithmetic operations on pointers to move between memory locations, especially array elements.

Example

int arr[] = {10, 20, 30, 40};

int* ptr = arr;

Here, "ptr" points to the first element of the array.

Operations

ptr++;      // Move to the next element
ptr--;      // Move to the previous element
ptr + 2;    // Move 2 elements forward
ptr - 2;    // Move 2 elements backward

Example

int arr[] = {10, 20, 30};

int* ptr = arr;

cout << *(ptr + 2);

Output:

30

Key Point

Pointer arithmetic moves the pointer according to the size of the data type it points to.

Easy Trick

- "ptr++" → Next element
- "ptr--" → Previous element
- "ptr + n" → "n" elements forward
- "ptr - n" → "n" elements backward

### topic:7 Pointer to Pointer

Definition

A pointer to pointer is a pointer that stores the address of another pointer.

Syntax

data_type** pointer_name;

Example

int age = 20;

int* ptr = &age;
int** pptr = &ptr;

Meaning

- "age" → stores the value "20"
- "ptr" → stores the address of "age"
- "pptr" → stores the address of "ptr"
- "*ptr" → gives the value of "age"
- "**pptr" → gives the value of "age"

Example

cout << age;      // 20
cout << *ptr;     // 20
cout << **pptr;   // 20

Key Point

age  → Value
ptr  → Address of age
pptr → Address of ptr

### topic 8 Pointer to Array

Definition

A pointer to an array is a pointer that stores the address of an entire array.

Syntax

data_type (*pointer_name)[size];

Example

int arr[3] = {10, 20, 30};

int (*ptr)[3] = &arr;

Meaning

- "arr" → an array of 3 elements
- "&arr" → address of the entire array
- "ptr" → points to the entire array
- "(*ptr)[0]" → first element
- "(*ptr)[1]" → second element
- "(*ptr)[2]" → third element

Example

cout << (*ptr)[0];  // 10
cout << (*ptr)[1];  // 20
cout << (*ptr)[2];  // 30

Key Point

Parentheses in "int (*ptr)[3]" are important.

Simple Definition

A pointer to an array stores the address of an entire array.

### topic 9 Array of Pointers

Definition

An array of pointers is an array whose elements are pointers that store memory addresses.

Syntax

data_type* array_name[size];

Example

int a = 10;
int b = 20;
int c = 30;

int* ptr[3] = {&a, &b, &c};

Meaning

- "a", "b", "c" → store values
- "ptr[0]" → stores the address of "a"
- "ptr[1]" → stores the address of "b"
- "ptr[2]" → stores the address of "c"
- "*ptr[0]" → gives "10"
- "*ptr[1]" → gives "20"
- "*ptr[2]" → gives "30"

Example

cout << *ptr[0];  // 10
cout << *ptr[1];  // 20
cout << *ptr[2];  // 30

Key Point

An array of pointers stores multiple addresses in an array.

Simple Definition

An array of pointers is an array that contains multiple pointer variables.


### topic 10 Function Pointer

Definition

A function pointer is a pointer that stores the address of a function and can be used to call that function.

Syntax

return_type (*pointer_name)(parameters);

Example

void greet() {
    cout << "Hello!";
}

void (*ptr)() = greet;

Calling the Function

ptr();

Output:

Hello!

Meaning

- "greet" → function
- "ptr" → function pointer
- "ptr" stores the address of "greet"
- "ptr()" → calls the "greet" function

Key Point

A function pointer stores the address of a function and allows the function to be called through the pointer.


### topic 11 Pointer to Object

Definition

A pointer to object is a pointer that stores the address of an object and is used to access its members.

Example

class Student {
public:
    int age;
};

Student s;
Student* ptr = &s;

Meaning

- "s" → object
- "&s" → address of the object
- "ptr" → stores the address of the object
- "ptr->age" → accesses the object's member

Example

ptr->age = 20;

cout << ptr->age;

Output:

20

Member Access

Normal object:

s.age;

Pointer to object:

ptr->age;

Key Point

The "->" operator is used to access object members through a pointer.


### topic 12 Pointer to Class Member

Definition

A pointer to a class member is a pointer used to refer to a specific member of a class.

Example

class Student {
public:
    int age;
};

int Student::* ptr = &Student::age;

Meaning

- "Student" → class
- "age" → class member
- "ptr" → pointer to class member
- "&Student::age" → refers to the "age" member

Using Pointer to Class Member

Student s;

s.*ptr = 20;

cout << s.*ptr;

Output:

20

Important Operator

The ".*" operator is used to access a class member through a pointer to member.

Key Point

int Student::* ptr = &Student::age;

"ptr" refers to the "age" member of the "Student" class.


### topic 13 this Pointer

Definition

The "this" pointer is a pointer that stores the address of the current object.

Example

class Student {
public:
    int age;

    void setAge(int age) {
        this->age = age;
    }
};

Meaning

- "this" → points to the current object
- "this->age" → accesses the current object's "age"
- "age" → function parameter

Example

Student s;

s.setAge(20);

Here, "this" points to the object "s".

Key Point

"this" → current object

"this->member" → current object's member


### topic 14 Const Pointer

Definition

A const pointer is a pointer whose stored address cannot be changed after initialization.

Syntax

data_type* const pointer_name = &variable;

Example

int a = 10;
int b = 20;

int* const ptr = &a;

Allowed

The value pointed to by the pointer can be changed.

*ptr = 50;  // Allowed

Not Allowed

The pointer cannot be changed to point to another address.

ptr = &b;   // Not allowed

Key Point

- Pointer address → Cannot change
- Pointed value → Can change

Simple Definition

A const pointer is a pointer whose address remains fixed after initialization.


### topic 15 Pointer to Const

Definition

A pointer to const is a pointer through which the pointed value cannot be modified.

Syntax

const data_type* pointer_name;

Example

int a = 10;
int b = 20;

const int* ptr = &a;

Allowed

The pointer can point to another address.

ptr = &b;  // Allowed

The value can be read.

cout << *ptr;  // Allowed

Not Allowed

The value cannot be changed through the pointer.

*ptr = 30;  // Not allowed

Key Point

- Pointer address → Can change
- Pointed value → Cannot change through the pointer

Simple Definition

A pointer to const allows reading the value but does not allow modifying it through the pointer.


### topic 16 Const Pointer to Const

Definition

A const pointer to const is a pointer whose address and pointed value cannot be changed through the pointer.

Syntax

const data_type* const pointer_name = &variable;

Example

int a = 10;
int b = 20;

const int* const ptr = &a;

Not Allowed

The pointed value cannot be changed.

*ptr = 30;  // Not allowed

The pointer cannot point to another address.

ptr = &b;   // Not allowed

Allowed

The value can be read.

cout << *ptr;

Key Point

- Pointer address → Cannot change
- Pointed value → Cannot change
- Value reading → Allowed

Simple Definition

A const pointer to const does not allow changing the pointer address or the pointed value through the pointer.


### topic 17 Dynamic Memory

Definition

Dynamic memory is memory that is allocated and managed during program execution.

Dynamic Memory Allocation

Dynamic memory allocation allows us to allocate memory at runtime.

"new" Operator

The "new" operator is used to allocate memory dynamically.

Example

int* ptr = new int;

*ptr = 50;

cout << *ptr;

Output:

50

- "new int" → allocates memory for an integer
- "ptr" → stores the address of the allocated memory

"delete" Operator

The "delete" operator is used to release dynamically allocated memory.

delete ptr;

Key Point

- "new" → Allocates memory
- "delete" → Releases memory

Simple Definition

Dynamic memory allows memory to be allocated and released during program execution.


### topic 18 Stack Memory

Definition:
Stack memory is the memory used for local variables and function-related data. It is managed automatically by the program.

Example

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    cout << age;
    return 0;
}

Here, "age" is a local variable, so it is typically stored in stack memory.

Function Example

void test() {
    int x = 10;
}

- When "test()" starts, memory for "x" is created.
- When "test()" ends, the memory for "x" is automatically released.
- We don't need to use "delete".

Key Points

- Used for local variables.
- Memory is managed automatically.
- Memory is released when the variable's lifetime ends.
- Generally fast.
- No manual "delete" is required for automatic local variables.

Real-Life Example

Stack memory is like a temporary table.
We use it while working, and when the work is finished, the table is automatically cleared.

One-line:
Stack memory stores local variables and function-related data and is managed automatically.


### topic:19 Heap Memory

Definition:
Heap memory is the memory that is dynamically allocated during program execution. In C++, it is commonly managed using "new" and "delete".

Example

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 50;

    cout << *ptr;

    delete ptr;

    return 0;
}

Explanation

int* ptr = new int;

Creates memory for an "int" in the heap and stores its address in "ptr".

*ptr = 50;

Stores "50" in the allocated heap memory.

delete ptr;

Releases the allocated heap memory.

Key Points

- Memory is allocated dynamically.
- Created during program execution.
- Accessed using pointers.
- "new" is used to allocate memory.
- "delete" is used to release memory.
- Memory must be properly released after use.

Real-Life Example

Heap memory is like a room rented when needed.
We take the room when we need it and release it when our work is finished.

One-line:
Heap memory is dynamically allocated memory that is managed using "new" and "delete".


### topic 21 "delete" Operator

Definition:
"delete" is used to release a single block of dynamically allocated memory created using "new".

Syntax

delete pointer;

Example

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 50;

    cout << *ptr;

    delete ptr;

    return 0;
}

Explanation

int* ptr = new int;

Creates memory dynamically in the heap.

*ptr = 50;

Stores "50" in the allocated memory.

delete ptr;

Releases the memory allocated using "new".

Key Points

- "delete" releases dynamically allocated memory.
- It is used with "new".
- It is used for a single object.
- It helps prevent unnecessary memory usage.
- "new" and "delete" should be used as a matching pair.

Remember

new    → Allocate memory
delete → Release memory

One-line:
"delete" releases a single dynamically allocated memory block created using "new".

### topic 22 "new[]" Operator

Definition:
"new[]" is used to dynamically allocate memory for an array in the heap.

Syntax

pointer = new data_type[size];

Example

#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << arr[1];

    delete[] arr;

    return 0;
}

Explanation

int* arr = new int[3];

Creates memory for 3 integers in the heap.

arr[0] = 10;
arr[1] = 20;
arr[2] = 30;

Stores values in the dynamically allocated array.

delete[] arr;

Releases the entire array memory created using "new[]".

Key Points

- "new[]" dynamically allocates memory for an array.
- Memory is allocated in the heap.
- It returns the address of the first element.
- The matching operator "delete[]" is used to release the array memory.

Remember

new[]    → Allocate array memory
delete[] → Release array memory

One-line:
"new[]" is used to dynamically allocate memory for an array in the heap.

### topic 23 "delete[]" Operator

Definition:
"delete[]" is used to release the array memory dynamically allocated using "new[]".

Syntax

delete[] pointer;

Example

#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    delete[] arr;

    return 0;
}

Explanation

int* arr = new int[3];

Creates memory for 3 integers in the heap.

delete[] arr;

Releases the entire array memory.

Important Rule

new[]    → Allocate array memory
delete[] → Release array memory

Key Points

- "delete[]" releases dynamically allocated array memory.
- It is used with "new[]".
- It releases the entire allocated array.
- "new[]" and "delete[]" should be used as a matching pair.

One-line:
"delete[]" is used to release an array allocated using "new[]".

### topic:24 Memory Leak

Definition:
A memory leak occurs when dynamically allocated memory is not released after use, causing memory to be wasted.

Example

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 50;

    // Memory is not released ❌

    return 0;
}

Here, memory is allocated using "new", but "delete" is not used. The allocated memory cannot be properly reclaimed while the program is running.

Correct Way

int* ptr = new int;

*ptr = 50;

delete ptr;

Here, the allocated memory is released using "delete".

Array Example

int* arr = new int[5];

// Use the array

delete[] arr;

Key Points

- Memory leak happens when allocated memory is not released.
- It wastes available memory.
- It commonly occurs with dynamic memory allocation.
- Use "delete" for memory allocated with "new".
- Use "delete[]" for memory allocated with "new[]".

Real-Life Example

Taking a room and not vacating it after use is like a memory leak because the room remains unavailable for others.

One-line:
A memory leak occurs when dynamically allocated memory is not released after use.

### topic 25 Dangling Pointer

Definition:
A dangling pointer is a pointer that refers to memory that has already been released or is no longer valid.

Example

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 50;

    delete ptr;

    // ptr is now a dangling pointer

    return 0;
}

After "delete ptr", the allocated memory is released, but "ptr" may still contain the old memory address.

Problem

cout << *ptr;  // ❌ Wrong

Accessing the memory through a dangling pointer can cause undefined behavior.

How to Avoid It

int* ptr = new int;

*ptr = 50;

delete ptr;

ptr = nullptr;

After releasing the memory, setting the pointer to "nullptr" helps prevent accidental use of the old address.

Key Points

- A dangling pointer points to invalid or released memory.
- It can occur after "delete".
- Dereferencing it is unsafe.
- Setting the pointer to "nullptr" after releasing memory helps avoid accidental use.

Real-Life Example

A room has been vacated, but you still have its old address.
The old address is like a dangling pointer.

One-line:
A dangling pointer points to memory that is no longer valid.


### topic 26 Wild Pointer

Definition:
A wild pointer is an uninitialized pointer that does not contain a valid memory address.

Example

#include <iostream>
using namespace std;

int main() {
    int* ptr;   // Wild pointer

    // cout << *ptr;  // ❌ Dangerous

    return 0;
}

Here, "ptr" is not initialized with a valid address.

Correct Way

int x = 10;

int* ptr = &x;

cout << *ptr;

Here, "ptr" contains the valid address of "x".

If the pointer is not being used yet:

int* ptr = nullptr;

Key Points

- A wild pointer is an uninitialized pointer.
- It does not contain a valid address.
- Dereferencing a wild pointer is unsafe.
- Always initialize pointers before using them.
- Use "nullptr" when the pointer does not point to an object yet.

Real-Life Example

Giving someone an unknown or incorrect address and asking them to go there is like using a wild pointer.

One-line:
A wild pointer is an uninitialized pointer that does not point to a valid memory location.


### topic 27 Double Deletion

Definition:
Double deletion occurs when the same dynamically allocated memory is released more than once.

Example

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 50;

    delete ptr;

    // delete ptr;  // ❌ Double deletion

    return 0;
}

Explanation

delete ptr;

The allocated memory is released.

If we try to release the same memory again:

delete ptr;   // ❌

It causes undefined behavior.

Correct Way

int* ptr = new int;

*ptr = 50;

delete ptr;

ptr = nullptr;

After setting the pointer to "nullptr", it no longer contains the old memory address.

delete ptr;   // Safe: delete nullptr does nothing

Key Points

- Double deletion means releasing the same memory more than once.
- It can cause undefined behavior.
- It commonly happens when "delete" is called twice on the same pointer.
- Set the pointer to "nullptr" after "delete" to help prevent accidental repeated deletion.

One-line:
Double deletion means trying to release the same dynamically allocated memory more than once.
