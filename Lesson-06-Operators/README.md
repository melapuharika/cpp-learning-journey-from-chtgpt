# Lesson 6 - Operators

## Topics

1. Operators

2. Arithmetic Operators

3. Relational Operators

4. Logical Operators

5. Assignment Operators

6. Increment / Decrement Operators

7. Bitwise Operators

8. Conditional Operator

9. sizeof Operator

10. Comma Operator

11. Scope Resolution Operator

12. Member Access Operator

13. Arrow Operator

14. Address-of Operator

15. Dereference Operator

16. Operator Precedence and Associativity


##  Operators

1. Operators

An operator is a symbol that tells C++ to perform a specific operation.

Example:

int a = 10;
int b = 5;

int result = a + b;

Here:

- "a" and "b" are operands
- "+" is the operator
- "+" tells C++ to add the two values.

What is an Operand?

An operand is a value or variable on which an operator performs an operation.

Example:

10 + 5

Here:

10 → Operand
+  → Operator
5  → Operand

C++ has many different types of operators.

---

2. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

Operators

+   Addition
-   Subtraction
*   Multiplication
/   Division
%   Modulus (Remainder)

Example

int a = 10;
int b = 3;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;

Output:

13
7
30
3
1

Important: Integer Division

When both operands are integers, "/" gives an integer result.

int a = 10;
int b = 3;

cout << a / b;

Output:

3

The decimal part is removed.

If we want a decimal result:

double result = static_cast<double>(a) / b;

Result:

3.33333

Modulus "%"

"%" gives the remainder after division.

10 ÷ 3

3 × 3 = 9
10 - 9 = 1

Therefore:

10 % 3

gives:

1

Simple Definition

Arithmetic operators are used to perform mathematical calculations.

---

3. Relational Operators

Relational operators are used to compare two values.

The result is usually:

true

or

false

Operators

>   Greater than
<   Less than
>=  Greater than or equal to
<=  Less than or equal to
==  Equal to
!=  Not equal to

Examples

10 > 5

Result:

true

Because 10 is greater than 5.

10 < 5

Result:

false

Because 10 is not less than 5.

10 == 10

Result:

true

Because both values are equal.

10 != 5

Result:

true

Because the values are different.

Important Difference

=   → Assignment
==  → Comparison

Example:

int x = 10;

Means put 10 into x.

But:

x == 10

Means check whether x is equal to 10.

Simple Definition

Relational operators compare two values and produce a true or false result.

---

4. Logical Operators

Logical operators are used to combine or reverse conditions.

The three main logical operators are:

&&   AND
||   OR
!    NOT

---

"&&" AND Operator

AND means all required conditions must be true.

Example:

age >= 18 && hasID

This means:

«Age should be 18 or more AND the person should have an ID.»

Both conditions must be true.

true && true   = true
true && false  = false
false && true  = false
false && false = false

Easy memory trick

"&&" = Rendu conditions true kavali.

---

"||" OR Operator

OR means at least one condition should be true.

true || true   = true
true || false  = true
false || true  = true
false || false = false

Example:

age < 18 || age > 60

If either condition is true, the complete condition is true.

Easy memory trick

"||" = Oka condition true unna chaalu.

---

"!" NOT Operator

NOT reverses a boolean value.

!true  = false
!false = true

Example:

bool isRaining = true;

cout << !isRaining;

The result is "false".

Easy memory trick

"!" = Reverse the answer.

Simple Definition

Logical operators are used to combine or reverse conditions.

---

5. Assignment Operators

Assignment operators are used to store or update values in variables.

Basic Assignment Operator

=

Example:

int x = 10;

This means:

«Store the value 10 in x.»

---

Compound Assignment Operators

"+="

x += 5;

Same as:

x = x + 5;

If:

x = 10

then:

x = 15

---

"-="

x -= 5;

Same as:

x = x - 5;

---

"*="

x *= 5;

Same as:

x = x * 5;

---

"/="

x /= 5;

Same as:

x = x / 5;

---

"%="

x %= 5;

Same as:

x = x % 5;

Summary

=   → Assign
+=  → Add and assign
-=  → Subtract and assign
*=  → Multiply and assign
/=  → Divide and assign
%=  → Remainder and assign

Simple Definition

Assignment operators are used to assign or update values in variables.

---

6. Increment and Decrement Operators

These operators change a value by 1.

++  → Increment by 1
--  → Decrement by 1

