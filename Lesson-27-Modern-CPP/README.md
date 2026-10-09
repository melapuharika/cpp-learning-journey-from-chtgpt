Lesson 27 – Modern C++

C++11

- C++11 Features
- auto Keyword
- nullptr
- Range-Based For Loop
- Lambda Expressions
- Move Semantics
- Smart Pointers
- constexpr
- enum class

C++14

- C++14 Features
- Generic Lambda
- Return Type Deduction

C++17

- C++17 Features
- Structured Bindings
- if constexpr
- std::optional
- std::variant
- std::any
- Filesystem Library
- Fold Expressions

C++20

- C++20 Features
- Concepts
- Ranges
- Coroutines
- Modules
- Three-Way Comparison ( <=> )
- consteval
- constinit
- std::span

C++23

- C++23 Features
- std::expected
- std::print
- std::generator
- More C++23 Features


### topic 1

Lesson 27 – Topic 1: C++11 Features

1. Introduction

C++11 is a major version of the C++ programming language introduced in 2011.

It introduced several new features that make C++ programming easier, safer, and more efficient.

C++11 is also known as Modern C++'s first major standard update.

2. Why Was C++11 Introduced?

C++11 was introduced to:

- Make code easier to write and understand.
- Reduce unnecessary code.
- Improve memory management.
- Support modern programming techniques.
- Improve performance and type safety.
- Provide new features for efficient software development.

3. Important Features of C++11

3.1 auto Keyword

The "auto" keyword allows the compiler to automatically determine a variable's type from its initializer.

Example:

auto age = 19;
auto price = 99.5;

Here, "age" is an "int", and "price" is a "double".

3.2 nullptr

"nullptr" represents a null pointer. It was introduced to provide a type-safe alternative to "NULL" and "0" when representing null pointers.

Example:

int* ptr = nullptr;

3.3 Range-Based For Loop

A range-based "for" loop makes it easy to access every element in an array or collection.

Example:

int numbers[] = {10, 20, 30};

for (int n : numbers) {
    cout << n << " ";
}

Output:

10 20 30

3.4 Lambda Expressions

Lambda expressions allow us to create small anonymous functions directly where they are needed.

Example:

auto add = [](int a, int b) {
    return a + b;
};

cout << add(5, 3);

Output:

8

3.5 Move Semantics

Move semantics allows certain resources to be transferred from one object to another instead of unnecessarily copying them.

It can improve performance, especially when working with large objects and dynamically allocated resources.

3.6 Smart Pointers

Smart pointers help manage dynamically allocated memory automatically according to ownership rules.

Important smart pointers:

- "std::unique_ptr"
- "std::shared_ptr"
- "std::weak_ptr"

They are available through the "<memory>" header.

3.7 constexpr

The "constexpr" keyword allows functions and variables to participate in compile-time evaluation when the required conditions are satisfied.

Example:

constexpr int square(int n) {
    return n * n;
}

constexpr int result = square(5);

Here, "result" is initialized to "25" at compile time.

3.8 enum class

"enum class" provides scoped, strongly typed enumerations.

Example:

enum class Color {
    Red,
    Green,
    Blue
};

Color c = Color::Red;

It helps avoid naming conflicts and unintended conversions between enumeration values and integers.

4. Complete C++11 Example

#include <iostream>
using namespace std;

int main() {
    auto age = 19;
    int numbers[] = {10, 20, 30};

    cout << "Age: " << age << endl;

    cout << "Numbers: ";
    for (int n : numbers) {
        cout << n << " ";
    }

    return 0;
}

Output:

Age: 19
Numbers: 10 20 30

5. Advantages of C++11

- Improves code readability.
- Reduces repetitive code.
- Supports safer memory management.
- Introduces useful modern programming techniques.
- Can improve performance through move semantics.
- Makes many common programming tasks simpler.

6. Summary

C++11 introduced many important features that form the foundation of Modern C++.

The major features include "auto", "nullptr", range-based for loops, lambda expressions, move semantics, smart pointers, "constexpr", and "enum class".

Understanding these features helps programmers write cleaner, safer, and more efficient C++ programs.

