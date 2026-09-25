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


### topic:11 Strings – C++ Notes

1. What is a String?

A string is a collection of characters used to store text such as names, words, and sentences.

Examples

"Harika"
"Hello"
"I love C++"

String = Collection of characters/text.

---

2. Character vs String

Character

A character stores a single character.

char grade = 'A';

Characters use single quotes.

String

A string stores multiple characters.

string name = "Harika";

Strings use double quotes.

'A'       → Character
"Harika"  → String

---

3. Creating a String

Modern C++ uses the "string" data type.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name = "Harika";

    cout << name;

    return 0;
}

Output

Harika

---

4. C-Style String

A string can also be created using a character array.

char name[] = "Harika";

Internally, it contains a null character "\0" at the end.

H  a  r  i  k  a  \0

"'\0'" is called the null character and marks the end of a C-style string.

---

5. String Input Using "cin"

string name;

cin >> name;

If the input is:

Harika

It reads "Harika".

Important

"cin >>" stops reading when it encounters a space.

If input is:

Harika Melapu

Only "Harika" is read.

---

6. String Input Using "getline()"

"getline()" is used to read a complete line, including spaces.

string name;

getline(cin, name);

Input:

Harika Melapu

Output:

Harika Melapu

Easy Trick

cin >>       → One word
getline()    → Complete line

---

7. String Indexing

Strings use indexes to access individual characters.

string name = "Harika";

H   a   r   i   k   a
0   1   2   3   4   5

Example:

cout << name[0];

Output:

H

cout << name[3];

Output:

i

Important

String indexing starts from 0.

---

8. Finding String Length

Use "length()" or "size()".

string name = "Harika";

cout << name.length();

Output:

6

Both can be used:

name.length();
name.size();

---

9. Combining Strings

Strings can be joined using the "+" operator.

string firstName = "Harika";
string lastName = "Melapu";

string fullName = firstName + " " + lastName;

cout << fullName;

Output

Harika Melapu

---

10. Comparing Strings

Strings can be compared using comparison operators.

string a = "Hello";
string b = "Hello";

if (a == b) {
    cout << "Same";
}

Output

Same

Common operators:

==  → Equal
!=  → Not equal
<   → Less than
>   → Greater than

---

11. Changing Characters

Individual characters can be changed using their index.

string name = "Harika";

name[0] = 'M';

cout << name;

Output

Marika

---

12. Traversing a String

A string can be traversed using a loop.

string name = "Harika";

for (int i = 0; i < name.length(); i++) {
    cout << name[i] << endl;
}

Output

H
a
r
i
k
a

---

13. Important String Concepts

Concept| Meaning
"string"| Stores text
"char"| Stores one character
"cin >>"| Reads one word
"getline()"| Reads a complete line
"str[index]"| Accesses a character
"length()"| Returns string length
"size()"| Returns string length
"+"| Combines strings
"=="| Compares strings
"\0"| Null character in C-style strings

---

14. Simple Example

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Your name is: " << name << endl;
    cout << "Length: " << name.length() << endl;

    return 0;
}

Example Output

Enter your name: Harika Melapu
Your name is: Harika Melapu
Length: 13

---

15. Easy Trick to Remember

char
 ↓
One character
'A'

string
 ↓
Multiple characters/text
"Harika"

char array
 ↓
C-style string
char name[] = "Harika";

Final Definition

«String is a sequence or collection of characters used to represent text.»

Most Important Points

- String indexing starts from "0".
- "cin >>" reads one word.
- "getline()" reads a complete line.
- "length()" and "size()" return the string length.
- "+" can combine strings.
- "string" is the convenient modern C++ way to work with text.
- C-style strings are stored using character arrays and end with "\0".


### topic 12 C-Style Strings – C++ Notes

1. What is a C-Style String?

A C-style string is a collection of characters stored in a "char" array and terminated by a special character called null character "\0".

Example

char name[] = "Harika";

Memory representation:

H   a   r   i   k   a   \0

Important

«C-style String = Character Array + "\0"»

---

2. Creating a C-Style String

Method 1: Using String Literal

char name[] = "Harika";

The compiler automatically adds "\0" at the end.

Method 2: Using Characters

char name[] = {'H', 'a', 'r', 'i', 'k', 'a', '\0'};

Here, we manually add the null character.

---

3. What is "\0"?

"\0" is called the null character.

It indicates the end of a C-style string.

Example:

char word[] = "Cat";

Stored as:

C   a   t   \0

There are 3 visible characters, but the array requires 4 spaces including "\0".

---

4. Character vs C-Style String

Character

char ch = 'A';

Stores only one character.

C-Style String

char name[] = "Harika";

Stores multiple characters and ends with "\0".

'A'       → Character
"Harika"  → C-style String

---

5. Accessing Characters

C-style strings are character arrays, so indexing can be used.

char name[] = "Harika";

cout << name[0];
cout << name[1];
cout << name[5];

Output

H
a
a

Index:

H   a   r   i   k   a   \0
0   1   2   3   4   5    6

---

6. Printing a C-Style String

char name[] = "Harika";

cout << name;

Output

Harika

"cout" prints characters until it reaches "\0".

---

7. C-Style String Input

Using "cin"

char name[20];

cin >> name;

This reads only one word.

For input:

Harika Melapu

Only:

Harika

is read.

---

Using "cin.getline()"

To read a complete line including spaces:

char name[50];

cin.getline(name, 50);

Input:

Harika Melapu

Output:

Harika Melapu

Easy Trick

cin >> name
      ↓
One word

cin.getline(name, size)
      ↓
Complete line

---

8. C-Style String Functions

C-style string functions are available through the "<cstring>" header.

#include <cstring>

Important functions:

- "strlen()"
- "strcpy()"
- "strcat()"
- "strcmp()"

---

9. "strlen()"

"strlen()" returns the length of a C-style string.

char name[] = "Harika";

cout << strlen(name);

Output

6

Important

"strlen()" does not count "\0".

---

10. "strcpy()"

"strcpy()" copies one C-style string into another.

Syntax

strcpy(destination, source);

Example

char source[] = "Hello";
char destination[20];

strcpy(destination, source);

cout << destination;

Output

Hello

---

11. "strcat()"

"strcat()" joins two C-style strings.

Syntax

strcat(destination, source);

Example

char first[20] = "Hello ";
char second[] = "World";

strcat(first, second);

cout << first;

Output

Hello World

---

12. "strcmp()"

"strcmp()" compares two C-style strings.

Example

char a[] = "Hello";
char b[] = "Hello";

if (strcmp(a, b) == 0) {
    cout << "Same";
}

Output

Same

Important

strcmp() == 0
      ↓
Strings are equal

---

13. C-Style String vs C++ String

C-Style String

char name[] = "Harika";

- Uses "char" array
- Ends with "\0"
- Uses functions like "strlen()", "strcpy()", "strcat()", "strcmp()"

C++ String

string name = "Harika";

- Uses the C++ "string" class
- Easier to use
- Provides many built-in member functions

---

14. Important Points

- C-style strings are stored in a "char" array.
- Every C-style string must end with "\0".
- "\0" represents the null character.
- String indexing starts from "0".
- "cin >>" reads one word.
- "cin.getline()" reads a complete line.
- "<cstring>" provides C-style string functions.
- "strlen()" → finds length.
- "strcpy()" → copies a string.
- "strcat()" → joins strings.
- "strcmp()" → compares strings.

---

15. Easy Trick to Remember

C-Style String
      ↓
   char array
      ↓
