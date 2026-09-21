### topics Lesson 9 — Arrays and Strings

Part 1: Arrays

1. Array
2. One-Dimensional Array (1D Array)
3. Two-Dimensional Array (2D Array)
4. Multidimensional Array
5. Array Initialization
6. Passing Arrays to Functions
7. Array of Objects
8. Array of Pointers
9. Pointer to Array
10. Array vs Pointer

---

Part 2: Strings

C-Style Strings

11. Character Array
12. "strlen()"
13. "strcpy()"
14. "strcmp()"
15. "strcat()"

"std::string"

16. "std::string" Creation
17. String Input and Output
18. "length()"
19. "size()"
20. "append()"
21. "insert()"
22. "erase()"
23. "replace()"
24. "substr()"
25. "find()"
26. "compare()"
27. "c_str()"

Modern C++ Strings

28. Modern Strings
29. "std::string_view"

### topic :1 Lesson 9 — Arrays and Strings

1. Array

Definition

An Array is a collection of multiple values of the same data type stored under a single name.

Example

int marks[5] = {80, 90, 75, 88, 95};

Here:

- "int" → Data type
- "marks" → Array name
- "[5]" → Array size
- "80, 90, 75, 88, 95" → Array elements

Array Structure

Value → 80   90   75   88   95
Index →  0    1    2    3    4

Important: Index

In C++, an array index starts from 0.

marks[0]  // 80
marks[1]  // 90
marks[2]  // 75
marks[3]  // 88
marks[4]  // 95

Syntax

dataType arrayName[size];

Example:

int numbers[5];

Initialization

int numbers[5] = {10, 20, 30, 40, 50};

The size can also be automatically calculated:

int numbers[] = {10, 20, 30, 40, 50};

Accessing an Element

cout << numbers[2];

Output:

30

Array with Loop

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {80, 90, 75, 88, 95};

    for(int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}

Output:

80
90
75
88
95

Why Use Arrays?

Arrays are useful when we need to store many values of the same data type.

Example:

int marks[100];

This can store marks of 100 students.

Important Points

- An array stores multiple values.
- All elements normally have the same data type.
- Elements are stored using a single array name.
- Each element is accessed using an index.
- Array indexing starts from "0".
- Array size represents the number of elements it can store.

Memory Trick

Array = One Name + Many Same-Type Values + Index


### topic :2 1D Array

What is an Array?

An array is a collection of multiple values of the same data type stored under a single variable name.

Example

int marks[5] = {80, 75, 90, 85, 95};

Here:

- "int" → Data type
- "marks" → Array name
- "[5]" → Number of elements
- "{80, 75, 90, 85, 95}" → Array values

---

Array Index

Array indexing always starts from 0.

Index:   0   1   2   3   4
Value:  80  75  90  85  95

For example:

cout << marks[0];  // 80
cout << marks[2];  // 90
cout << marks[4];  // 95

---

Array Declaration

We can declare an array like this:

int numbers[5];

This creates an integer array that can store 5 values.

---

Array Initialization

We can declare and initialize an array at the same time:

int numbers[5] = {10, 20, 30, 40, 50};

---

Accessing Array Elements

We can access an element using its index.

int numbers[5] = {10, 20, 30, 40, 50};

cout << numbers[0];
cout << numbers[1];
cout << numbers[4];

Output:

10
20
50

---

Using Loop with Array

A "for" loop can be used to access all elements of an array.

int numbers[5] = {10, 20, 30, 40, 50};

for(int i = 0; i < 5; i++)
{
    cout << numbers[i] << " ";
}

Output:

10 20 30 40 50

---

Real-Life Example

Suppose we want to store the marks of 5 students.

Without an array:

int mark1, mark2, mark3, mark4, mark5;

Using an array:

int marks[5] = {85, 90, 78, 88, 95};

The array makes it easier to store and access multiple values.

---

Important Points