7. Practice Questions

1. What is C++11?
2. Why was C++11 introduced?
3. What is the purpose of the "auto" keyword?
4. What is "nullptr"?
5. What is a range-based for loop?
6. What are lambda expressions?
7. What is move semantics?
8. What are smart pointers?
9. What is the purpose of "constexpr"?
10. What is the difference between "enum" and "enum class"?


### topic 2

Topic 2: auto Keyword in C++

1. Introduction

The "auto" keyword was introduced in C++11.

It allows the compiler to automatically determine the data type of a variable based on the value used to initialize it.

Simple Meaning:

Manam variable data type ni "int", "float", "double" ani separate ga rayakunda, "auto" use chesthe compiler automatic ga data type ni decide chestundi.

2. Syntax

auto variable_name = value;

- "auto" – compiler data type ni determine chestundi.
- "variable_name" – variable peru.
- "value" – variable ki assign chese starting value.

3. Example Program

#include <iostream>
using namespace std;

int main() {
    auto age = 19;
    auto price = 99.5;
    auto letter = 'A';

    cout << age << endl;
    cout << price << endl;
    cout << letter << endl;

    return 0;
}

Output

19
99.5
A

Explanation

Line 1:

auto age = 19;

"19" anedi integer value. Kabatti compiler "age" data type ni "int" ga determine chestundi.

Line 2:

auto price = 99.5;

"99.5" anedi decimal literal. C++ lo idi "double" type. Kabatti "price" type "double" avutundi.

Line 3:

auto letter = 'A';

"'A'" anedi single character. Kabatti "letter" type "char" avutundi.

4. How Does auto Work?

Declaration| Data type determined
"auto a = 10;"| "int"
"auto b = 10.5;"| "double"
"auto c = 'A';"| "char"
"auto d = true;"| "bool"
"auto e = 10L;"| "long"

Compiler, initialize cheyadaniki use chesina expression type ni base chesukoni variable type ni determine chestundi.

5. Without auto vs With auto

Without auto

int age = 19;
double price = 99.5;
char grade = 'A';

Ikkada maname data types rayali.

With auto

auto age = 19;
auto price = 99.5;
auto grade = 'A';

Ikkada compiler data types ni determine chestundi.

Rendu examples lo final variable types same ga untayi.

6. Important Rule: Initializer Is Required

Ordinary local variable declaration lo "auto" use chesthe, compiler ki type determine cheyadaniki initializer avasaram.

Correct:

auto number = 100;

Incorrect:

auto number;

Second example lo compiler ki "number" type determine cheyadaniki starting value ledu. Kabatti compilation error vastundi.

7. Can the Data Type Change Later?

Ledu. "auto" type ni automatic ga determine chestundi; variable type ni prathi assignment ki malli decide cheyyadu.

Example:

auto number = 10;

number = 20;   // Valid
number = 5.5;  // Allowed, but value converts to int

Ikkada "number" type "int" gaane untundi. "5.5" assign chesinappudu fractional part discard avutundi, kabatti value "5" avutundi.

8. Advantages of auto

- Reduces repetitive type declarations.
- Makes code shorter and easier to read in suitable situations.
- Useful when working with complex types and iterators.
- Helps avoid manually writing lengthy type names.

9. Important Points to Remember

- "auto" was introduced in C++11.
- The compiler determines the type from the initializer.
- "auto" does not mean that a variable has no data type.
- Once deduced, the variable's type does not change.
- The initial value affects the type deduction.

10. Practice Questions

1. What is the "auto" keyword in C++?
2. In which C++ standard was "auto" introduced?
3. What is the data type of "auto x = 25;"?
4. What is the data type of "auto y = 25.5;"?
5. Why is an initializer needed for an ordinary local "auto" variable?
6. Can an "auto" variable change its type after declaration?
7. Write a program using "auto" with "int", "double", and "char".

Conclusion

The "auto" keyword allows the C++ compiler to determine a variable's type from its initializer. It reduces repetitive declarations and is an important feature of Modern C++.


### topic 3

Topic 3: nullptr in C++