Characters + \0

strlen() → Length
strcpy() → Copy
strcat() → Join
strcmp() → Compare

Final Definition

«A C-style string is a sequence of characters stored in a character array and terminated by the null character "\0".»


### topic:13 Character Arrays – C++ Notes

1. What is a Character Array?

A character array is an array used to store multiple characters.

Syntax

char arrayName[size];

Example

char letters[3] = {'A', 'B', 'C'};

Representation:

[ A ] [ B ] [ C ]
  0     1     2

Key Point

«Character Array = Array of "char" values»

---

2. Character vs Character Array

Character

char ch = 'A';

Stores only one character.

Character Array

char letters[3] = {'A', 'B', 'C'};

Stores multiple characters.

'A'          → One character

{'A','B','C'} → Character array

---

3. Character Array as a String

A character array can be used to store a C-style string.

char name[] = "Harika";

The compiler automatically adds "\0" at the end.

Memory representation:

[H] [a] [r] [i] [k] [a] [\0]
 0   1   2   3   4   5    6

Here, "\0" is the null character.

---

4. Null Character "\0"

The null character marks the end of a C-style string.

Example:

char word[] = "Cat";

Stored as:

[C] [a] [t] [\0]

There are 3 visible characters, but 4 positions are required including "\0".

---

5. Character Array Without "\0"

char letters[3] = {'A', 'B', 'C'};

This is a character array, but it is not a C-style string because there is no "\0".

To create a C-style string manually:

char word[4] = {'C', 'a', 't', '\0'};

Now it contains:

C a t \0

---

6. Character Array Indexing

Character arrays use indexes starting from "0".

char name[] = "Harika";

cout << name[0];
cout << name[2];
cout << name[5];

Output

H
r
a

Representation:

H   a   r   i   k   a   \0
0   1   2   3   4   5    6

---

7. Printing a Character Array

char name[] = "Harika";

cout << name;

Output

Harika

"cout" prints characters until it reaches "\0".

---

8. Traversing a Character Array

A character array can be traversed using a loop.

char name[] = "Harika";

for(int i = 0; name[i] != '\0'; i++) {
    cout << name[i];
}

Output

Harika

The loop stops when it reaches "\0".

---

9. Character Array Size

char name[10] = "Harika";

The array has a capacity of "10".

The string uses:

H a r i k a \0

So 7 positions are used and the remaining positions are available.

Important

char name[6] = "Harika";

This is not enough for a C-style string because:

H a r i k a \0

requires 7 positions.

---

10. Character Array Input

Using "cin"

char name[20];

cin >> name;

This reads one word.

Using "cin.getline()"

char name[50];

cin.getline(name, 50);

This can read a complete line including spaces.

---

11. Character Array vs C-Style String

Character Array

char letters[3] = {'A', 'B', 'C'};

It may contain characters without "\0".

C-Style String

char name[] = "Harika";

It is a character array terminated by "\0".

Important Statement

«Every C-style string is a character array, but every character array is not necessarily a C-style string.»

---

12. Character Array vs String

Character Array

char name[] = "Harika";

C++ String

string name = "Harika";

The first uses a "char" array, while the second uses the C++ "string" class.

---

13. Easy Comparison

Character| Character Array| C-Style String
One character| Multiple characters| Multiple characters ending with "\0"
"char ch"| "char arr[]"| "char name[] = "Harika""
Uses "' '"| Uses multiple "char" values| Uses characters + "\0"

---

14. Easy Trick to Remember

char ch = 'A';
        ↓
One Character

char letters[3] = {'A','B','C'};
        ↓
Character Array

char name[] = "Harika";
        ↓
Character Array + \0
        ↓
C-Style String

Final Definition

«A character array is an array of characters used to store multiple "char" values.»

Most Important Points

- Character array uses the "char" data type.
- Array indexing starts from "0".
- A C-style string is a character array ending with "\0".
- "\0" represents the null character.
- "cin >>" reads one word.
- "cin.getline()" reads a complete line.
- Character array and C++ "string" are different.

  ### topic:14 strlen() – C++ Notes

1. What is strlen()?

"strlen()" stands for String Length.

It is used to find the number of characters in a C-style string.

Syntax

strlen(string);

---

2. Header File

To use "strlen()", include:

#include <cstring>

---

3. Example

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[] = "Harika";

    cout << strlen(name);

    return 0;
}

Output

6

---

4. How Does strlen() Count?

H   a   r   i   k   a   \0
1   2   3   4   5   6

"strlen()" counts only the actual characters.

It does NOT count "\0" (null character).

---

5. More Examples

Example 1

char word[] = "Hello";

cout << strlen(word);

Output:

5

Example 2

char word[] = "Computer";

cout << strlen(word);

Output:

8

---

6. Important Points

- "strlen()" means String Length.
- It is available in the "<cstring>" header file.
- It counts characters in a C-style string.
- It does not count the null character "\0".
- The string must be properly terminated with "\0".
- Indexing and length are different:
  - ""Harika"" → length = "6"
  - Last character index = "5"

---

7. Easy Trick

strlen()
   ↓
String Length
   ↓
Number of characters
   ↓
Does NOT count \0

Final Definition

«"strlen()" is a C++ function used to find the number of characters in a C-style string, excluding the null character "\0".»


### topic:15 strcpy() – C++ Notes

1. What is strcpy()?

"strcpy()" stands for String Copy.

It is used to copy one C-style string from a source character array to a destination character array.

Header File

#include <cstring>

Syntax

strcpy(destination, source);

- Destination → ekkadiki copy cheyyali
- Source → ekkadi nunchi copy cheyyali

---

2. Simple Example

char source[] = "Hello";
char destination[20];

strcpy(destination, source);

Before copying:

source      → "Hello"
destination → empty

After copying:

source      → "Hello"
destination → "Hello"

---

3. Complete Program

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char source[] = "Hello";
    char destination[20];

    strcpy(destination, source);

    cout << destination;

    return 0;
}

Output

Hello

---

4. How Does strcpy() Work?

Suppose:

char source[] = "Cat";
char destination[10];

strcpy(destination, source);

Source:

[C] [a] [t] [\0]

After copying:

Destination:

[C] [a] [t] [\0]

So, "strcpy()" copies the characters and the null character "\0".

---

5. Source and Destination

Remember this order:

strcpy(destination, source);

Easy Trick

Source → From where?
Destination → Where to?

So:

SOURCE → DESTINATION
         ↓
strcpy(destination, source)

---

6. Destination Size

Destination array must have enough space to store the copied string including "\0".

Example:

char source[] = "Hello";
char destination[6];

strcpy(destination, source);

This needs 6 positions:

H  e  l  l  o  \0
1  2  3  4  5   6

---

7. Why Can't We Use "="?

For character arrays, this is not valid:

char source[] = "Hello";
char destination[20];

destination = source;   // ❌

Instead:

strcpy(destination, source);   // ✅

---

8. strlen() vs strcpy()

Function| Purpose
"strlen()"| Counts characters
"strcpy()"| Copies a string

Example:

strlen("Hello");

Output:

5

Whereas:

strcpy(destination, source);

copies the string.

---

9. Important Points

- "strcpy()" means String Copy.
- It is available in "<cstring>".
- It works with C-style strings.
- Syntax: "strcpy(destination, source);"
- Destination comes first.
- Source comes second.
- It copies the "\0" null character also.
- Destination must have enough space.
- "strcpy()" copies the source string; it does not simply count it.

---

Easy Trick 🧠

strlen() → LENGTH → Count

