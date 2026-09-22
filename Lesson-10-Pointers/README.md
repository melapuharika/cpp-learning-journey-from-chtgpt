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
