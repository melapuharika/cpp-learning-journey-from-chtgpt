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