strcpy() → COPY → Copy

Final Definition

«"strcpy()" is a C++ function used to copy a C-style string from a source character array to a destination character array.»


### topic:16 strcmp() – C++ Notes

1. What is strcmp()?

"strcmp()" stands for String Compare.

It is used to compare two C-style strings character by character.

Header File

#include <cstring>

Syntax

strcmp(string1, string2);

---

2. Simple Example

char a[] = "Hello";
char b[] = "Hello";

cout << strcmp(a, b);

Output

0

Why?

Because both strings are exactly the same.

"Hello" == "Hello"

---

3. Meaning of Return Value

The most important thing to remember:

strcmp() == 0
      ↓
Strings are SAME

If the result is not 0, the strings are different.

0       → Same
Non-zero → Different

For basic string-equality checks, we mainly use:

if(strcmp(a, b) == 0)

---

4. Example – Comparing Strings

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char a[] = "Hello";
    char b[] = "Hello";

    if(strcmp(a, b) == 0) {
        cout << "Both strings are same";
    }
    else {
        cout << "Strings are different";
    }

    return 0;
}

Output

Both strings are same

---

5. Different Strings

char a[] = "Hello";
char b[] = "Hi";

if(strcmp(a, b) == 0) {
    cout << "Same";
}
else {
    cout << "Different";
}

Output

Different

Because:

"Hello" ≠ "Hi"

---

6. How Does strcmp() Compare?

"strcmp()" compares strings character by character.

Example:

"CAT"
"CAB"

It compares:

C = C  → Same
A = A  → Same
T ≠ B  → Different

Therefore, the strings are different.

---

7. Real-Life Example

Suppose a login system has:

Entered password → "abc123"
Saved password   → "abc123"

We can compare them using:

if(strcmp(entered, saved) == 0) {
    cout << "Password Correct";
}

If both are same, the condition becomes true.

---

8. Important Points

- "strcmp()" means String Compare.
- It is available in the "<cstring>" header file.
- It compares two C-style strings.
- It compares strings character by character.
- "strcmp(a, b) == 0" means both strings are equal.
- A non-zero result means the strings are different.
- It is commonly used with "if" conditions.

---

9. strlen(), strcpy(), strcmp()

Function| Purpose
"strlen()"| Finds string length
"strcpy()"| Copies a string
"strcmp()"| Compares two strings

Easy Trick 🧠

strlen() → LENGTH → Count

strcpy() → COPY → Copy

strcmp() → COMPARE → Compare

Final Definition

«"strcmp()" is a C++ function used to compare two C-style strings character by character. It returns 0 when both strings are equal.»


### topic:17 strcat() – String Concatenation

1. What is strcat()?

"strcat()" stands for String Concatenation.

It is used to join two C-style strings into one string.

👉 Simple ga: "strcat()" = Join / Combine two strings

---

2. Header File

"strcat()" use cheyyadaniki "<cstring>" header file include cheyyali.

#include <cstring>

---

3. Syntax

strcat(destination, source);

- destination → first string
- source → second string
- Source string destination string ki append avutundi.

---

4. Example

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[20] = "Hello";
    char second[] = "World";

    strcat(first, second);

    cout << first;

    return 0;
}

Output

HelloWorld

---

5. How strcat() Works

Before "strcat()":

first  = "Hello"
second = "World"

After:

strcat(first, second);

Now:

first = "HelloWorld"

"second" remains:

World

---

6. Important Point

Destination array ki enough space undali.

Correct:

char first[20] = "Hello";
char second[] = "World";

strcat(first, second);

Because ""HelloWorld"" store cheyyadaniki enough space undi.

⚠️ Destination size takkuva unte memory problems occur avvachu.

---

7. strcat() vs strcpy()

strcpy()

One string ni another string ki copy chestundi.

strcpy(first, second);

"first" lo unna old content replace avutundi.

strcat()

Second string ni first string end ki add chestundi.

strcat(first, second);

Easy Difference

strcpy() → Copy / Replace
strcat() → Join / Add at end

---

8. Real-Life Example

Suppose:

First Name = "Harika"
Last Name  = "Melapu"

Both ni join cheyyali ante:

char first[30] = "Harika ";
char last[] = "Melapu";

strcat(first, last);

cout << first;

Output

Harika Melapu

---

9. Important Points

- "strcat()" means String Concatenation.
- It joins two C-style strings.
- Header file: "<cstring>"
- Syntax:

strcat(destination, source);

- Destination first, source second.
- Source string destination ki append avutundi.
- Destination array lo enough memory undali.
- "\0" null character strings end ni indicate chestundi.

---

10. Easy Trick

🧠 strcat → "cat" → concatenate → join

strcpy() → Copy
strlen() → Length
strcmp() → Compare
strcat() → Join


### topic:18 std::string – C++ Notes

1. What is std::string?

"std::string" is a C++ Standard Library class used to store and work with text or a sequence of characters.

Example:

std::string name = "Harika";

Simple ga:

std::string → Text/String ni store cheyyadaniki

---

2. Header File

"std::string" use cheyyadaniki "<string>" header file include cheyyali.

#include <string>

Example:

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    std::cout << name;

    return 0;
}

Output

Harika

---

3. Why std::string?

C-style string:

char name[] = "Harika";

Modern C++:

std::string name = "Harika";

"std::string" tho strings ni easy ga handle cheyyachu.

---

4. What is std::?

"std::" means Standard Namespace.

"string" is part of the C++ Standard Library.

So:

std::string name = "Harika";

Here:

std   → Standard namespace
string → String class

---

5. using namespace std

Instead of writing:

std::string name = "Harika";
std::cout << name;

We can write:

using namespace std;

string name = "Harika";
cout << name;

Complete example:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Harika";

    cout << name;

    return 0;
}

---

6. Declaration

Syntax:

std::string variableName;

Example:

std::string name;

Initially, it contains an empty string.

---

7. Initialization

We can directly give a value:

std::string name = "Harika";

or:

std::string name("Harika");

or:

std::string name{"Harika"};

All three create a string containing ""Harika"".

---

8. Taking String Input

Using cin

std::string name;

std::cin >> name;

"cin" reads only one word.

If input is:

Harika

It works.

But if input is:

Harika Melapu

Only "Harika" is read.

---

9. Using getline()

"getline()" is used to read a complete line, including spaces.

std::string name;

std::getline(std::cin, name);

Input:

Harika Melapu

Output:

Harika Melapu

---

10. Accessing Characters

String lo each character ki index untundi.

Index always starts from "0".

std::string name = "Harika";

Memory/index idea:

H  a  r  i  k  a
0  1  2  3  4  5

Access:

std::cout << name[0];

Output:

H

Example:

std::cout << name[2];

Output:

r

---

11. Changing Characters

"std::string" characters can be modified using indexing.

std::string name = "Harika";

name[0] = 'M';

std::cout << name;

Output:

Marika

---

12. Finding String Length

Use:

name.length();

or:

name.size();

Example:

std::string name = "Harika";

std::cout << name.length();

Output:

6

Both "length()" and "size()" return the number of characters.

---

13. Joining Strings

Strings can be joined using "+".

std::string first = "Hello ";
std::string second = "World";

std::string result = first + second;

std::cout << result;

Output:

Hello World

---

14. Comparing Strings

We can use comparison operators.

std::string a = "Hello";
std::string b = "Hello";

if (a == b) {
    std::cout << "Strings are equal";
}

Output:

Strings are equal

Common operators:

==  → Equal
!=  → Not equal
<   → Less than
>   → Greater than

