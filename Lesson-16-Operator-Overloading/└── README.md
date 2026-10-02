# Lesson 16 – Operator Overloading

## Topics

1. Operator Overloading
2. Unary Operators
3. Binary Operators
4. Arithmetic Operators
5. Comparison Operators
6. Assignment Operators
7. Increment / Decrement Operators
8. `[]` Operator
9. `()` Operator
10. `->` Operator
11. `<<` and `>>` Operators
12. Friend Operators
13. Member vs Non-Member Operators


### topic 1

Operator Overloading – C++ Notes

1. Definition

Operator Overloading means giving a special meaning to an existing operator when it is used with objects of a class.

«It allows operators such as "+", "-", "==", "<", etc. to work with user-defined objects.»

---

2. What is an Operator?

An operator is a symbol that performs an operation.

Examples:

+
-
*
/
==
<
>
=

Example:

int a = 10;
int b = 20;

cout << a + b;

Here, "+" is an operator.

---

3. Why Operator Overloading?

Normally, C++ knows how to use operators with built-in data types such as:

int
float
double

But C++ does not automatically know what something like this should mean:

Student s3 = s1 + s2;

So, we can define what "+" should do for "Student" objects.

---

4. Example

#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    Student operator+(Student s) {
        Student temp;
        temp.marks = marks + s.marks;
        return temp;
    }
};

int main() {

    Student s1;
    Student s2;

    s1.marks = 80;
    s2.marks = 90;

    Student s3 = s1 + s2;

    cout << s3.marks;

    return 0;
}

Output

170

---

5. How It Works

When we write:

Student s3 = s1 + s2;

C++ calls the overloaded "+" operator:

s1 + s2
   ↓
operator+()
   ↓
80 + 90
   ↓
170

---

6. Operator Overloading Function

General syntax:

return_type operator symbol(parameters) {
    // logic
}

Example:

Student operator+(Student s) {
    Student temp;

    temp.marks = marks + s.marks;

    return temp;
}

Here:

Student
   ↓
Return type

operator+
   ↓
Operator being overloaded

(Student s)
   ↓
Parameter

---

7. Important Point

Operator overloading does not create a new operator.

It gives an existing operator a special meaning for a user-defined type.

For example:

Existing operators:
+
-
*
/
==
<
>

We can define how these operators behave with our class objects.

---

8. Real-Life Example

Suppose:

Student 1 → 80 marks
Student 2 → 90 marks

We want:

s1 + s2

to mean:

80 + 90 = 170

Operator overloading allows us to define this behavior.

---

9. Advantages

- Makes code easier to read.
- Makes object operations more natural.
- Allows existing operators to work with user-defined types.
- Can reduce the need for separate function names for simple operations.

---

10. Important Points

- Operator overloading is a form of compile-time polymorphism.
- It works with user-defined types such as classes.
- It gives an existing operator a special meaning.
- It does not create a new operator.
- The keyword "operator" is used to define an overloaded operator function.
- Examples include "operator+", "operator-", "operator==", and "operator<".

---

11. One-Line Definition

«Operator Overloading is the process of giving an existing C++ operator a special meaning for user-defined objects.»


### topic 2

Unary Operators – C++ Notes

1. Definition

A Unary Operator is an operator that works on only one operand.

Unary Operator
      ↓
  1 Operand

Example:

++a;

Here:

- "++" → Operator
- "a" → Operand

---

2. Common Unary Operators

++    Increment
--    Decrement
-     Unary Minus
!     Logical NOT
~     Bitwise NOT
&     Address-of
*     Dereference

---

3. Increment Operator "++"

The increment operator increases a value by "1".

int a = 10;

++a;

Now:

a = 11

---

4. Decrement Operator "--"

The decrement operator decreases a value by "1".

int a = 10;

--a;

Now:

a = 9

---

5. Unary Minus "-"

The unary minus operator changes the sign of a value.

int a = 10;

cout << -a;

Output:

-10

---

6. Logical NOT "!"

The logical NOT operator reverses a Boolean value.

bool a = true;

cout << !a;

Output:

0

Because:

true  → false
false → true

---

7. Unary Operator Overloading

Unary operators can also be overloaded for class objects.

Example:

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    void operator-() {
        value = -value;
    }
};

Usage:

Number n(10);

-n;

The "-" operator is overloaded for the "Number" object.

---

8. How It Works

n
↓
value = 10

-n
↓
operator-()
↓
value = -10

---

9. Unary vs Binary Operators

Unary Operator

Works on one operand.

-a
++a
!a

1 operand

Binary Operator

Works on two operands.

a + b
a - b
a * b

2 operands

---

10. Important Points

- Unary operators work on one operand.
- Common unary operators include "++", "--", "-", "!", "~", "&", and "*".
- Unary operators can be overloaded for user-defined classes.
- The "operator" keyword is used when defining an overloaded operator function.
- Unary operator overloading is part of operator overloading in C++.

---

11. One-Line Definition

«A Unary Operator is an operator that works on only one operand.»