Increment "++"

int x = 10;

x++;

Now:

x = 11

It is similar to:

x = x + 1;

---

Decrement "--"

int x = 10;

x--;

Now:

x = 9

It is similar to:

x = x - 1;

---

Prefix and Postfix

"++" and "--" can be placed before or after a variable.

Prefix

++x;

The value is increased first, then used in the expression.

Postfix

x++;

The current value is used first, then increased.

Example:

int x = 5;

cout << ++x;

Output:

6

Because x is increased before printing.

Example:

int x = 5;

cout << x++;

Output:

5

After printing, x becomes:

6

Simple Definition

Increment and decrement operators increase or decrease a value by 1.

---

7. Bitwise Operators

Bitwise operators work directly with the individual bits of integer values.

Computers represent numbers using binary:

0 and 1

Example:

5 = 101
3 = 011

Bitwise Operators

&   Bitwise AND
|   Bitwise OR
^   Bitwise XOR
~   Bitwise NOT
<<  Left Shift
>>  Right Shift

---

Bitwise AND "&"

Both bits must be 1 to produce 1.

1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0

Example:

  101
& 011
-----
  001

---

Bitwise OR "|"

If at least one bit is 1, result is 1.

1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0

Example:

  101
| 011
-----
  111

---

Bitwise XOR "^"

XOR gives 1 when the bits are different.

1 ^ 1 = 0
1 ^ 0 = 1
0 ^ 1 = 1
0 ^ 0 = 0

Example:

  101
^ 011
-----
  110

---

Bitwise NOT "~"

NOT reverses each bit.

0 → 1
1 → 0

In C++, the exact numeric result of "~" depends on the integer type and its representation, so it is better to understand it first as a bitwise complement.

---

Left Shift "<<"

Moves bits to the left.

Example:

0011 << 1

gives:

0110

---

Right Shift ">>"

Moves bits to the right.

Example:

1100 >> 1

gives:

0110

Simple Definition

Bitwise operators perform operations on the individual binary bits of integer values.

---

8. Conditional Operator "?:"

The conditional operator is a short way to write a simple "if-else" expression.

It is also called the ternary operator because it has three parts.

Syntax

condition ? value_if_true : value_if_false;

Example

int age = 20;

string result = (age >= 18) ? "Adult" : "Minor";

Here C++ checks:

age >= 18

If true:

"Adult"

If false:

"Minor"

Easy Memory Trick

condition ? true-value : false-value

Simple Definition

Conditional operator selects one of two values based on a condition.

---

9. sizeof Operator

"sizeof" is used to find the size in bytes occupied by a type or object.

Example

int x = 10;

cout << sizeof(x);

On many common systems, this may print:

4

But the exact size depends on the implementation.

We can also write:

cout << sizeof(int);

Example

double x = 10.5;

cout << sizeof(x);

Important

"sizeof" tells us how much memory a type or object occupies, measured in bytes.

Simple Definition

sizeof = Used to find the size in bytes of a type or object.

---

10. Comma Operator ","

The comma operator allows multiple expressions to be evaluated in sequence.

The rightmost expression provides the result of the comma expression.

Example

int x;

x = (10, 20, 30);

The expressions are evaluated from left to right:

10 → evaluated
20 → evaluated
30 → evaluated

The final value is:

30

Therefore:

x = 30

Important

Do not confuse the comma operator with commas used simply as separators, such as in function arguments or variable declarations.

Simple Definition

Comma operator evaluates multiple expressions and produces the value of the last expression.

---

11. Scope Resolution Operator "::"

The scope resolution operator is:

::

It is used to specify the scope or owner of a name.

Think of it as:

«"Ee name evariki belong avtundi?"»

---

Example with Class

class Student {
public:
    void show();
};

void Student::show() {
    cout << "Hello";
}

Here:

Student::show()

means:

«The "show()" function belongs to the "Student" class.»

---

Example with Namespace

std::cout

Here:

std → namespace
cout → member of std

"::" tells C++ that "cout" belongs to the "std" namespace.

Simple Definition

Scope resolution operator "::" is used to specify the scope to which a name belongs.

---

12. Member Access Operator "."

The dot operator "." is used to access a member of an object.

Example

class Student {
public:
    int age;
};

Student s;

s.age = 20;

Here:

s   → object
.   → member access operator
age → member

So:

s.age

means:

«Access the "age" member of object "s".»

It can also be used to call a member function:

s.show();

Simple Definition

"." is used to access members of an object.

---

13. Arrow Operator "->"

The arrow operator is used to access a member through a pointer to an object.

Example

class Student {
public:
    int age;
};

Student s;

Student* p = &s;

p->age = 20;

Here:

p → pointer to Student
age → member
-> → accesses the member through the pointer

Important Relationship

These two are equivalent:

p->age

and

(*p).age

The arrow operator is basically a convenient way to access a member through a pointer.

Easy Memory Trick

Object → .
Pointer to object → ->

Simple Definition

"->" is used to access members of an object through a pointer.

---

14. Address-of Operator "&"

The address-of operator "&" gives the memory address of a variable.

Example

int x = 10;

cout << &x;

The output may look something like:

0x61ff08

The exact address is not fixed and may be different each time.

Pointer Example

int x = 10;

int* p = &x;

Here:

x  → variable
&x → address of x
p  → stores the address of x

So:

p = &x;

means:

«Store the address of "x" in "p".»

Simple Definition

"&" gives the memory address of a variable.

---

15. Dereference Operator "*"

The dereference operator "*" is used with a pointer to access the value stored at the address held by that pointer.

Example

int x = 10;

int* p = &x;

cout << *p;

Output:

10

Why?

x = 10
   ↓
&p = address of x
   ↓
p stores that address
   ↓
*p goes to that address
   ↓
gets the value 10

We can also modify the value:

*p = 20;

Now:

x = 20

Important Difference

The symbols "&" and "*" are closely related in pointer operations:

int* p = &x;

Here:

&x → address of x
*p → value stored at the address in p

Simple Definition

Dereference operator "*" is used to access the value stored at the memory address held by a pointer.

---

16. Operator Precedence and Associativity

When an expression contains multiple operators, C++ needs rules to decide:

1. Which operator should be evaluated first?
2. If operators have the same precedence, which direction should they be evaluated?

These rules are called precedence and associativity.

---

Operator Precedence

Precedence tells us which operator has higher priority.

Example:

int result = 2 + 3 * 4;

Multiplication has higher precedence than addition.

So C++ first calculates:

3 * 4 = 12

Then:

2 + 12 = 14

Therefore:

result = 14

Not 20.

---

Parentheses Have High Priority

We can use parentheses to explicitly control the order.

int result = (2 + 3) * 4;

First:

2 + 3 = 5

Then:

5 * 4 = 20

Therefore:

result = 20

Easy Rule

When in doubt, use parentheses.

---

Associativity

Associativity tells us the direction of evaluation when operators have the same precedence.

For example:

10 - 5 + 2

"-" and "+" have the same precedence.

They are evaluated left to right.

10 - 5 = 5
5 + 2 = 7

Therefore:

7

---

Important General Precedence Order

A simplified order for commonly used operators is:

()
↓
* / %
↓
+ -
↓
< > <= >=
↓
== !=
↓
&&
↓
||
↓
?:
↓
= += -= *= /= %=

Higher-precedence operators are generally evaluated before lower-precedence operators.

This is only a simplified list; C++ has a more complete precedence table.

---

⭐ Complete Operator Cheat Sheet

+ - * / %       → Arithmetic / calculations

> < >= <=       → Compare values
== !=

&&              → AND
||              → OR
!               → NOT

=               → Assign
+= -= *= /= %=  → Update and assign

++              → Increase by 1
--              → Decrease by 1

& | ^ ~         → Bitwise operations
<< >>           → Bit shifts

?:              → Conditional / ternary

sizeof          → Size in bytes

,               → Comma expression

::              → Scope / belonging to

.               → Access object member

->              → Access member through object pointer

&               → Address of a variable

*               → Dereference a pointer

Precedence      → Which operator has priority?

Associativity   → Direction when operators have equal precedence

🧠 Most Important Things to Remember

&x  → Address of x

*p  → Value at the address stored in p

s.age
→ age of object s

p->age
→ age through pointer p

Student::show()
→ show() belongs to Student

sizeof(x)
→ size of x in bytes

++x
→ increase x by 1 before using it

x++
→ use x first, then increase it

?: 
→ short form for choosing between two values

&&
→ all conditions must be true

||
→ at least one condition must be true

!
→ reverse true/false

%
→ remainder

One-Line Summary

Operators are symbols used to perform different operations in C++, such as calculations, comparisons, logical operations, assignments, bit operations, memory access, and more.