---

15. Traversing a String

We can use a "for" loop to access every character.

std::string name = "Harika";

for (int i = 0; i < name.length(); i++) {
    std::cout << name[i] << " ";
}

Output:

H a r i k a

---

16. Important std::string Functions

Some commonly used functions:

length()   → Finds length
size()     → Finds length
empty()    → Checks whether string is empty
append()   → Adds another string
substr()   → Gets part of a string
find()     → Searches for a character/string
replace()  → Replaces part of a string
erase()    → Removes characters
insert()   → Inserts characters

---

17. std::string vs C-Style String

std::string| C-style string
Modern C++| Traditional C/C++
"std::string name"| "char name[]"
Easy to use| Requires more care
Has many built-in functions| Uses "<cstring>" functions
Can easily grow/shrink| Fixed-size character array
No need to manually manage "\0"| Uses "\0" as terminator

---

18. Complete Example

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Harika";
    string lastName = "Melapu";

    string fullName = firstName + " " + lastName;

    cout << "Name: " << fullName << endl;
    cout << "Length: " << fullName.length() << endl;
    cout << "First character: " << fullName[0] << endl;

    return 0;
}

Output

Name: Harika Melapu
Length: 12
First character: H

---

19. Important Points

- "std::string" is used to store text.
- It belongs to the C++ Standard Library.
- Header file: "<string>"
- "std::" refers to the standard namespace.
- Index starts from "0".
- "length()" and "size()" give the string length.
- "+" can be used to join strings.
- "==" can be used to compare strings.
- "getline()" can read strings containing spaces.
- "std::string" is easier to use than C-style strings.

---

20. Easy Trick

Remember:

std::string → Modern C++ String

length() → Length
size()   → Size/Length
+        → Join
==       → Compare
[]       → Access Character
getline  → Read Complete Line


### topic:19 std::string Creation

1. What is std::string?

"std::string" is used to create a string variable and store text in C++.

Example:

std::string name = "Harika";

Here:

std::string → String/Text type
name        → Variable name
=           → Assigns a value
"Harika"    → String value

---

2. Creating an Empty String

We can create a string without giving any value.

std::string name;

Now "name" is an empty string.

name → ""

---

3. Creating a String with a Value

We can create a string and give a value at the same time.

std::string name = "Harika";

Now:

name → "Harika"

---

4. Different Ways to Create a String

Method 1 – Assignment Initialization

std::string name = "Harika";

Method 2 – Constructor Initialization

std::string name("Harika");

Method 3 – Brace Initialization

std::string name{"Harika"};

All three create a string containing ""Harika"".

---

5. Creating String from User Input

First create an empty string:

std::string name;

Then take input:

std::cin >> name;

If the user enters:

Harika

Then:

name → "Harika"

---

6. Creating String for a Full Line

"std::cin >>" reads only one word.

For a complete line containing spaces, use "getline()".

std::string name;

std::getline(std::cin, name);

Input:

Harika Melapu

Stored value:

name → "Harika Melapu"

---

7. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    std::cout << name;

    return 0;
}

Output

Harika

---

8. Important Points

- "std::string" is used to store text.
- A string variable can be created empty or with a value.
- The most common syntax is:

std::string variableName = "value";

- "std::cin >> name" reads one word.
- "std::getline(std::cin, name)" reads a complete line.
- "<string>" header file is used for "std::string".

---

9. Easy Trick

Think of a string variable as a box.

std::string name = "Harika";

std::string → Box type
name        → Box name
"Harika"    → Value inside the box

Remember:

std::string name;              → Empty string

std::string name = "Harika";  → String with value

std::string name("Harika");   → Constructor style

std::string name{"Harika"};   → Brace style


### topic:20 std::string Input and Output

1. What is Input?

Input means taking information from the user.

Example:

Enter your name: Harika

Here, "Harika" is the input given by the user.

---

2. What is Output?

Output means displaying information on the screen.

Example:

std::cout << "Hello Harika";

Output:

Hello Harika

---

3. std::cin – Input

"std::cin" is used to take input from the keyboard.

Syntax

std::cin >> variable;

Example

std::string name;

std::cin >> name;

If the user enters:

Harika

Then:

name = "Harika"

---

4. std::cout – Output

"std::cout" is used to display information on the screen.

Syntax

std::cout << variable;

Example

std::string name = "Harika";

std::cout << name;

Output:

Harika

---

5. Complete Input and Output Example

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello " << name;

    return 0;
}

Output

Enter your name: Harika
Hello Harika

---

6. "cin >>" with std::string

"std::cin >>" reads input only until a space.

Example:

std::string name;

std::cin >> name;

Input:

Harika Melapu

Stored value:

Harika

Because "cin >>" stops reading when it finds a space.

---

7. getline()

"getline()" is used to read a complete line, including spaces.

Syntax

std::getline(std::cin, variable);

Example

std::string name;

std::getline(std::cin, name);

Input:

Harika Melapu

Stored value:

Harika Melapu

---

8. cin vs getline()

Method| What it reads
"std::cin >> name"| One word
"std::getline(std::cin, name)"| Complete line

Example input:

Harika Melapu

cin >> name
→ "Harika"

getline(cin, name)
→ "Harika Melapu"

---

9. Complete Example Using getline()

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "Your name is: " << name;

    return 0;
}

Output

Enter your full name: Harika Melapu
Your name is: Harika Melapu

---

10. Input and Output Flow

Keyboard
   ↓
std::cin
   ↓
String Variable
   ↓
std::cout
   ↓
Screen

---

11. Easy Trick

cin  → IN  → Input
cout → OUT → Output

Remember:

std::cin >> name
→ One word input

std::getline(std::cin, name)
→ Complete line input

std::cout << name
→ Display output

---

12. Important Points

- "std::cin" is used for input.
- "std::cout" is used for output.
- "cin >>" reads one word for a string.
- "getline()" reads a complete line.
- "std::string" is commonly used with both "cin" and "getline()".
- "<iostream>" is required for "cin" and "cout".
- "<string>" is used for "std::string".
- 

### topic:21 std::string Length

1. What is Length?

Length means the total number of characters present in a string.

Example:

std::string name = "Harika";

Characters:

H  a  r  i  k  a
1  2  3  4  5  6

So:

Length = 6

---

2. length() Function

"length()" is used to find the number of characters in a "std::string".

Syntax

string.length();

Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    std::cout << name.length();

    return 0;
}

Output

6

---

3. Another Example

std::string city = "Vizag";

std::cout << city.length();

"Vizag" contains 5 characters.

Output

5

---

4. size() Function

"size()" can also be used to find the number of characters in a "std::string".

std::string name = "Harika";

std::cout << name.size();

Output

6

For "std::string":

length() → Number of characters
size()   → Number of characters

Both give the same result.

---

5. Length vs Index

This is very important.

std::string name = "Harika";

Characters and indexes:

Character → H   a   r   i   k   a
Index     → 0   1   2   3   4   5

Length:

Length = 6

So:

Last Index = Length - 1
           = 6 - 1
           = 5

Remember

Index  → Starts from 0
Length → Counts characters

---

6. Empty String Length

An empty string has no characters.

std::string name = "";

std::cout << name.length();

Output

0

---

7. String with Spaces

Spaces are also counted as characters in "std::string".

Example:

std::string text = "Hello World";

std::cout << text.length();

Characters:

Hello World
     ↑
   Space

Length:

11

The space between "Hello" and "World" is also counted.

---

8. Using Length in a Loop

