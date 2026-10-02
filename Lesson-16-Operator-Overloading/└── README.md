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


### topic 3

Binary Operators – C++ Notes

1. Definition

A Binary Operator is an operator that works on two operands.

Binary = 2

Example:

a + b

Here:

- "a" → First operand
- "+" → Operator
- "b" → Second operand

---

2. Common Binary Operators

+     Addition
-     Subtraction
*     Multiplication
/     Division
%     Modulus
==    Equal to
!=    Not equal to
>     Greater than
<     Less than
>=    Greater than or equal to
<=    Less than or equal to

---

3. Examples

a + b;
a - b;
a * b;
a / b;
a == b;
a > b;

All these operators work with two operands, so they are binary operators.

---

4. Binary Operator Overloading

In C++, we can overload binary operators to define how they should work with class objects.

Example:

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator+(Number n) {
        Number temp(0);
        temp.value = value + n.value;
        return temp;
    }
};

Usage:

Number n1(10);
Number n2(20);

Number n3 = n1 + n2;

Output:

30

---

5. How It Works

When we write:

n1 + n2

It can be understood as:

n1.operator+(n2);

Here:

- "n1" → First object
- "+" → Binary operator
- "n2" → Second object

The "operator+()" function performs the addition.

---

6. Unary vs Binary

Unary Operator| Binary Operator
Works on 1 operand| Works on 2 operands
"-a"| "a + b"
"++a"| "a - b"
"!a"| "a * b"

---

7. Real-Life Example

Suppose:

Student 1 marks = 50
Student 2 marks = 30

We can add them:

50 + 30

Result:

80

The "+" operator works on two values, so it is a binary operator.

---

8. Important Points

- Binary means two operands.
- Binary operators work on two values or objects.
- "+", "-", "*", "/", "%" are common binary operators.
- Comparison operators such as "==", "!=", "<", and ">" are also binary operators.
- Binary operators can be overloaded for class objects.
- "operator+()" can define how "+" works between objects.

One-line Definition

A binary operator is an operator that works on two operands, and operator overloading allows us to define its behavior for class objects.


### topic 4

Arithmetic Operators – C++ Notes

1. Definition

Arithmetic Operators are operators used to perform mathematical calculations in C++.

Examples:

Addition
Subtraction
Multiplication
Division
Remainder

---

2. Main Arithmetic Operators

Operator| Meaning| Example| Result
"+"| Addition| "10 + 5"| "15"
"-"| Subtraction| "10 - 5"| "5"
"*"| Multiplication| "10 * 5"| "50"
"/"| Division| "10 / 5"| "2"
"%"| Modulus / Remainder| "10 % 3"| "1"

---

3. Addition "+"

Used to add two values.

int a = 10;
int b = 20;

cout << a + b;

Output:

30

---

4. Subtraction "-"

Used to subtract one value from another.

int a = 20;
int b = 10;

cout << a - b;

Output:

10

---

5. Multiplication "*"

Used to multiply two values.

int a = 5;
int b = 4;

cout << a * b;

Output:

20

---

6. Division "/"

Used to divide one value by another.

int a = 20;
int b = 5;

cout << a / b;

Output:

4

---

7. Modulus "%"

The "%" operator gives the remainder after division.

Example:

cout << 10 % 3;

Output:

1

Because:

10 ÷ 3 = 3 remainder 1

---

8. Arithmetic Operator Overloading

Arithmetic operators can be overloaded to work with class objects.

Example:

Number n3 = n1 + n2;

Here, "+" can be overloaded using:

Number operator+(Number n)

This defines how two "Number" objects should be added.

---

9. Real-Life Example

Suppose there are 10 chocolates and 3 people.

Each person gets 3 chocolates:

3 × 3 = 9

One chocolate remains.

The "%" operator can find that remaining chocolate:

10 % 3

Result:

1

---

10. Important Points