- An array stores multiple values of the same data type.
- Array indexing starts from 0.
- The last index is size - 1.
- Array elements are accessed using their index.
- A "for" loop can be used to traverse an array.
- A normal C++ array has a fixed size.

Syntax

data_type array_name[size];

Example:

int numbers[5];


### topic:3 2D Array

What is a 2D Array?

A 2D Array is an array that stores elements in rows and columns.

It looks like a table or matrix.

Example

10  20  30
40  50  60
70  80  90

Here:

- 3 Rows
- 3 Columns
- Total elements = 9

---

Syntax

data_type array_name[rows][columns];

Example

int numbers[3][3];

Here:

- "int" → Data type
- "numbers" → Array name
- First "[3]" → Number of rows
- Second "[3]" → Number of columns

---

2D Array Initialization

int numbers[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
};

The array looks like:

       Column
        0   1   2
      ┌───┬───┬───┐
Row 0 │10 │20 │30 │
      ├───┼───┼───┤
Row 1 │40 │50 │60 │
      ├───┼───┼───┤
Row 2 │70 │80 │90 │
      └───┴───┴───┘

---

Accessing Elements

We access a 2D array using:

array_name[row][column];

Example

cout << numbers[0][0];

Output:

10

cout << numbers[1][2];

Output:

60

Remember:

- First index → Row
- Second index → Column

---

Array Indexing

Indexing starts from 0.

For a "3 × 3" array:

Rows    → 0, 1, 2
Columns → 0, 1, 2

So the last element is:

numbers[2][2];

---

Printing a 2D Array

We use nested for loops to print all elements.

int numbers[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
};

for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++)
    {
        cout << numbers[i][j] << " ";
    }

    cout << endl;
}

Output

10 20 30
40 50 60
70 80 90

---

Why Nested Loops?

A 2D array has rows and columns.

So:

- Outer loop → handles rows
- Inner loop → handles columns

Outer loop
   ↓
Row 0 → 10 20 30
Row 1 → 40 50 60
Row 2 → 70 80 90
              ↑
         Inner loop

---

Real-Life Examples

2D arrays can be used to store:

- Student marks of multiple subjects
- Matrix values
- Seating arrangements
- Game boards
- Tables of numbers

Example: Student Marks

int marks[3][3] = {
    {80, 85, 90},
    {75, 88, 92},
    {90, 95, 89}
};

Here:

- 3 students → Rows
- 3 subjects → Columns

---

Important Points

- 2D Array stores data in rows and columns.
- It is also called a matrix.
- Indexing starts from "0".
- First index represents the row.
- Second index represents the column.
- Nested loops are commonly used with 2D arrays.
- A normal C++ 2D array has a fixed size.

Quick Difference

1D Array → One line
2D Array → Rows + Columns

1D Array

int a[5];

2D Array

int a[3][3];

### topic:4 Multidimensional Array

What is a Multidimensional Array?

A Multidimensional Array is an array with more than one dimension.

It is used to store data in multiple levels of rows, columns, layers, etc.

Types

1D → One dimension
2D → Two dimensions
3D → Three dimensions

---

1D Array

A 1D array stores elements in a single line.

int numbers[4] = {10, 20, 30, 40};

10  20  30  40

---

2D Array

A 2D array stores elements in rows and columns.

int numbers[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};

10  20  30
40  50  60

---

3D Array

A 3D array is a collection of multiple 2D arrays.

int numbers[2][2][3];

Here:

- First "2" → Number of layers
- Second "2" → Number of rows
- Third "3" → Number of columns

Total elements:

2 × 2 × 3 = 12

---

3D Array Initialization

int numbers[2][2][3] = {
    {
        {10, 20, 30},
        {40, 50, 60}
    },
    {
        {70, 80, 90},
        {100, 110, 120}
    }
};

The array contains 2 layers.

Layer 0

10  20  30
40  50  60

Layer 1

70   80   90
100  110  120

---

Accessing Elements

A 3D array uses three indexes:

array_name[layer][row][column];

Example:

cout << numbers[0][0][1];

Output:

20

Here:

- "0" → First layer
- "0" → First row
- "1" → Second column

---

Nested Loops

To access all elements of a 3D array, we use three nested loops.

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 2; j++)
    {
        for(int k = 0; k < 3; k++)
        {
            cout << numbers[i][j][k] << " ";
        }

        cout << endl;
    }

    cout << endl;
}

---

Easy Way to Remember

1D → Line
2D → Table
3D → Multiple Tables

Indexes:

1D → [i]

2D → [i][j]

3D → [i][j][k]

---

Real-Life Examples

Multidimensional arrays can be used for:

- 3D data
- Game boards
- Image and video data
- Scientific data
- Multiple tables of information
- Matrix-related calculations

---

Important Points

- A multidimensional array has more than one dimension.
- 2D arrays have rows and columns.
- 3D arrays have layers, rows, and columns.
- Each dimension has its own index.
- Array indexing starts from 0.
- Nested loops are commonly used to traverse multidimensional arrays.
- Normal C++ arrays have a fixed size.

Quick Comparison

Array| Structure| Example
1D| Line| "int a[5]"
2D| Rows + Columns| "int a[3][3]"
3D| Layers + Rows + Columns| "int a[2][3][4]"

Syntax

data_type array_name[size1][size2][size3];

Example:

int numbers[2][3][4];

### topic:5 Array Initialization

What is Array Initialization?

Array Initialization means assigning initial values to an array when it is created.

Example

int numbers[5] = {10, 20, 30, 40, 50};

Here, the array is created and initialized with 5 values.

Index:   0   1   2   3   4
Value:  10  20  30  40  50

---

1. Complete Initialization

All elements are initialized with values.

int numbers[5] = {10, 20, 30, 40, 50};

Output:

10 20 30 40 50

---

2. Partial Initialization

We can initialize only some elements.

The remaining elements are automatically initialized to "0".

int numbers[5] = {10, 20};

Values:

10 20 0 0 0

---

3. Initialization Without Specifying Size

We can omit the array size when initializing with values.

The compiler automatically determines the size.

int numbers[] = {10, 20, 30, 40};

Here, the array size is automatically "4".

---

4. Initialize All Elements to Zero

We can initialize all elements to "0".

int numbers[5] = {};

Values:

0 0 0 0 0

---

5. Character Array Initialization

A character array can be initialized with characters.

char letters[4] = {'A', 'B', 'C', 'D'};

Values:

A B C D

---

6. String Initialization

A character array can also store a string.

char name[] = "Harika";

C++ automatically adds a special null character "\0" at the end.

---

Declaration vs Initialization

Declaration

Creates an array without assigning initial values.

int numbers[5];

Initialization

Creates an array and assigns initial values.

int numbers[5] = {10, 20, 30, 40, 50};

---

Important Points

- Array initialization means assigning initial values to an array.
- Array indexing starts from "0".
- We can initialize all or only some elements.
- Unspecified elements become "0" when an initializer list is used.
- The array size can be automatically determined from the number of values.
- Character arrays can be initialized with characters or strings.

Quick Summary

Complete:
int a[3] = {10, 20, 30};

Partial:
int a[3] = {10};

Automatic Size:
int a[] = {10, 20, 30};

All Zero:
int a[3] = {};


### topic:5 Passing Arrays to Functions

What is Passing an Array to a Function?

Passing an array to a function means sending an array from one function to another function so that the function can access and process its elements.

---

Basic Syntax

return_type function_name(data_type arr[], int size)
{
    // Function body
}

The function call:

function_name(array_name, size);

---

Example

#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    display(numbers, 5);

    return 0;
}

Output

10 20 30 40 50

---

How It Works

In "main()":

int numbers[5] = {10, 20, 30, 40, 50};

An array is created.

Then:

display(numbers, 5);

The array and its size are passed to the function.

The function receives them using:

void display(int arr[], int size)

Here:

- "arr[]" → receives the array
- "size" → tells the function how many elements are in the array

---

Why Do We Pass the Size?

When an array is passed to a function, the function does not automatically know the number of elements in the array.

So, we usually pass the size separately.

display(numbers, 5);

Here:

- "numbers" → Array
- "5" → Array size

---

Example: Sum of Array Elements

#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int result = sumArray(numbers, 5);

    cout << result;

    return 0;
}

Output

150

---

Passing Array vs Passing Single Element

Passing the entire array

display(numbers, 5);

This passes the array to the function.

Passing a single element

display(numbers[0]);

This passes only one element.

For example:

numbers[0]

represents only:

10

---

Important Points

- Arrays can be passed to functions.
- We usually pass the array name as the argument.
- The array size is commonly passed separately.
- The function can access array elements using indexes.
- A function can read or modify the elements of the passed array.
- "arr[]" is commonly used in the function parameter for a 1D array.

Easy Flow

main()
   ↓
Create Array
   ↓
Pass Array + Size
   ↓
Function Receives Array
   ↓
Process Array Elements
   ↓
Return Result / Display Result

Quick Example

int numbers[3] = {10, 20, 30};

display(numbers, 3);

Function:

void display(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

One-Line Definition

Passing an array to a function means sending an array to a function so that it can access and process its elements.

### topic:7 Array of Objects

What is an Array of Objects?

An Array of Objects is an array used to store multiple objects of the same class.

Instead of creating separate objects, we can store multiple objects in a single array.

---

Example

Suppose we have a "Student" class:

class Student
{
public:
    string name;
    int age;
};

We can create an array of Student objects:

Student students[3];

Here:

- "Student" → Class name
- "students" → Array name
- "3" → Number of objects

---

Accessing Objects

Each object can be accessed using its index.

students[0] → First Student object
students[1] → Second Student object
students[2] → Third Student object

To access a data member:

students[0].name;
students[1].age;

---

Complete Example

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student students[3];

    students[0].name = "Harika";
    students[0].age = 20;

    students[1].name = "Anu";
    students[1].age = 21;

    students[2].name = "Ravi";
    students[2].age = 20;

    for(int i = 0; i < 3; i++)
    {
        cout << students[i].name << " ";
        cout << students[i].age << endl;
    }

    return 0;
}

Output

Harika 20
Anu 21
Ravi 20

---

Understanding "students[0].name"

students[0].name

It means:

students[0] → First Student object
.name       → Name of that object

Similarly:

students[1].age

means the age of the second Student object.

---

Real-Life Example

Suppose a college has 100 students.

Instead of creating:

Student s1;
Student s2;
Student s3;

and so on, we can use:

Student students[100];

This stores 100 Student objects in one array.

---

Normal Array vs Array of Objects

Normal Array

int marks[3] = {80, 90, 85};

Stores 3 integer values.

Array of Objects

Student students[3];

Stores 3 Student objects.

---

Important Points

- An array of objects stores multiple objects of the same class.
- All objects belong to the same class.
- Array indexing starts from "0".
- We use the dot "." operator to access object members.
- A "for" loop can be used to process all objects.
- Array of objects is useful for storing multiple records.

Syntax

class_name array_name[size];

Example

Student students[3];

One-Line Definition

Array of Objects is an array that stores multiple objects of the same class.


### topic:8 Array of Pointers

What is an Array of Pointers?

An Array of Pointers is an array in which each element is a pointer.

Instead of storing values directly, the array stores the addresses of other variables or objects.

---

Normal Array vs Array of Pointers

Normal Array

int numbers[3] = {10, 20, 30};

It stores values directly:

numbers[0] → 10
numbers[1] → 20
numbers[2] → 30

Array of Pointers

int* ptr[3];

It stores addresses:

ptr[0] → address of a variable
ptr[1] → address of a variable
ptr[2] → address of a variable

---

Syntax

data_type* array_name[size];

Example

int* ptr[3];