We can use "length()" to traverse a string.

std::string name = "Harika";

for (int i = 0; i < name.length(); i++) {
    std::cout << name[i] << " ";
}

Output

H a r i k a

---

9. Important Points

- "length()" finds the number of characters in a "std::string".
- "size()" also gives the number of characters.
- Index starts from "0".
- Length counting starts from "1".
- Last index = "length() - 1".
- An empty string has length "0".
- Spaces are also counted in a "std::string".

---

10. Easy Trick

length() → "How many characters?"
size()   → "How many characters?"

Example:

std::string name = "Harika";

std::cout << name.length();2

Output:

6

Remember:

"Harika"

Length     = 6
Last Index = 5

### topic:22 std::string size()

1. What is size()?

"size()" is used to find the total number of characters present in a "std::string".

Example

std::string name = "Harika";

Characters:

H  a  r  i  k  a

Total characters = "6"

So:

std::cout << name.size();

Output

6

---

2. Syntax

string.size();

Example:

std::string city = "Vizag";

std::cout << city.size();

Output

5

---

3. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    std::cout << name.size();

    return 0;
}

Output

6

---

4. size() and length()

For "std::string", both "size()" and "length()" return the same number of characters.

std::string name = "Harika";

std::cout << name.size();
std::cout << name.length();

Both give:

6

Remember

size()   → Number of characters
length() → Number of characters

---

5. Empty String

An empty string contains no characters.

std::string name = "";

std::cout << name.size();

Output

0

---

6. Spaces are Counted

Spaces are also counted as characters.

std::string text = "Hello World";

std::cout << text.size();

Characters:

Hello World
     ↑
   Space

Total:

11

Output

11

---

7. size() with Index

Consider:

std::string name = "Harika";

Characters and indexes:

Character → H   a   r   i   k   a
Index     → 0   1   2   3   4   5

size() = 6
last index = size() - 1
           = 6 - 1
           = 5

So:

size() → Total characters
index  → Position of a character

---

8. Using size() in a Loop

"size()" can be used to traverse a string.

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    for (int i = 0; i < name.size(); i++) {
        std::cout << name[i] << " ";
    }

    return 0;
}

Output

H a r i k a

---

9. Important Points

- "size()" finds the total number of characters in a "std::string".
- "size()" is a member function of "std::string".
- "size()" and "length()" give the same result for "std::string".
- An empty string has size "0".
- Spaces are also counted.
- Index starts from "0".
- Last index = "size() - 1".

---

10. Easy Trick

size() = "How many characters are inside the string?"

Example:

"Harika"

size()      = 6
last index  = 5

Remember

SIZE  → Count
INDEX → Position

### topic 23 std::string append()

1. What is append()?

"append()" is used to add one string to the end of another string.

Example

std::string first = "Hello";
std::string second = " World";

first.append(second);

std::cout << first;

Output

Hello World

Here, "second" is added to the end of "first".

---

2. Syntax

string1.append(string2);

- "string1" → The original string
- "string2" → The string to be added

---

3. Example with Text

#include <iostream>
#include <string>

int main() {
    std::string name = "Hello";

    name.append(" Harika");

    std::cout << name;

    return 0;
}

Output

Hello Harika

---

4. Append Multiple Times

We can use "append()" multiple times.

std::string text = "Hello";

text.append(" ");
text.append("World");
text.append("!");

std::cout << text;

Output

Hello World!

---

5. append() with Another String

std::string first = "Good";
std::string second = " Morning";

first.append(second);

std::cout << first;

Output

Good Morning

---

6. append() vs +

Both can be used to join strings.

Using "+"

std::string a = "Hello";
std::string b = " World";

std::string c = a + b;

Using "append()"

std::string a = "Hello";
std::string b = " World";

a.append(b);

Result:

Hello World

Main Difference

+        → Creates a combined string
append() → Adds to the existing string

---

7. append() Changes the Original String

Example:

std::string name = "Hello";

name.append(" World");

std::cout << name;

Before:

Hello

After:

Hello World

So "append()" modifies the original string.

---

8. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string firstName = "Harika";
    std::string lastName = " Melapu";

    firstName.append(lastName);

    std::cout << firstName;

    return 0;
}

Output

Harika Melapu

---

9. Important Points

- "append()" adds text to the end of a string.
- It is used with "std::string".
- Syntax: "string1.append(string2);"
- The original string is modified.
- "append()" can be used multiple times.
- "+" can also join strings, but "append()" directly adds to the existing string.

---

10. Easy Trick

append() = "Last lo add cheyyi"

Example:

Before → "Hello"

append(" World")

After  → "Hello World"

Remember

append() → Add at the end

### topic:24 std::string insert()

1. What is insert()?

"insert()" is used to add characters or text at a specific position in a "std::string".

Unlike "append()", "insert()" allows us to choose where the text should be added.

append() → Adds at the end
insert() → Adds at a given position

---

2. Syntax

string.insert(position, text);

- "position" → Where to insert
- "text" → What to insert

---

3. Simple Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harka";

    name.insert(3, "i");

    std::cout << name;

    return 0;
}

Output

Harika

Before:

H  a  r  k  a
0  1  2  3  4

After inserting ""i"" at position "3":

H  a  r  i  k  a
0  1  2  3  4  5

---

4. Insert a Word

std::string text = "Hello";

text.insert(5, " World");

std::cout << text;

Output

Hello World

Here:

5        → Position
" World" → Text to insert

---

5. Insert at the Beginning

We can insert text at position "0".

std::string name = "Harika";

name.insert(0, "Hello ");

std::cout << name;

Output

Hello Harika

Position "0" means the beginning of the string.

---

6. Insert in the Middle

std::string word = "Helo";

word.insert(2, "l");

std::cout << word;

Output

Hello

The new character is inserted at position "2".

---

7. Insert Multiple Characters

"insert()" can add more than one character.

std::string text = "I C++";

text.insert(2, "love ");

std::cout << text;

Output

I love C++

---

8. insert() Changes the Original String

Example:

std::string name = "Harka";

name.insert(3, "i");

Before:

Harka

After:

Harika

So, "insert()" modifies the original string.

---

9. append() vs insert()

Function| Purpose
"append()"| Adds text at the end
"insert()"| Adds text at a specific position

Example:

std::string text = "Hello";

text.append(" World");

Result:

Hello World

Using "insert()":

std::string text = "Hello";

text.insert(0, "Hi ");

Result:

Hi Hello

---

10. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    name.insert(6, " Melapu");

    std::cout << name;

    return 0;
}

Output

Harika Melapu

---

11. Important Points

- "insert()" adds text at a specific position.
- Syntax: "string.insert(position, text);"
- Position starts from "0".
- Position "0" means the beginning.
- "insert()" can add one or multiple characters.
- It modifies the original string.
- "append()" adds at the end, while "insert()" adds at a chosen position.

---

12. Easy Trick

insert() = "Choose position → Add text"

Remember:

append() → END lo add
insert() → GIVEN POSITION lo add

Example:

"Harka"

insert(3, "i")

"Harika"


### topic 25 std::string erase()

1. What is erase()?

"erase()" is used to remove or delete characters from a "std::string".

insert() → Add characters
erase()  → Delete characters

---

2. Syntax

string.erase(position, count);

- "position" → From which index deletion should start
- "count" → How many characters should be deleted

---

3. Simple Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    name.erase(3, 1);

    std::cout << name;

    return 0;
}

Output

Harka

Before:

H  a  r  i  k  a
0  1  2  3  4  5