- Arithmetic operators are used for mathematical calculations.
- "+" is used for addition.
- "-" is used for subtraction.
- "*" is used for multiplication.
- "/" is used for division.
- "%" is used to find the remainder.
- Arithmetic operators can be overloaded for class objects.

One-line Definition

Arithmetic operators are operators used to perform mathematical calculations such as addition, subtraction, multiplication, division, and finding the remainder.


### topic 5

Comparison Operators – C++ Notes

1. Definition

Comparison Operators are used to compare two values.

They usually produce a Boolean result:

true  →  1
false →  0

---

2. Main Comparison Operators

Operator| Meaning| Example| Result
"=="| Equal to| "10 == 10"| "true"
"!="| Not equal to| "10 != 5"| "true"
">"| Greater than| "10 > 5"| "true"
"<"| Less than| "5 < 10"| "true"
">="| Greater than or equal to| "10 >= 10"| "true"
"<="| Less than or equal to| "5 <= 10"| "true"

---

3. Equal to "=="

Checks whether two values are equal.

int a = 10;
int b = 10;

cout << (a == b);

Output:

1

Because both values are equal.

---

4. Not Equal to "!="

Checks whether two values are different.

int a = 10;
int b = 5;

cout << (a != b);

Output:

1

---

5. Greater Than ">"

Checks whether the first value is greater than the second value.

10 > 5

Result:

true

---

6. Less Than "<"

Checks whether the first value is smaller than the second value.

5 < 10

Result:

true

---

7. Greater Than or Equal to ">="

Checks whether a value is either greater than or equal to another value.

10 >= 10

Result:

true

---

8. Less Than or Equal to "<="

Checks whether a value is either smaller than or equal to another value.

5 <= 10

Result:

true

---

9. Example

int marks = 50;

cout << (marks >= 40);

Output:

1

Because:

50 >= 40

is true.

---

10. Difference Between "=" and "=="

"=" Assignment Operator

Used to assign a value.

int age;
age = 20;

Meaning:

«Store "20" in "age".»

"==" Comparison Operator

Used to compare two values.

age == 20;

Meaning:

«Is "age" equal to "20"?»

---

11. Comparison Operator Overloading

Comparison operators can be overloaded to work with class objects.

Example:

Student s1;
Student s2;

s1 == s2;

We can define an "operator==()" function to decide whether two "Student" objects are equal.

---

12. Real-Life Example

Suppose the pass mark is "40".

int marks = 50;

cout << (marks >= 40);

Since "50" is greater than or equal to "40", the result is "true".

---

13. Important Points

- Comparison operators compare two values.
- They generally return a Boolean result.
- "==" checks equality.
- "!=" checks inequality.
- ">" checks greater than.
- "<" checks less than.
- ">=" checks greater than or equal to.
- "<=" checks less than or equal to.
- "=" and "==" have different purposes.
- Comparison operators can be overloaded for class objects.

One-line Definition

Comparison operators are used to compare two values and produce a Boolean result ("true" or "false").


### topic 6

Assignment Operators – C++ Notes

1. Definition

Assignment Operators are used to assign a value to a variable or update its existing value.

The basic assignment operator is:

=

Example:

int age = 20;

Here, "20" is assigned to "age".

---

2. Main Assignment Operators

Operator| Meaning| Example| Same As
"="| Assignment| "a = 10"| —
"+="| Add and assign| "a += 5"| "a = a + 5"
"-="| Subtract and assign| "a -= 5"| "a = a - 5"
"*="| Multiply and assign| "a *= 5"| "a = a * 5"
"/="| Divide and assign| "a /= 5"| "a = a / 5"
"%="| Modulus and assign| "a %= 5"| "a = a % 5"

---

3. Assignment "="

Used to assign a value to a variable.

int a = 10;

Meaning:

«Store "10" in "a".»

---

4. Add and Assign "+="

int a = 10;

a += 5;

Same as:

a = a + 5;

Result:

15

---

5. Subtract and Assign "-="

int a = 10;

a -= 3;

Same as:

a = a - 3;

Result:

7

---