Here:

- "int" → Data type
- "*" → Pointer
- "ptr" → Array name
- "[3]" → Number of pointer elements

---

Basic Example

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptr[3] = {&a, &b, &c};

    cout << *ptr[0] << endl;
    cout << *ptr[1] << endl;
    cout << *ptr[2] << endl;

    return 0;
}

Output

10
20
30

---

Understanding the Example

int* ptr[3] = {&a, &b, &c};

Here:

ptr[0] → address of a → 10
ptr[1] → address of b → 20
ptr[2] → address of c → 30

"&" Operator

The "&" operator gives the address of a variable.

&a

means the address of "a".

"*" Operator

The "*" operator is used to access the value stored at an address.

*ptr[0]

gives the value stored at the address in "ptr[0]".

So:

ptr[0]  → address
*ptr[0] → value

---

Array of Pointers with Strings

An array of pointers can also be used to store strings.

const char* names[3] = {
    "Harika",
    "Anu",
    "Ravi"
};

We can access the strings using their indexes:

cout << names[0] << endl;
cout << names[1] << endl;
cout << names[2] << endl;

Output

Harika
Anu
Ravi

---

Why Use an Array of Pointers?

Array of pointers can be useful for:

- Storing addresses of multiple variables
- Working with strings
- Dynamic memory management
- Working with objects
- Creating collections of pointers

---

Important Points

- An array of pointers stores pointers as its elements.
- Each pointer stores an address.
- "&" is used to get the address of a variable.
- "*" is used to access the value through a pointer.
- Array indexing starts from "0".
- An array of pointers can also be used with strings and objects.

---

Easy Comparison

Normal Array
     ↓
Stores Values

Array of Pointers
     ↓
Stores Addresses

Normal Array

int arr[3] = {10, 20, 30};

Array of Pointers

int* ptr[3] = {&a, &b, &c};

One-Line Definition

An Array of Pointers is an array whose elements are pointers that store the addresses of other variables or objects.


### topic:9 Pointer to Array

What is a Pointer to Array?

A Pointer to Array is a pointer that stores the address of an entire array.

It is different from an Array of Pointers.

---

Syntax

data_type (*pointer_name)[size];

Example

int (*ptr)[3];

Here:

- "int" → Data type
- "(*ptr)" → "ptr" is a pointer
- "[3]" → The pointer points to an array of 3 integers

So:

ptr → an array of 3 integers

---

Basic Example

#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {10, 20, 30};

    int (*ptr)[3] = &numbers;

    cout << (*ptr)[0] << endl;
    cout << (*ptr)[1] << endl;
    cout << (*ptr)[2] << endl;

    return 0;
}

Output

10
20
30

---

Understanding "(*ptr)[0]"

Consider:

int (*ptr)[3] = &numbers;

Here:

*ptr

refers to the entire array.

Then:

(*ptr)[0]

accesses the first element of that array.

Similarly:

(*ptr)[1] → 20
(*ptr)[2] → 30

---

Pointer to Array with 2D Array

Pointer to Array is commonly used with 2D arrays.

Example:

int numbers[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};

We can create a pointer to an array of 3 integers:

int (*ptr)[3] = numbers;

Here, "ptr" points to a row containing 3 integers.

---

Accessing 2D Array Using Pointer to Array

#include <iostream>
using namespace std;