Here:

3 → Starting position
1 → Number of characters to delete

So "i" is deleted.

---

4. Erasing Multiple Characters

std::string text = "Hello";

text.erase(1, 2);

std::cout << text;

Before:

H  e  l  l  o
0  1  2  3  4

Starting from index "1", delete "2" characters:

e + l → deleted

Output

Ho

---

5. Erase from a Specific Position to the End

We can remove everything from a position until the end.

std::string text = "Hello World";

text.erase(5);

std::cout << text;

Output

Hello

Here, deletion starts from index "5" and continues to the end.

---

6. Erase from the Beginning

To remove characters from the beginning:

std::string text = "Hello World";

text.erase(0, 6);

std::cout << text;

Output

World

Here:

0 → Starting index
6 → Number of characters

""Hello "" is removed.

---

7. Erase All Characters

To remove all characters from a string:

std::string text = "Hello";

text.erase();

std::cout << text;

The string becomes empty.

Output



The string has "0" characters.

---

8. erase() Changes the Original String

Example:

std::string name = "Harika";

name.erase(3, 1);

Before:

Harika

After:

Harka

So, "erase()" modifies the original string.

---

9. insert() vs erase()

Function| Purpose
"insert()"| Adds characters
"erase()"| Removes characters

Example:

"Hello"

insert() → "Hello World"

erase()  → "Hello"

---

10. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string message = "Hello World";

    message.erase(5, 6);

    std::cout << message;

    return 0;
}

Output

Hello

---

11. Important Points

- "erase()" removes characters from a "std::string".
- Syntax: "string.erase(position, count);"
- "position" tells where deletion starts.
- "count" tells how many characters to delete.
- "erase(position)" removes from that position to the end.
- "erase()" with no arguments removes all characters.
- "erase()" modifies the original string.
- String indexes start from "0".

---

12. Easy Trick

erase() = DELETE

Remember:

position → Ekkada nunchi delete?
count    → Enni characters delete?

Example:

"Harka"

erase(3, 1)

"Harika"
    ↑
    i deleted

Final Memory Trick

append() → END lo ADD
insert() → POSITION lo ADD
erase()  → POSITION nunchi DELETE


### topic 26 std::string replace()

1. What is replace()?

"replace()" is used to replace existing characters or text with new characters or text in a "std::string".

Simple meaning:

replace() = Old text ni remove chesi, new text pettadam

---

2. Syntax

string.replace(position, count, newText);

- "position" → Where replacement starts
- "count" → Number of characters to replace
- "newText" → New text to insert

---

3. Simple Example

#include <iostream>
#include <string>

int main() {
    std::string text = "I like Java";

    text.replace(7, 4, "C++");

    std::cout << text;

    return 0;
}

Output

I like C++

Here:

7    → Starting position
4    → Number of characters to replace
C++  → New text

---

4. Understanding with Index

String:

I  l  i  k  e     J  a  v  a
0  1  2  3  4  5  6  7  8  9

"Java" starts at index "6".

So:

text.replace(6, 4, "C++");

The 4 characters:

Java

are replaced by:

C++

Result:

I like C++

---

5. Replace with a Longer Text

The new text can contain more characters than the old text.

std::string text = "I like C++";

text.replace(7, 3, "Python");

std::cout << text;

Output

I like Python

Here, "C++" is replaced by "Python".

---

6. Replace with a Shorter Text

The new text can also be shorter.

std::string text = "Hello World";

text.replace(6, 5, "C++");

std::cout << text;

Output

Hello C++

"World" is replaced by "C++".

---

7. Replace at the Beginning

We can replace text starting from index "0".

std::string text = "Hello World";

text.replace(0, 5, "Hi");

std::cout << text;

Output

Hi World

---

8. replace() Changes the Original String

Example:

std::string name = "Harka";

name.replace(3, 1, "i");

std::cout << name;

Output

Harika

So, "replace()" modifies the original string.

---

9. erase() vs replace()

Function| Purpose
"erase()"| Deletes characters
"replace()"| Deletes old characters and puts new text

Example:

"Hello World"

erase()   → "Hello"

replace() → "Hello India"

---

10. insert() vs replace()

Function| Purpose
"insert()"| Adds new text
"replace()"| Replaces existing text

Example:

"Hello"

insert() → "Hello World"

replace() → Changes existing text

---

11. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string message = "I love Java";

    message.replace(7, 4, "C++");

    std::cout << message;

    return 0;
}

Output

I love C++

---

12. Important Points

- "replace()" changes existing text in a string.
- Syntax: "string.replace(position, count, newText);"
- "position" tells where replacement starts.
- "count" tells how many old characters are replaced.
- "newText" is the new text.
- New text can be longer or shorter than the old text.
- "replace()" modifies the original string.
- Index starts from "0".

---

13. Easy Trick

replace() = OLD → NEW

Remember:

position → Ekkada start?
count    → Enni old characters?
newText  → New ga emi pettali?

Final Memory Trick

append()  → END lo ADD
insert()  → POSITION lo ADD
erase()   → DELETE
replace() → OLD ni NEW tho CHANGE

### topic :27 std::string substr()

1. What is substr()?

"substr()" means substring.

It is used to extract a part of a string.

Simple meaning:

substr() = String nunchi oka small part ni teesukovadam

Example:

"Hello World"
     ↓
   substr()
     ↓
"World"

---

2. Syntax

string.substr(start, length);

- "start" → From which index to start
- "length" → How many characters to take

---

3. Simple Example

#include <iostream>
#include <string>

int main() {
    std::string text = "Hello World";

    std::string result = text.substr(6, 5);

    std::cout << result;

    return 0;
}

Output

World

Here:

6 → Starting index
5 → Number of characters

---

4. Understanding with Index

String:

H  e  l  l  o     W  o  r  l  d
0  1  2  3  4  5  6  7  8  9  10
                  ↑
                Start

text.substr(6, 5);

Starting from index "6", take "5" characters:

W  o  r  l  d

Result:

World

---

5. substr() Without Length

The second argument is optional.

std::string text = "Hello World";

std::cout << text.substr(6);

Output

World

When only the starting position is given, "substr()" takes characters from that position until the end.

substr(6, 5) → 6 nunchi 5 characters
substr(6)    → 6 nunchi END varaku

---

6. Extract from the Beginning

We can start from index "0".

std::string text = "Hello World";

std::string result = text.substr(0, 5);

std::cout << result;

Output

Hello

---

7. Extract a Middle Part

std::string text = "Programming";

std::string result = text.substr(3, 4);

std::cout << result;

String indexes:

P  r  o  g  r  a  m  m  i  n  g
0  1  2  3  4  5  6  7  8  9  10

Starting at index "3", take "4" characters:

g  r  a  m

Output

gram

---

8. substr() Does Not Change the Original String

This is important.

std::string text = "Hello World";

std::string part = text.substr(6, 5);

std::cout << part;

Output:

World

But the original "text" is still:

Hello World

So:

substr() → Extracts a new string
Original string → Not changed

---

9. Store the Result

The result of "substr()" can be stored in another string variable.

std::string name = "Harika";

std::string part = name.substr(0, 3);

std::cout << part;

Output

Har

Here:

name → Original string
part → Extracted string

---

10. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika Melapu";

    std::string firstName = name.substr(0, 6);

    std::cout << firstName;

    return 0;
}

Output

Harika

---

11. Difference Between erase() and substr()

Function| Purpose
"erase()"| Deletes characters
"substr()"| Extracts characters

Example:

"Hello World"