1. Introduction

"nullptr" is a special keyword introduced in C++11 to represent a null pointer.

A null pointer does not point to any valid object or function.

Simple Meaning:

Pointer ante memory address ni store chese variable.

Pointer prastutaniki ye valid object ni point cheyyakapothe, daniki "nullptr" assign cheyochu.

Example:

int* ptr = nullptr;

Here, "ptr" is an integer pointer that currently points to no object.

2. Syntax

data_type* pointer_name = nullptr;

Example:

int* ptr = nullptr;
double* value = nullptr;
char* character = nullptr;

Ikkada moodu pointers kuda null pointers.

3. Simple Example Program

#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;

    if (ptr == nullptr) {
        cout << "Pointer is null";
    }

    return 0;
}

Output

Pointer is null

Explanation

- "int* ptr" – integer pointer ni declare chestundi.
- "nullptr" – pointer ye object ni point cheyyatledu ani indicate chestundi.
- "if (ptr == nullptr)" – pointer null ga undo ledo check chestundi.
- Condition true kabatti message print avutundi.

4. Why Do We Use nullptr?

"nullptr" use cheyadaniki main reasons:

- Pointer currently ye object ni point cheyyatledu ani indicate cheyadaniki.
- Uninitialized or unavailable object address ni represent cheyadaniki, pointer ni explicit ga initialize cheyadaniki.
- Pointer valid object ni point chestundo ledo check cheyadaniki.
- Old-style null pointer constants valla vacche konni ambiguity problems ni avoid cheyadaniki.

Important: "nullptr" ni initialize cheyadam valla pointer safe ga null state lo untundi. Kaani tarvatha valid object address assign chesina appudu kuda correct lifetime and validity maintain cheyyali.

5. NULL vs nullptr

NULL| nullptr
Older code lo use chestaru| C++11 lo introduce chesaru
Usually integer constant "0" ga define chestaru| Special null pointer literal
Function overloading lo ambiguity ravachu| Pointer overload ni clear ga select chestundi
New C++ code lo less preferred| Null pointers kosam recommended

6. Function Overloading Example

#include <iostream>
using namespace std;

void show(int x) {
    cout << "Integer function";
}

void show(int* p) {
    cout << "Pointer function";
}

int main() {
    show(nullptr);

    return 0;
}

Output

Pointer function

Explanation

"show()" ane peru tho rendu functions unnayi:

- Oka function "int" argument teesukuntundi.
- Inko function "int*" argument teesukuntundi.

"nullptr" pointer argument kabatti "show(int*)" function call avutundi.

7. Important Safety Rule

Null pointer ni dereference cheyakudadhu.

Wrong:

int* ptr = nullptr;
cout << *ptr;

Ila null pointer ni dereference chesthe undefined behavior vastundi.

Correct:

int* ptr = nullptr;

if (ptr != nullptr) {
    cout << *ptr;
}

Ikkada pointer null kaakapothe matrame value access chestunnam.

8. Advantages of nullptr

- Pointer intent ni clear ga express chestundi.
- "NULL" kanna type-safe.
- Function overloading ambiguity ni avoid cheyagaladu.
- Code readability improve chestundi.
- Null pointers ni initialize cheyadaniki useful.

9. Important Points to Remember

- "nullptr" was introduced in C++11.
- It represents a null pointer.
- It is not the same as an uninitialized pointer.
- Null pointer ni dereference cheyakudadhu.
- Pointer null ga undo ledo "ptr == nullptr" tho check cheyochu.
- New C++ code lo null pointers kosam "nullptr" prefer cheyyali.

10. Practice Questions

1. What is "nullptr" in C++?
2. In which C++ standard was "nullptr" introduced?
3. What is a pointer?
4. What is the difference between "NULL" and "nullptr"?
5. Why should we avoid dereferencing a null pointer?
6. How can we check whether a pointer is null?
7. Write a program that initializes a pointer with "nullptr" and checks its value.

Conclusion

"nullptr" is a C++11 feature used to represent a null pointer. It makes pointer-related code clearer and safer than using older null pointer constants such as "0" or "NULL".
