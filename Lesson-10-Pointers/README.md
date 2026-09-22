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