erase()  → Removes characters from the original string

substr() → Takes a part of the string

---

12. Difference Between replace() and substr()

Function| Purpose
"replace()"| Changes existing text
"substr()"| Extracts a part of the text

replace() → OLD → NEW
substr()  → BIG STRING → SMALL PART

---

13. Important Points

- "substr()" means substring.
- It is used to extract a part of a "std::string".
- Syntax: "string.substr(start, length);"
- "start" is the starting index.
- "length" tells how many characters to extract.
- The length argument is optional.
- "substr(start)" extracts from "start" to the end.
- "substr()" does not modify the original string.
- The extracted part can be stored in another "string".

---

14. Easy Trick

substr() = "String nunchi small part teesuko"

Remember:

start  → Ekkada nunchi?
length → Enni characters?

Example:

"Hello World"

substr(6, 5)

     ↓
  "World"

Final Memory Trick

append()  → END lo ADD
insert()  → POSITION lo ADD
erase()   → DELETE
replace() → OLD ni NEW tho CHANGE
substr()  → PART ni EXTRACT

### topic:28 std::string find()

1. What is find()?

"find()" is used to search for a character or word inside a "std::string".

Simple meaning:

find() = String lo "Ekkada undi?" ani search cheyyadam

If found, it returns the starting index of the character or substring.

---

2. Syntax

string.find(searchText);

- "searchText" → Character or text to search for

---

3. Find a Character

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    std::cout << name.find("i");

    return 0;
}

Output

3

Indexes:

H  a  r  i  k  a
0  1  2  3  4  5
         ↑
        "i"

So "i" is at index "3".

---

4. Find a Word

std::string text = "I love C++";

std::cout << text.find("C++");

Output

7

""C++"" starts at index "7".

---

5. Find a Substring

A substring is a small part of a bigger string.

std::string text = "I love programming";

std::cout << text.find("programming");

"find()" returns the index where ""programming"" starts.

---

6. When Text is Not Found

If the searched text is not present, "find()" returns:

std::string::npos

Example:

std::string text = "Hello";

std::cout << text.find("Java");

"Java" is not present in ""Hello"".

So the result is:

std::string::npos

---

7. Checking Whether a String is Found

We can use "find()" with an "if" statement.

#include <iostream>
#include <string>

int main() {
    std::string text = "I love C++";

    if (text.find("C++") != std::string::npos) {
        std::cout << "Found";
    } else {
        std::cout << "Not Found";
    }

    return 0;
}

Output

Found

---

8. Checking When Text is Not Found

std::string text = "Hello";

if (text.find("Java") != std::string::npos) {
    std::cout << "Found";
} else {
    std::cout << "Not Found";
}

Output

Not Found

---

9. Find Starting from a Specific Position

We can also tell "find()" where to start searching.

Syntax

string.find(searchText, startPosition);

Example:

std::string text = "Hello Hello";

std::cout << text.find("Hello", 1);

Here, searching starts from index "1", so it finds the second ""Hello"".

---

10. Complete Example

#include <iostream>
#include <string>

int main() {
    std::string message = "I love programming";

    std::size_t position = message.find("programming");

    if (position != std::string::npos) {
        std::cout << "Found at index: " << position;
    } else {
        std::cout << "Not Found";
    }

    return 0;
}

Output

Found at index: 7

---

11. Important Points

- "find()" is used to search inside a "std::string".
- It can search for a character or a substring.
- If found, it returns the starting index.
- If not found, it returns "std::string::npos".
- Index starts from "0".
- We can use "find()" with "if" to check whether something exists.
- We can provide a starting position for the search.

---

12. Easy Trick

find() = SEARCH

Remember:

Found     → Starting index
Not Found → std::string::npos

Example:

"Hello World"

find("World")
      ↓
      6

Final Memory Trick

size()    → How many characters?
append()  → Add at the end
insert()  → Add at a position
erase()   → Delete
replace() → OLD → NEW
substr()  → Extract a part
find()    → Search and get starting index

### topic:29 std::string compare()

1. What is compare()?

"compare()" is used to compare two strings.

Simple ga:

«“Ee two strings same aa? Different aa? Which one comes first?”»

It compares strings in lexicographical (dictionary-like) order.

---

2. Syntax

string1.compare(string2);

Example:

std::string a = "Hello";
std::string b = "Hello";

std::cout << a.compare(b);

Output:

0

---

3. Return Values

"compare()" returns an integer.

Result| Meaning
"0"| Both strings are equal
"< 0"| First string comes before second
"> 0"| First string comes after second

Important: Negative or positive value exact number ni depend avvakandi. Only "< 0", "0", "> 0" meaning important.

---

4. Equal Strings

std::string a = "Apple";
std::string b = "Apple";

std::cout << a.compare(b);

Output:

0

Because both strings are same.

---

5. First String Comes Before Second

std::string a = "Apple";
std::string b = "Banana";

std::cout << a.compare(b);

Result will be negative.

Because ""Apple"" comes before ""Banana"".

---

6. First String Comes After Second

std::string a = "Banana";
std::string b = "Apple";

std::cout << a.compare(b);

Result will be positive.

Because ""Banana"" comes after ""Apple"".

---

7. Using compare() with if-else

#include <iostream>
#include <string>

int main() {
    std::string a = "Apple";
    std::string b = "Banana";

    int result = a.compare(b);

    if (result == 0) {
        std::cout << "Both strings are equal";
    }
    else if (result < 0) {
        std::cout << "First string comes before second";
    }
    else {
        std::cout << "First string comes after second";
    }

    return 0;
}

Output:

First string comes before second

---

8. compare() vs ==

Using "=="

If we only want to check whether two strings are equal:

if (a == b)

This is simple and easy.

Using "compare()"

if (a.compare(b) == 0)

This also checks whether both strings are equal.

"compare()" can additionally tell whether the first string comes before or after the second.

---

9. Important Points

- "compare()" compares two "std::string" objects.
- Equal strings → "0"
- First string before second → negative value
- First string after second → positive value
- It does not modify the original strings.
- Comparison is based on lexicographical order.

---

10. Easy Trick

Remember:

compare() → Compare two strings

0    → Same
< 0  → First comes before
> 0  → First comes after

One-line memory trick:

«0 = Same, Negative = Before, Positive = After»


### topic:30 std::string c_str()

1. What is c_str()?

"c_str()" is used to get a C-style string from a C++ "std::string".

Simple ga:

«"std::string" ni C-style string ("const char*") format lo access cheyyadaniki "c_str()" use chestam.»

---

2. Syntax

string.c_str();

Example:

std::string name = "Harika";

std::cout << name.c_str();

Output:

Harika

---

3. How does c_str() work?

std::string
    ↓
  c_str()
    ↓
const char*

Example:

std::string name = "Harika";
const char* ptr = name.c_str();

Here:

- "name" → "std::string"
- "name.c_str()" → C-style string
- "ptr" → pointer to the C-style string

---

4. What is a C-style string?

C-style string is a sequence of characters ending with a special character called null character ("\0").

Example:

H  a  r  i  k  a  \0

"\0" tells the program:

«"String ikkada end ayyindi."»

---

5. Why do we use c_str()?

Some old C functions and C-style APIs expect a:

const char*

But "std::string" is a different type.

So we can use:

name.c_str()

to provide the C-style representation.

Example:

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    const char* ptr = name.c_str();

    std::cout << ptr;

    return 0;
}

Output:

Harika

---

6. c_str() does not modify the string

std::string name = "Harika";

name.c_str();