int main()
{
    int numbers[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int (*ptr)[3] = numbers;

    cout << ptr[0][0] << endl;
    cout << ptr[0][1] << endl;
    cout << ptr[1][0] << endl;
    cout << ptr[1][2] << endl;

    return 0;
}

Output

10
20
40
60

---

Array of Pointers vs Pointer to Array

Array of Pointers

int* ptr[3];

This means:

An array containing 3 pointers

Pointer to Array

int (*ptr)[3];

This means:

A pointer pointing to an array of 3 integers

---

Important Difference

Array of Pointers
       ↓
int* ptr[3];

3 pointer elements

Pointer to Array
       ↓
int (*ptr)[3];

1 pointer → array of 3 integers

The position of "*" and "[]" is important.

---

Important Points

- A pointer to an array stores the address of an entire array.
- Parentheses are important in the declaration.
- "int (*ptr)[3]" means pointer to an array of 3 integers.
- It is commonly used with 2D arrays.
- "(*ptr)[index]" can be used to access elements of a 1D array.
- It is different from an array of pointers.

Easy Trick to Remember

int* ptr[3];

→ Array of Pointers

int (*ptr)[3];

→ Pointer to Array

One-Line Definition

A Pointer to Array is a pointer that points to an entire array rather than a single element.


### topic:10 Array vs Pointer – C++ Notes

1. What is an Array?

An array is a collection of multiple values of the same data type stored under one variable name.

Syntax

dataType arrayName[size];

Example

int numbers[3] = {10, 20, 30};

Here:

numbers
   ↓
[10] [20] [30]
  0    1    2

- "numbers[0]" → "10"
- "numbers[1]" → "20"
- "numbers[2]" → "30"

Key Point

Array = stores multiple values.

---

2. What is a Pointer?

A pointer is a variable that stores the memory address of another variable.

Syntax

dataType* pointerName;

Example

int x = 10;

int* p = &x;

Here:

- "x" → stores "10"
- "&x" → gives the address of "x"
- "p" → stores the address of "x"
- "*p" → gives the value stored at that address

cout << p;   // address of x
cout << *p;  // 10

Key Point

Pointer = stores an address.

---

3. Array and Pointer Together

Example:

int arr[3] = {10, 20, 30};

int* p = arr;

Here:

arr
 ↓
[10] [20] [30]
 ↑
 p

"p" points to the first element of the array.

So:

cout << arr[0];  // 10
cout << *p;      // 10

Both give "10".

---

4. Accessing Array Using Pointer

#include <iostream>
using namespace std;

int main() {

    int arr[3] = {10, 20, 30};

    int* p = arr;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;

    return 0;
}

Output

10
20
30

Explanation

p       → arr[0] → 10
p + 1   → arr[1] → 20
p + 2   → arr[2] → 30

"*" is used to get the value from the address.

---

5. Important Difference

Array:

int arr[3] = {10, 20, 30};

Pointer:

int* p = arr;

Both are not the same.

- "arr" → Array
- "p" → Pointer

The array name can often behave like a pointer to its first element, but an array itself is not a pointer.

---

6. Pointer Can Be Changed

A pointer variable can be moved to another memory location.

int arr[3] = {10, 20, 30};

int* p = arr;

p++;

Now "p" points to the second element.

cout << *p;

Output:

20

But:

arr++;

is not allowed.

// ❌ Error

Because "arr" is an array name, not a normal pointer variable.

---

7. Array vs Pointer

Array| Pointer
Stores multiple values| Stores an address
Collection of same-type elements| Address-holding variable
Example: "int arr[3]"| Example: "int* p"
Access using "arr[index]"| Access using "*p"
Array name cannot be incremented| Pointer can be incremented
Size is part of the array type| Pointer itself does not represent the array size

---

8. Simple Real-Life Example

Think of an Array as a row of boxes:

[10] [20] [30]

Each box stores a value.

A Pointer is like an address note that tells us where a box is located.

Pointer
   ↓
[10]

So:

Array → Values

Pointer → Address

---

9. Important Symbols

Symbol| Meaning
"&"| Address-of operator
"*"| Dereference operator
"arr[i]"| Access array element
"int* p"| Declare pointer
"p + 1"| Move pointer to next element
"*p"| Get value from pointer's address

---

10. Easy Trick to Remember

«Array = Stores Values
Pointer = Stores Address»

Array
 ↓
[10] [20] [30]

Pointer
 ↓
Address → 10

Final Definition

Array: A collection of elements of the same data type stored under one name.

Pointer: A variable that stores the memory address of another variable.

