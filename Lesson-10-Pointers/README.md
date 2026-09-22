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