"c_str()" original "std::string" ni change cheyyadu.

It only provides access to its C-style representation.

---

7. Important: const char*

"c_str()" returns:

const char*

"const" means we should not modify the characters through this pointer.

❌ Wrong:

std::string name = "Harika";

name.c_str()[0] = 'X';

Don't modify the returned C-style string through the pointer.

---

8. c_str() vs std::string

"std::string"| "c_str()"
C++ string| C-style string representation
Modern C++| Useful with C-style APIs
String object| Returns "const char*"
Can use string functions| Used when "const char*" is required

---

9. Simple Real-Life Example

Think of:

std::string = Modern language
C-style string = Old language
c_str() = Translator

So:

std::string
     ↓
   c_str()
     ↓
C-style string

---

10. Easy Trick

Remember:

«c_str() = C String»

Whenever you need a C-style string from a "std::string", think:

name.c_str()

One-line memory trick:

std::string → c_str() → const char*

---

11. Complete Example

#include <iostream>
#include <string>

int main() {

    std::string name = "Harika";

    const char* cString = name.c_str();

    std::cout << "C++ String: " << name << std::endl;
    std::cout << "C-style String: " << cString << std::endl;

    return 0;
}

Output:

C++ String: Harika
C-style String: Harika

Important Points

- "c_str()" belongs to "std::string".
- It provides the C-style string representation.
- Return type is "const char*".
- C-style string ends with "\0".
- It does not modify the original string.
- It is useful when a C-style API expects "const char*".
- Don't modify the characters through the returned "const char*".

Final Memory

c_str()
   ↓
C-style string
   ↓
const char*
   ↓
characters ending with \0

### topic 31 Modern Strings in C++

1. What are Modern Strings?

Modern C++ lo strings ni handle cheyyadaniki "std::string" use chestam.

Example:

std::string name = "Harika";

"std::string" is the modern and convenient way to work with text in C++.

---

2. C-style String vs Modern String

C-style String

char name[] = "Harika";

Modern C++ String

std::string name = "Harika";

Simple ga:

char[]       → C-style string
std::string  → Modern C++ string

---

3. Header File

"std::string" use cheyyadaniki:

#include <string>

Example:

#include <iostream>
#include <string>

int main() {
    std::string name = "Harika";

    std::cout << name;

    return 0;
}

Output

Harika

---

4. Why use Modern Strings?

"std::string" tho strings ni easy ga manage cheyyachu.

For example:

std::string name = "Harika";

name.length();
name.size();
name.append(" Kumar");
name.insert(0, "Ms. ");
name.erase(0, 4);
name.replace(0, 6, "Hello");
name.substr(0, 5);
name.find("ri");
name.compare("Harika");
name.c_str();

---

5. Main Advantages

1. Easy to use

std::string name = "Harika";

String create cheyyadam simple.

2. Many built-in functions

"std::string" provides useful functions like:

length()
size()
append()
insert()
erase()
replace()
substr()
find()
compare()
c_str()

3. Dynamic size

String size avasaraniki taggattu grow or shrink avvagaladu.

std::string text = "Hello";

text.append(" World");

Result:

Hello World

4. Easy modification

String ni easily add, remove, replace cheyyachu.

---

6. Modern String Example

#include <iostream>
#include <string>

int main() {

    std::string name = "Harika";

    std::cout << "Name: " << name << std::endl;
    std::cout << "Length: " << name.length() << std::endl;

    return 0;
}

Output

Name: Harika
Length: 6

---

7. Modern String Operations

std::string
     |
     |-- Create
     |-- Input / Output
     |-- length()
     |-- size()
     |-- append()
     |-- insert()
     |-- erase()
     |-- replace()
     |-- substr()
     |-- find()
     |-- compare()
     |-- c_str()

These operations help us create, access, search, modify and compare strings.

---

8. Modern String vs C-style String

C-style String| Modern String
"char[]"| "std::string"
C-style| C++ style
More manual handling| Easier handling
Uses "\0" terminator| Internally manages string data
Limited built-in operations| Many useful member functions
Older/common C approach| Preferred modern C++ approach

---

9. Important Point

"std::string" is a class provided by the C++ Standard Library.

Example:

std::string name = "Harika";

Here:

std::string → string type/class
name        → string object
"Harika"    → string data

---

10. Easy Trick

Remember:

C-style string
      ↓
char[]

Modern C++ string
      ↓
std::string

One-line memory trick:

«Modern String = "std::string"»

"std::string" makes working with text easier, safer, and more convenient in modern C++.

### topic:32 String Views in C++

1. What is String View?

"std::string_view" is a C++ type used to view an existing string without creating a copy of the string data.

Simple ga:

«String View = Existing string ni just view cheyyadam, own cheyyakunda.»

---

2. Header File

"std::string_view" use cheyyadaniki:

#include <string_view>

---

3. Basic Syntax

std::string_view view = string;

Example:

#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string name = "Harika";

    std::string_view view = name;

    std::cout << view;

    return 0;
}

Output

Harika

---

4. How String View Works?

std::string
    ↓
  "Harika"
    ↓
std::string_view
    ↓
   view

"view" separate copy of ""Harika"" create cheyyadu.

It refers to the characters already stored in the original string.

---

5. Why Use String View?

Main purpose:

«Unnecessary string copies ni avoid cheyyadam.»

Especially functions ki strings ni pass chesetappudu "std::string_view" useful.

Example:

void print(std::string_view text) {
    std::cout << text;
}

Call:

print("Hello World");

---

6. Function Example

#include <iostream>
#include <string_view>

void print(std::string_view text) {
    std::cout << text;
}

int main() {
    print("Hello World");

    return 0;
}

Output

Hello World

---

7. String View Can View Part of a String

"std::string_view" can represent only a part of an existing string.

Example:

#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string text = "Hello World";

    std::string_view view(text.data() + 6, 5);

    std::cout << view;

    return 0;
}

Output

World

Here:

H e l l o   W o r l d
0 1 2 3 4 5 6 7 8 9 10
          ↑
        World

---

8. String View Does Not Own the Data

This is an important point.

std::string text = "Hello";

std::string_view view = text;

Here:

text  → owns the actual string data
view  → only views the data

"std::string_view" itself does not own the characters it refers to.

---

9. String vs String View

"std::string"| "std::string_view"
Owns its string data| Does not own the data
Can modify the string| Cannot modify characters through the view
Stores/manages string data| Refers to existing characters
Can involve copying| Helps avoid unnecessary copying
Good for storing strings| Good for viewing/reading strings

---

10. Important Lifetime Rule

A "std::string_view" should not be used after the original string it refers to is destroyed.

Example:

std::string_view view;

{
    std::string text = "Hello";
    view = text;
}

After the block:

text → destroyed
view → refers to invalid data

So using "view" after "text" is destroyed can cause undefined behavior.

---

11. Real-Life Example

Think of:

std::string
= Original book

std::string_view
= Window through which we read the book

The window lets us see the content, but it does not own the book.

---

12. Easy Trick

Remember:

std::string
     ↓
   OWNS
     ↓
Actual string data


std::string_view
     ↓
   VIEWS
     ↓
Existing string data

One-line Memory Trick

«"string" = Own the data

"string_view" = View the data»

---

Important Points

- "std::string_view" is a modern C++ type.
- Header: "<string_view>"
- It does not own the string data.
- It can avoid unnecessary string copies.
- It is especially useful for function parameters.
- It can represent the whole string or only a part of it.
- The original string must remain alive while the "string_view" is being used.