6. Multiply and Assign "*="

int a = 10;

a *= 2;

Same as:

a = a * 2;

Result:

20

---

7. Divide and Assign "/="

int a = 20;

a /= 5;

Same as:

a = a / 5;

Result:

4

---

8. Modulus and Assign "%="

int a = 10;

a %= 3;

Same as:

a = a % 3;

Since "10 % 3 = 1":

a = 1

---

9. Real-Life Example

Suppose you have ₹500 in your wallet.

int money = 500;

You spend ₹100:

money -= 100;

This is the same as:

money = money - 100;

Now:

money = ₹400

---

10. Assignment Operator Overloading

The assignment operator can also be overloaded for class objects.

Example:

Student s1;
Student s2;

s1 = s2;

An "operator=" function can define how values or resources should be assigned from one object to another.

---

11. Important Points

- Assignment operators assign values to variables.
- "=" is the basic assignment operator.
- "+=" adds and assigns.
- "-=" subtracts and assigns.
- "*=" multiplies and assigns.
- "/=" divides and assigns.
- "%=" finds the remainder and assigns.
- Assignment operators can also be overloaded for class objects.

One-line Definition

Assignment operators are used to assign or update values stored in variables.


### topic 6

Increment and Decrement Operators – C++ Notes

1. Definition

Increment and Decrement Operators are used to increase or decrease a variable's value by 1.

- "++" → Increment operator
- "--" → Decrement operator

2. Increment Operator "++"

The increment operator increases a variable's value by 1.

Example:

int a = 10;
a++;
cout << a;

Output:

11

Both "a++" and "++a" can increase the value of "a" by 1.

3. Decrement Operator "--"

The decrement operator decreases a variable's value by 1.

Example:

int a = 10;
a--;
cout << a;

Output:

9

Both "a--" and "--a" can decrease the value of "a" by 1.

4. Prefix Increment "++a"

In prefix increment, the variable is increased first, and then its new value is used.

Example:

int a = 10;
int b = ++a;

cout << a << endl;
cout << b;

Output:

11
11

Explanation:

- Initially, "a = 10".
- "++a" increases "a" to "11".
- The new value "11" is assigned to "b".

5. Postfix Increment "a++"

In postfix increment, the old value is used first, and then the variable is increased.

Example:

int a = 10;
int b = a++;

cout << a << endl;
cout << b;

Output:

11
10

Explanation:

- Initially, "a = 10".
- The old value "10" is assigned to "b".
- Then "a" is increased to "11".

6. Prefix Decrement "--a"

In prefix decrement, the variable is decreased first, and then its new value is used.

int a = 10;
int b = --a;

Result:

a = 9
b = 9

7. Postfix Decrement "a--"

In postfix decrement, the old value is used first, and then the variable is decreased.

int a = 10;
int b = a--;

Result:

a = 9
b = 10

8. Prefix vs Postfix

Prefix| Postfix
Operator comes before the variable| Operator comes after the variable
Changes the value before using it| Uses the old value before changing it
Example: "++a"| Example: "a++"
Example: "--a"| Example: "a--"

9. Real-Life Example

In a game, suppose a player has 10 points.

int score = 10;
score++;

The score becomes "11".

If the player has 3 lives and loses one life:

int lives = 3;
lives--;

The number of lives becomes "2".

10. Increment and Decrement Operator Overloading

Increment and decrement operators can be overloaded to work with class objects.

Example:

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator++() {
        ++value;
        return *this;
    }
};

Here, "operator++()" defines how prefix increment works for a "Number" object.

11. Important Points

- "++" increases a value by 1.
- "--" decreases a value by 1.
- Prefix increment: "++a".
- Postfix increment: "a++".
- Prefix decrement: "--a".
- Postfix decrement: "a--".
- Prefix uses the updated value.
- Postfix uses the old value before updating.
- Increment and decrement operators can be overloaded for class objects.

One-Line Definition

Increment and decrement operators are unary operators used to increase or decrease a variable's value by 1.
