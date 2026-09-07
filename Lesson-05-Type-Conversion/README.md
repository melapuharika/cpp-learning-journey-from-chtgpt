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
