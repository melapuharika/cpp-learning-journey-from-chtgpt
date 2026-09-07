# Lesson 5 - Type Conversion

## Topics

1. Type Conversion

2. Implicit Conversion

3. Explicit Conversion

4. C-style Cast

5. static_cast

6. const_cast

7. dynamic_cast

8. reinterpret_cast

## topic:1. Type Conversion

Type conversion means converting a value from one data type to another data type.

Example

int a = 10;
float b = a;

Here, the integer value "10" is converted from "int" to "float".

int → float

Types of Type Conversion

Type conversion is mainly divided into two types:

1. Implicit Conversion – The compiler automatically converts the data type.
2. Explicit Conversion – The programmer manually converts the data type.

Simple Definition

Type Conversion = Changing a value from one data type to another data type.

Example Data Type Conversions

int → float
float → int
char → int
int → double


## topic:2 Implicit Conversion

Implicit conversion means automatic conversion of one data type into another data type by the compiler.

We do not need to manually tell the compiler to convert the data type.

Example

int a = 10;
double b = a;

Here, the compiler automatically converts:

int → double

So, this is called Implicit Conversion.

Another Example

int x = 5;
float y = x;

cout << y;

Output:

5

Here, "int" is automatically converted into "float".

Important Point

Implicit conversion can happen when converting a value from one compatible data type to another.

Example:

int → float
int → double

However, when converting from a type that can store decimal values to an integer, the decimal part may be lost.

Example

double x = 10.75;
int y = x;

cout << y;

Output:

10

The ".75" is lost because "int" cannot store decimal values.

Simple Definition

Implicit Conversion = Automatic conversion performed by the compiler.


3. Explicit Conversion

Explicit conversion means manually converting one data type into another data type by the programmer.

Here, the programmer tells the compiler which data type the value should be converted to.

Example

double a = 10.75;
int b = (int)a;

cout << b;

Output:

10

Here:

double → int

The programmer explicitly converts "double" into "int" using "(int)".

The decimal part ".75" is lost because "int" cannot store decimal values.

Implicit vs Explicit Conversion

Implicit Conversion:

int a = 10;
double b = a;

The compiler automatically performs the conversion.

## topic :3 Explicit Conversion:

double a = 10.75;
int b = (int)a;

The programmer manually performs the conversion.

Methods of Explicit Conversion in C++

1. C-style Cast
2. static_cast
3. const_cast
4. dynamic_cast
5. reinterpret_cast

Simple Definition

Explicit Conversion = Manually converting one data type into another data type.



## topic:4 C-style Cast

C-style cast is a way of converting one data type into another using the C language style of type casting.

The target data type is written inside parentheses "( )".

Syntax

(target_data_type)value;

Example

double a = 10.75;

int b = (int)a;

cout << b;

Output:

10

Here:

double → int

The "(int)" tells the compiler to convert the value into an integer.

The decimal part ".75" is lost because "int" cannot store decimal values.

Example with Division

int a = 10;
int b = 3;

double result = (double)a / b;

cout << result;

Output:

3.33333

Here, "(double)a" converts "a" from "int" to "double".

Therefore, the division produces a decimal result.

Important Point

C-style casts work in C++, but C++-style casts such as "static_cast" are generally preferred because they make the programmer's intention clearer.

Simple Definition

C-style Cast = Converting a data type using "(data_type)value" syntax.



## topic:5 static_cast

"static_cast" is a C++-style type conversion operator.

It is used to explicitly convert a value from one compatible data type to another.

Syntax

static_cast<target_type>(value);

Example

double a = 10.75;

int b = static_cast<int>(a);

cout << b;

Output:

10

Here:

double → int

The decimal part ".75" is lost because "int" cannot store decimal values.

Another Example

int x = 10;

double y = static_cast<double>(x);

cout << y;

Output:

10

Here:

int → double

Example with Division

int a = 10;
int b = 3;

double result = static_cast<double>(a) / b;

cout << result;

Output:

3.33333

"static_cast<double>(a)" converts "a" from "int" to "double", allowing decimal division.

C-style Cast vs static_cast

C-style cast:

int b = (int)a;

C++-style cast:

int b = static_cast<int>(a);

"static_cast" is generally preferred in modern C++ because the conversion is more explicit and easier to understand.

Simple Definition

static_cast = A C++-style cast used for explicit conversion between compatible data types.



## topic 6. const_cast

"const_cast" is a C++ cast used to add or remove the "const" qualifier from a pointer or reference.

What is const?

"const" means a value should not be modified through that variable.

const int x = 10;

Here, "x" cannot normally be changed.

Example of const_cast

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    const int* p = &x;

    int* q = const_cast<int*>(p);

    *q = 20;

    cout << x;

    return 0;
}

Output

20

How does it work?

int x = 10
    ↓
const int* p
    ↓
const_cast
    ↓
int* q
    ↓
*q = 20

Here, "x" was originally a normal (non-const) integer.

"p" is a pointer that treats "x" as "const".

"const_cast" removes the "const" qualifier from the pointer, allowing the value to be modified through "q".

Important Warning ⚠️

If the original object itself is declared as "const", we must NOT modify it using "const_cast".

const int x = 10;

const int* p = &x;

int* q = const_cast<int*>(p);

*q = 20;   // ❌ Undefined Behavior

The reason is that "x" was originally created as a "const" object.

Key Point

"const_cast" does not make an originally-const object safely modifiable.

It only changes the "const" qualifier of a pointer or reference.

Simple Definition

const_cast = A C++ cast used to add or remove the "const" qualifier from a pointer or reference.


## topic:7 dynamic_cast

"dynamic_cast" is a C++ cast mainly used for type conversion in an inheritance hierarchy.

It performs the conversion at runtime.

Parent and Child Classes

class Animal {
public:
    virtual void sound() {
    }
};

class Dog : public Animal {
public:
    void bark() {
    }
};

Here:

Animal → Parent / Base class
Dog    → Child / Derived class

Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks";
    }
};

int main() {

    Animal* a = new Dog();

    Dog* d = dynamic_cast<Dog*>(a);

    if (d != nullptr) {
        d->bark();
    }

    return 0;
}

Output

Dog barks

How does it work?

Animal* a
    ↓
Dog object
    ↓
dynamic_cast<Dog*>(a)
    ↓
Runtime checks the actual object
    ↓
Dog* d

Here, "a" is an "Animal" pointer, but it actually points to a "Dog" object.

"dynamic_cast" checks the actual object at runtime.

Since the object is a "Dog", the conversion succeeds.

If Conversion Fails

If the actual object is not a "Dog", a pointer "dynamic_cast" returns:

nullptr

So we can check:

if (d != nullptr) {
    // Conversion successful
}

Important Point

The base class should be polymorphic, which normally means it has at least one "virtual" function.

Example:

class Animal {
public:
    virtual void sound() {
    }
};

Simple Definition

dynamic_cast = A C++ cast used for safe runtime type conversion in an inheritance hierarchy.
