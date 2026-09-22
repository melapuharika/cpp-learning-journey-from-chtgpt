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
